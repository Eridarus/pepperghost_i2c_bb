//HEADER FILE TO COPY/PASTE FOR I2C BITBANG

#define I2C_SCL_PIN 2
#define I2C_SDA_PIN 0

#define DLY _NOP();

#define SDA_HIGH pinMode(I2C_SDA_PIN, INPUT); DLY
#define SDA_LOW pinMode(I2C_SDA_PIN, OUTPUT); DLY

#define SCL_HIGH pinMode(I2C_SCL_PIN, INPUT); DLY
#define SCL_LOW pinMode(I2C_SCL_PIN, OUTPUT); DLY

#define ADDR_W(A) (((A) << 1) & 0xfe)
#define ADDR_R(A) (((A) << 1) | 0x01)

#define SET_ACK SDA_LOW
#define SET_NACK SDA_HIGH

#define SDA_WRITE(x) ((x) > 0 ? ({SDA_HIGH}) : ({SDA_LOW}));

#define START_COND SDA_LOW DLY SCL_LOW
#define STOP_COND SCL_LOW SDA_LOW DLY SCL_HIGH DLY SDA_HIGH
#define START_REPEAT SDA_LOW DLY SDA_HIGH DLY SCL_HIGH

#define PULSE_SCL SCL_HIGH DLY SCL_LOW

#define NUM_DISP_BYTES (128*8)

#define WIDTH 128
#define HEIGHT 64
#define NUM_FRAMES 5

//=============================Preformatted uint8_t array for I2C workshop==============================
const static uint8_t img_data[NUM_FRAMES][128*8] PROGMEM = {
{
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0xE0, 0xE0, 0x60, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xFC, 0xF8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x70, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xF, 0x1E, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC7, 0xC7, 0xC7, 0x87, 0x87, 0x7, 0xF, 0x1F, 0x1F, 0x1F, 0x1F, 0x3, 0x17, 
0x27, 0x4F, 0x8F, 0xF, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x30, 0x10, 0xF0, 0xF0, 0xF0, 0xE1, 0x41, 0x1, 0x3, 0x3, 0xC0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF8, 0xFC, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x3, 0x7, 0xF, 0x1E, 0x3C, 0x78, 0xF0, 0xE0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x1, 0x1, 0x1, 0x1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xF8, 0xFF, 0x7F, 0x1F, 0x7F, 0xFF, 0xF0, 0xC0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x83, 0x1, 0x1, 0x1, 0x1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x1F, 0x1F, 0xF, 0x1, 0x1, 0x81, 0xC1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x20, 0x0, 0x0, 0x40, 0x80, 0x1, 0x2, 0x4, 0x18, 0x20, 0xC0, 0x80, 0x18, 0xE0, 0x0, 0x80, 0x21, 0x18, 0x4, 0x42, 0xE0, 0xF0, 0xFC, 0xFE, 0xFF, 0xFF, 0x1F, 0xCF, 0xEF, 0xF, 0xFF, 0xFF, 0xF0, 0xE0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x3F, 0x3F, 0x1F, 0x1F, 0xF, 0x3, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xE0, 0xF0, 0x78, 0x3F, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x1, 0x83, 0xF3, 0xFF, 0x3F, 0xF, 0x0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x80, 0xF0, 0xFE, 0xFF, 0x3F, 0x39, 0x38, 0x38, 0x38, 0x39, 0xFF, 0xFF, 0xFC, 0xE0, 0x0, 0x1, 0x3, 0x7, 0x7, 0x7, 
0x7, 0x7, 0x7, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFC, 0xFE, 0xFE, 0xE, 0x7, 0x7, 0x3, 0xF1, 0xF8, 0xF8, 0x0, 0x0, 0xF, 0xF, 0xF, 0x3F, 0x3F, 0x3F, 0x1E, 0x88, 0x41, 0x61, 0x31, 0x39, 0x9, 0x9, 0x5, 0xE7, 0x3F, 0x8F, 0x9F, 0xB3, 0x23, 0x42, 0x9A, 0x3A, 0x7C, 0xFC, 0xFC, 0xFC, 0x7E, 0x3E, 0x1F, 0xF, 0x3, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0xC, 0xE, 0xF, 0x7, 0x3, 0x1, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 0x0, 0x0, 0xC, 0xF, 0xF, 0x3, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
0xF, 0x0, 0xC, 0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xF, 0xF, 0xF, 0xE, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 
0x0, 0x0, 0x3, 0x7, 0xF, 0xE, 0xE, 0xE, 0xE, 0xF, 0x7, 0x3, 0x0, 0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x1, 0x0, 0x10, 0x30, 0x70, 0xFC, 0xFE, 0xFE, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7E, 0x7D, 0x3C, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x10, 0x0, 0x4, 0x0, 0x2, 0x1, 0x0, 0x0, 0x10, 0x8, 0x4, 0x2, 0x1, 0x0, 0x0, 0x0, 0x8, 0x18, 0x30, 0x10, 0x10, 0x8, 0x0, 0x0, 0xF, 0xF0, 0x1, 0x5, 0x49, 0x89, 0x89, 0x89, 0x89, 0x49, 0x5, 0x1, 0xF0, 0xF, 0x0, 0x0, 0x0, 0x4, 0x6, 0x6, 0x6, 0x2, 0x2, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x2, 0xC, 0x8, 
0x8, 0x8, 0x8, 0x8, 0x8, 0xC, 0x2, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
},
{
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF8, 0xF0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x1E, 0x3C, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
0xC0, 0xC0, 0xC0, 0xC1, 0x81, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xCF, 0xCF, 0xCF, 0x8F, 0x8F, 0xF, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x7, 0x2F, 0x4F, 0x9F, 0x1F, 0x1F, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0x20, 0xE0, 0xE1, 0xE1, 0xC3, 0x83, 0x3, 0x7, 0x7, 0x81, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x7, 0xF, 0x1E, 0x3C, 0xF8, 0xF0, 0xE0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x1, 0x1, 0x1, 0x1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xF8, 0xFF, 0x7F, 0x1F, 0x7F, 0xFF, 0xF0, 0xC0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x83, 0x1, 0x1, 0x1, 0x1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x1F, 0x1F, 0xF, 0x1, 0x1, 0x81, 0xC1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x40, 0x0, 0x0, 0x80, 0x1, 0x2, 0x4, 0x8, 0x30, 0x40, 0x80, 0x0, 0x30, 0xC0, 0x0, 0x0, 0x43, 0x31, 0x9, 0x85, 0xC0, 0xE0, 0xF8, 0xFC, 0xFF, 0xFF, 0x3F, 0x9F, 0xDF, 0x1F, 0xFF, 0xFF, 0xE0, 0xC0, 0x80, 0x80, 0x80, 0x0, 0x0, 0x0, 0x7E, 0x7E, 0x3F, 0x3F, 0x1F, 0x7, 0x3, 0x3, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xE0, 0xF0, 0x7F, 0x3F, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x1, 0x83, 0xF3, 0xFF, 0x3F, 0xF, 0x0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x80, 0xF0, 0xFE, 0xFF, 0x3F, 0x39, 0x38, 0x38, 0x38, 0x39, 0xFF, 0xFF, 0xFC, 0xE0, 0x0, 0x1, 0x3, 0x7, 0x7, 0x7, 
0x7, 0x7, 0x7, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFC, 0xFE, 0xFE, 0xE, 0x7, 0x7, 0x3, 0xF1, 0xF8, 0xF8, 0x0, 0x0, 0x1E, 0x1E, 0x1E, 0x7E, 0x7E, 0x7E, 
0x3C, 0x10, 0x83, 0xC2, 0x62, 0x72, 0x12, 0x12, 0xB, 0xCF, 0x7E, 0x1F, 0x3E, 0x67, 0x46, 0x84, 0x34, 0x74, 0xF9, 0xF9, 0xF9, 0xF9, 0xFD, 0x7D, 0x3E, 0x1F, 0x7, 0x0, 0x3, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xE, 0xF, 0x7, 0x3, 0x1, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 0x0, 0x0, 0xC, 0xF, 0xF, 0x3, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
0xF, 0x0, 0xC, 0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xF, 0xF, 0xF, 0xE, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 
0x0, 0x0, 0x3, 0x7, 0xF, 0xE, 0xE, 0xE, 0xE, 0xF, 0x7, 0x3, 0x0, 0x0, 0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x1, 0x20, 0x60, 0xE0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFD, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFD, 0xFC, 0xFA, 0x79, 0xF, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x20, 0x0, 0x8, 0x0, 0x4, 0x2, 0x0, 0x0, 0x20, 0x10, 0x8, 0x4, 0x2, 0x1, 0x0, 0x0, 0x10, 0x30, 0x60, 0x20, 0x20, 0x10, 0x0, 0x0, 0x1E, 0xE1, 0x3, 0xB, 0x93, 0x13, 0x13, 0x13, 0x13, 0x93, 0xB, 0x3, 0xE1, 0x1E, 0x0, 0x0, 0x0, 0x8, 0xC, 0xC, 0xC, 0x4, 0x4, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x4, 0x18, 0x10, 0x11, 0x11, 0x11, 0x11, 0x10, 0x18, 0x4, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
},
{
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x3C, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
0xC0, 0xC0, 0xC0, 0xC3, 0x83, 0x1, 0x1, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xDF, 0xDF, 0xDF, 0x9F, 0x9F, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0xF, 0x5F, 0x9F, 0x3F, 0x3F, 0x3F, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0x40, 0xC1, 0xC3, 0xC3, 0x87, 0x7, 0x7, 0xF, 0xF, 0x3, 0x81, 0xC0, 0xC0, 
0xC0, 0xC0, 0xE0, 0xF0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x7, 0xF, 0x1E, 0x3C, 0xF8, 0xF0, 0xE0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x1, 0x1, 0x1, 0x1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xF8, 0xFF, 0x7F, 0x1F, 0x7F, 0xFF, 0xF0, 0xC0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x83, 0x1, 0x1, 0x1, 0x1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x1F, 0x1F, 0xF, 0x1, 0x1, 0x81, 0xC1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x20, 0x0, 0x0, 0x80, 0x0, 0x0, 0x1, 0x2, 0x4, 0x8, 0x10, 0x60, 0x80, 0x0, 0x0, 0x60, 0x80, 0x0, 0x0, 0x87, 0x63, 0x13, 0xB, 0x81, 0xC0, 0xF0, 0xF8, 0xFF, 0xFF, 0x7F, 0x3F, 0xBF, 0x3F, 0xFF, 0xFF, 0xC0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xFC, 0xFC, 0x7E, 0x7F, 0x3F, 0xF, 0x7, 0x6, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xE0, 0xF0, 0x7F, 0x3F, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x1, 0x83, 0xF3, 0xFF, 0x3F, 0xF, 0x0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x80, 0xF0, 0xFE, 0xFF, 0x3F, 0x39, 0x38, 0x38, 0x38, 0x39, 0xFF, 0xFF, 0xFC, 0xE0, 0x0, 0x1, 0x3, 0x7, 0x7, 0x7, 
0x7, 0x7, 0x7, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFC, 0xFE, 0xFE, 0xE, 0x7, 0x7, 0x3, 0xF1, 0xF8, 0xF8, 0x0, 0x0, 0x3C, 0x3C, 0x3C, 0xFC, 0xFC, 0xFC, 
0x78, 0x21, 0x6, 0x84, 0xC4, 0xE4, 0x24, 0x24, 0x17, 0x9E, 0xFC, 0x3F, 0x7C, 0xCE, 0x8C, 0x8, 0x68, 0xE9, 0xF3, 0xF3, 0xF3, 0xF3, 0xFB, 0xFB, 0x7C, 0x3F, 0xF, 0x0, 0x7, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xE, 0xF, 0x7, 0x3, 0x1, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 0x0, 0x0, 0xC, 0xF, 0xF, 0x3, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
0xF, 0x0, 0xC, 0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xF, 0xF, 0xF, 0xE, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 
0x0, 0x0, 0x3, 0x7, 0xF, 0xE, 0xE, 0xE, 0xE, 0xF, 0x7, 0x3, 0x0, 0x0, 0x0, 0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x41, 0xC1, 0xC0, 0xF0, 0xF8, 0xF8, 0xFC, 0xFB, 0xFC, 0xFE, 0xFE, 0xFE, 0xFC, 0xFD, 0xFA, 0xF8, 0xF5, 0xF3, 0x1F, 0x3, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x40, 0x0, 0x10, 0x0, 0x8, 0x4, 0x0, 0x0, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x1, 0x0, 0x20, 0x60, 0xC0, 0x40, 0x40, 0x20, 0x0, 0x0, 0x3D, 0xC3, 0x7, 0x17, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x17, 0x7, 0xC3, 0x3D, 0x1, 0x0, 0x0, 0x10, 0x18, 0x18, 0x18, 0x8, 0x8, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0x8, 0x30, 0x21, 0x22, 0x22, 0x22, 0x22, 0x21, 0x30, 0x8, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
},
{
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x3C, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
0xC0, 0xC0, 0xC0, 0xC3, 0x83, 0x1, 0x1, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xDF, 0xDF, 0xDF, 0x9F, 0x9F, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0xF, 0x5F, 0x9F, 0x3F, 0x3F, 0x3F, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0x40, 0xC1, 0xC3, 0xC3, 0x87, 0x7, 0x7, 0xF, 0xF, 0x3, 0x81, 0xC0, 0xC0, 
0xC0, 0xC0, 0xE0, 0xF0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x7, 0xF, 0x1E, 0x3C, 0xF8, 0xF0, 0xE0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x1, 0x1, 0x1, 0x1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xF8, 0xFF, 0x7F, 0x1F, 0x7F, 0xFF, 0xF0, 0xC0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x83, 0x1, 0x1, 0x1, 0x1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x1F, 0x1F, 0xF, 0x1, 0x1, 0x81, 0xC1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x20, 0x0, 0x0, 0x80, 0x0, 0x0, 0x1, 0x2, 0x4, 0x8, 0x10, 0x60, 0x80, 0x0, 0x0, 0x60, 0x80, 0x0, 0x0, 0x87, 0x63, 0x13, 0xB, 0x81, 0xC0, 0xF0, 0xF8, 0xFF, 0xFF, 0x7F, 0x3F, 0xBF, 0x3F, 0xFF, 0xFF, 0xC0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xFC, 0xFC, 0x7E, 0x7F, 0x3F, 0xF, 0x7, 0x6, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xE0, 0xF0, 0x7F, 0x3F, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x1, 0x83, 0xF3, 0xFF, 0x3F, 0xF, 0x0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x80, 0xF0, 0xFE, 0xFF, 0x3F, 0x39, 0x38, 0x38, 0x38, 0x39, 0xFF, 0xFF, 0xFC, 0xE0, 0x0, 0x1, 0x3, 0x7, 0x7, 0x7, 
0x7, 0x7, 0x7, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFC, 0xFE, 0xFE, 0xE, 0x7, 0x7, 0x3, 0xF1, 0xF8, 0xF8, 0x0, 0x0, 0x3C, 0x3C, 0x3C, 0xFC, 0xFC, 0xFC, 
0x78, 0x21, 0x6, 0x84, 0xC4, 0xE4, 0x24, 0x24, 0x17, 0x9E, 0xFC, 0x3F, 0x7C, 0xCE, 0x8C, 0x8, 0x68, 0xE9, 0xF3, 0xF3, 0xF3, 0xF3, 0xFB, 0xFB, 0x7C, 0x3F, 0xF, 0x0, 0x7, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xE, 0xF, 0x7, 0x3, 0x1, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 0x0, 0x0, 0xC, 0xF, 0xF, 0x3, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
0xF, 0x0, 0xC, 0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xF, 0xF, 0xF, 0xE, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 
0x0, 0x0, 0x3, 0x7, 0xF, 0xE, 0xE, 0xE, 0xE, 0xF, 0x7, 0x3, 0x0, 0x0, 0x0, 0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x41, 0xC1, 0xC0, 0xF0, 0xF8, 0xF8, 0xFC, 0xFB, 0xFC, 0xFE, 0xFE, 0xFE, 0xFC, 0xFD, 0xFA, 0xF8, 0xF5, 0xF3, 0x1F, 0x3, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x40, 0x0, 0x10, 0x0, 0x8, 0x4, 0x0, 0x0, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x1, 0x0, 0x20, 0x60, 0xC0, 0x40, 0x40, 0x20, 0x0, 0x0, 0x3D, 0xC3, 0x7, 0x17, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x17, 0x7, 0xC3, 0x3D, 0x1, 0x0, 0x0, 0x10, 0x18, 0x18, 0x18, 0x8, 0x8, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0x8, 0x30, 0x21, 0x22, 0x22, 0x22, 0x22, 0x21, 0x30, 0x8, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
},
{
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF8, 0xF0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x1E, 0x3C, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xC0, 0xC0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
0xC0, 0xC0, 0xC0, 0xC1, 0x81, 0x0, 0x0, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xCF, 0xCF, 0xCF, 0x8F, 0x8F, 0xF, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x7, 0x2F, 0x4F, 0x9F, 0x1F, 0x1F, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x60, 0x20, 0xE0, 0xE1, 0xE1, 0xC3, 0x83, 0x3, 0x7, 0x7, 0x81, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x80, 0x80, 0x80, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x7, 0xF, 0x1E, 0x3C, 0xF8, 0xF0, 0xE0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x1, 0x1, 0x1, 0x1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xF8, 0xFF, 0x7F, 0x1F, 0x7F, 0xFF, 0xF0, 0xC0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x83, 0x1, 0x1, 0x1, 0x1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x1F, 0x1F, 0xF, 0x1, 0x1, 0x81, 0xC1, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x40, 0x0, 0x0, 0x80, 0x1, 0x2, 0x4, 0x8, 0x30, 0x40, 0x80, 0x0, 0x30, 0xC0, 0x0, 0x0, 0x43, 0x31, 0x9, 0x85, 0xC0, 0xE0, 0xF8, 0xFC, 0xFF, 0xFF, 0x3F, 0x9F, 0xDF, 0x1F, 0xFF, 0xFF, 0xE0, 0xC0, 0x80, 0x80, 0x80, 0x0, 0x0, 0x0, 0x7E, 0x7E, 0x3F, 0x3F, 0x1F, 0x7, 0x3, 0x3, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xC0, 0xE0, 0xF0, 0x7F, 0x3F, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x1, 0x83, 0xF3, 0xFF, 0x3F, 0xF, 0x0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0x80, 0xF0, 0xFE, 0xFF, 0x3F, 0x39, 0x38, 0x38, 0x38, 0x39, 0xFF, 0xFF, 0xFC, 0xE0, 0x0, 0x1, 0x3, 0x7, 0x7, 0x7, 
0x7, 0x7, 0x7, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFC, 0xFE, 0xFE, 0xE, 0x7, 0x7, 0x3, 0xF1, 0xF8, 0xF8, 0x0, 0x0, 0x1E, 0x1E, 0x1E, 0x7E, 0x7E, 0x7E, 
0x3C, 0x10, 0x83, 0xC2, 0x62, 0x72, 0x12, 0x12, 0xB, 0xCF, 0x7E, 0x1F, 0x3E, 0x67, 0x46, 0x84, 0x34, 0x74, 0xF9, 0xF9, 0xF9, 0xF9, 0xFD, 0x7D, 0x3E, 0x1F, 0x7, 0x0, 0x3, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xE, 0xF, 0x7, 0x3, 0x1, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 0x0, 0x0, 0xC, 0xF, 0xF, 0x3, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
0xF, 0x0, 0xC, 0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xF, 0xF, 0xF, 0xE, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 
0x0, 0x0, 0x3, 0x7, 0xF, 0xE, 0xE, 0xE, 0xE, 0xF, 0x7, 0x3, 0x0, 0x0, 0x80, 0x40, 0x20, 0x10, 0x8, 0x4, 0x2, 0x1, 0x20, 0x60, 0xE0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFD, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFD, 0xFC, 0xFA, 0x79, 0xF, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x20, 0x0, 0x8, 0x0, 0x4, 0x2, 0x0, 0x0, 0x20, 0x10, 0x8, 0x4, 0x2, 0x1, 0x0, 0x0, 0x10, 0x30, 0x60, 0x20, 0x20, 0x10, 0x0, 0x0, 0x1E, 0xE1, 0x3, 0xB, 0x93, 0x13, 0x13, 0x13, 0x13, 0x93, 0xB, 0x3, 0xE1, 0x1E, 0x0, 0x0, 0x0, 0x8, 0xC, 0xC, 0xC, 0x4, 0x4, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x4, 0x18, 0x10, 0x11, 0x11, 0x11, 0x11, 0x10, 0x18, 0x4, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
}
};
//=====================================End of image array===============================================
const uint8_t InitLen = 29; 
const uint8_t Init[InitLen] = {
0x00, 0xAE,         // Display OFF
0xA8, 0x3F,   // set multiplex (HEIGHT-1): 0x1F for 128x32, 0x3F for 128x64
0xD3, 0x00,   // Display offset to 0
0x40,         // Set display start line to 0
0x8D, 0x14,   // Charge pump enabled
0x20, 0x00,   // Memory addressing mode 0x00 Horizontal 0x01 Vertical 0x02 page
0xDA, 0x12,   // Set COM Pins hardware configuration to sequential
0x81, 0x80,   // Set contrast
0xD9, 0xF1,   // Set pre-charge period
0xDB, 0x40,   // Set vcom detect

//0x22, 0x00, 0x03, // Page min to max
//0x21, 0x00, 0x7F, // Column min to max
//0x00, 0x10, //Reset columns for page mode
//0xB0,       // Reset page pointer
0x21, 0x00, 0x7F, //Set columns start to 0 and column end to 127
0x22, 0x00, 0x07, //Set page start to 0 and page end to 7
0X81, 0xFF, //Contrast to max
0xAF, 0xA4  // Display on
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

void disp_img(uint8_t frameno, uint16_t del){
  START_COND
  send_8b(ADDR_W(0x3C));
  send_8b(0x00);
  send_8b(0x21);
  send_8b(0x00);
  send_8b(0x7F);
  send_8b(0x22);
  send_8b(0x00);
  send_8b(0x07);
  STOP_COND
  START_COND
  send_8b(ADDR_W(0x3C));
  send_8b(0x40);
  for(uint16_t j=0; j<128*8; j++){
    send_8b(pgm_read_byte_near(img_data[frameno] + j));
  }
  STOP_COND
  delay(del);
}

void clear_disp(){
  START_COND
  send_8b(ADDR_W(0x3C));
  send_8b(0x00);
  send_8b(0x21);
  send_8b(0x00);
  send_8b(0x7F);
  send_8b(0x22);
  send_8b(0x00);
  send_8b(0x07);
  STOP_COND
  START_COND
  send_8b(ADDR_W(0x3C));
  send_8b(0x40);
  for(uint8_t j=0; j<128; j++){
    for(uint8_t i=0; i<8; i++){
      send_8b(0x00);
    }
  }
  STOP_COND
}

void setup() {
  sendBytesWrite(0x3C, Init, InitLen);
  clear_disp();
}

#define FRAME_DEL 2 //manual delay between frames
#define END_FRAME_DEL 0 //time to wait on the last frame
#define CLEAR_WAIT_DEL 0 //time to wait after clearing the display before looping. IF you don't want to clear set this to 0.

void loop() {
  for(uint8_t f = 0; f < NUM_FRAMES; f++){
    disp_img(f, FRAME_DEL);
  }
  delay(END_FRAME_DEL);
  if (CLEAR_WAIT_DEL != 0){
    clear_disp();
    delay(CLEAR_WAIT_DEL);
  }
}
// CMD 0xBn sets the "current page" to page n
// Page 0 is the bottom page if the pins are on top, 
// Column addressing is right to left (0-127)
// Bottom most pixel is the LSB and topmost pixel is the MSB of the byte
