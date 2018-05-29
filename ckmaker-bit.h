#ifndef __BIT_H
#define __BIT_H


#include "Wire.h"
#include "utility/bit-keyboard.h"
#include "utility/bit-yaogan.h"
#include "utility/bit-smg.h"
#include "utility/bit-lcd5110.h"
#include "utility/bit-lcd1602.h"
#include "utility/bit-key.h"
#include "utility/bit-wsg.h"

class bitClass
{
public:
    keyboardClass keyboard;
    yaoganClass yaogan;
    smgClass  smg;
    lcd5110Class lcd5110;
    lcd1602Class lcd1602;
    keyClass key;
    wsgClass wsg;
    void begin();
};
//KEY INFO
#define BIT_CLICK          0X00  
#define BIT_LONG_CLICK     0X01
#define BIT_LONG_HOLD      0X02


void  bitwriteReg(uint8_t add,uint8_t reg);
void  bitwriteReg(uint8_t add,uint8_t reg,uint8_t length,uint8_t *buf);
void bitwriteRegNoLength(uint8_t add,uint8_t reg,uint8_t length,uint8_t *buf);
uint8_t bitReadReg8(uint8_t add,uint8_t reg);
uint16_t bitReadReg16(uint8_t add,uint8_t reg);
#endif
