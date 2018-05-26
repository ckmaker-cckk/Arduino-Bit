#ifndef __BIT_H
#define __BIT_H


#include "Wire.h"
#include "src/bit-keyboard.h"
#include "src/bit-yaogan.h"
#include "src/bit-smg.h"
#include "src/bit-lcd5110.h"

class bitClass
{
public:
    keyboardClass keyboard;
    yaoganClass yaogan;
    smgClass  smg;
    lcd5110Class lcd5110;
    void begin();
};

void  bitwriteReg(uint8_t add,uint8_t reg);
void  bitwriteReg(uint8_t add,uint8_t reg,uint8_t length,uint8_t *buf);
void bitwriteRegNoLength(uint8_t add,uint8_t reg,uint8_t length,uint8_t *buf);
uint8_t bitReadReg8(uint8_t add,uint8_t reg);
uint16_t bitReadReg16(uint8_t add,uint8_t reg);
#endif
