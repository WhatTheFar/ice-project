#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_asidegridicons_clear_formatting
const unsigned char gridicons_clear_formatting[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xC3, 0xFF, 0xC3, 
0x81, 0xFF, 0xE1, 0x81, 0xFF, 0xF0, 0xC1, 0xFF, 
0xF8, 0x78, 0xFF, 0xFC, 0x38, 0xFF, 0xFE, 0x18, 
0xFF, 0xFE, 0x0C, 0x7F, 0xFE, 0x06, 0x7F, 0xFE, 
0x03, 0x7F, 0xFC, 0x01, 0xFF, 0xFC, 0x00, 0xFF, 
0xF8, 0x78, 0x7F, 0xF8, 0x7C, 0x3F, 0xF8, 0xFE, 
0x1F, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x8F, 0xFF, 
0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
