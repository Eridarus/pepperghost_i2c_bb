#define I2C_SCL_PIN A5
#define I2C_SDA_PIN A4

#define DLY _NOP();

#define SDA_HIGH pinMode(I2C_SDA_PIN, INPUT); DLY
#define SDA_LOW pinMode(I2C_SDA_PIN, OUTPUT); DLY

#define SCL_HIGH pinMode(I2C_SCL_PIN, INPUT); DLY
#define SCL_LOW pinMode(I2C_SCL_PIN, OUTPUT); DLY

#define ADDR_W(A) ((A << 1) & 0xfe)
#define ADDR_R(A) ((A << 1) | 0x01)

#define SET_ACK SDA_LOW
#define SET_NACK SDA_HIGH

#define SDA_WRITE(x) ((x) > 0 ? ({SDA_HIGH}) : ({SDA_LOW}));

#define START_COND SDA_LOW SCL_LOW
#define STOP_COND SCL_LOW SDA_LOW SDA_HIGH SCL_HIGH

#define PULSE_SCL SCL_HIGH DLY SCL_LOW

const uint8_t InitLen = 27; 
const uint8_t turn_on[2]={
  0x00, 0xA5
};
const uint8_t turn_off[2]={
  0x00, 0xA4
};
const uint8_t Init[InitLen] = {
0x00, 0xAE,         // Display OFF
0xA8, 0x3F,   // set multiplex (HEIGHT-1): 0x1F for 128x32, 0x3F for 128x64
0xD3, 0x00,   // Display offset to 0
0x40,         // Set display start line to 0
0x8D, 0x14,   // Charge pump enabled
0x20, 0x00,   // Memory addressing mode 0x00 Horizontal 0x01 Vertical
0xDA, 0x02,   // Set COM Pins hardware configuration to sequential
0x81, 0x80,   // Set contrast
0xD9, 0xF1,   // Set pre-charge period
0xDB, 0x40,   // Set vcom detect

0x22, 0x00, 0x03, // Page min to max
0x21, 0x00, 0x7F, // Column min to max
0xAF, 0xA5  // Display on
};

uint8_t send_8b(uint8_t data){
  for(uint8_t i=8; i>=1; i--){
    SDA_WRITE(0x01&(data >> (i-1)))
    PULSE_SCL
  }
  DLY
  SDA_HIGH
  SCL_HIGH
  DLY
  uint8_t ack = digitalRead(I2C_SDA_PIN);
  SCL_LOW
  return ack;
}

uint8_t rcv_8b(uint8_t final_bit){
  uint8_t rx=0;
  for(uint8_t i=0; i<8; i++){
    do {
      SCL_HIGH
    }while(digitalRead(I2C_SCL_PIN)==0); //clock stretching
    rx <<=1;
    rx = rx & (digitalRead(I2C_SDA_PIN) & 0x01);
    SCL_LOW
    DLY
  }
  
  if(final_bit == 0) {SET_NACK} else {SET_ACK} //SET ACK
  SCL_HIGH
  DLY
  SCL_LOW
  SDA_HIGH
  return rx;
}

void receiveBytesRead(uint8_t addr, uint8_t *buff, uint8_t num_bytes){
  START_COND
  uint8_t ack = send_8b(ADDR_R(addr));
  uint8_t i = 0;
  while(i < num_bytes && ack==0){
    buff[i] = rcv_8b( i==(num_bytes-1) ? 0x01 : 0x00);
    i++;
  }
}

void sendBytesWrite(uint8_t addr, uint8_t *data, uint8_t num_bytes){
  START_COND
  uint8_t ack = send_8b(ADDR_W(addr));
  //  Serial.println(ack);
  uint8_t i = 0;
  while(ack == 0 & i < num_bytes){
    ack=send_8b(data[i]);
    i++;
  }
  STOP_COND
}

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
  sendBytesWrite(0x3C, Init, InitLen);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  uint8_t q;
  for(uint8_t a= 1 ; a < 128 ; a++){
    START_COND
    q=send_8b(ADDR_W(a));
    STOP_COND
    if(q == 0){
      Serial.print("I2C Device found at: ");
      Serial.println(a, HEX);
    }
  }
  digitalWrite(LED_BUILTIN, HIGH);
  sendBytesWrite(0x3C, turn_on, 2);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  sendBytesWrite(0x3C, turn_off, 2);
  delay(1000);
}