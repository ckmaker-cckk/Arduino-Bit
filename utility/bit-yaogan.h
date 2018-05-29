#ifndef __BIT_YAOGAN_H
#define __BIT_YAOGAN_H

#include <Arduino.h>
#include "Wire.h"

#define BIT_YAOGAN_ADD     0X06

//模块特殊指令
#define REG_YG_X        0X30
#define REG_YG_Y        0X31

#define BIT_YG_X           REG_YG_X
#define BIT_YG_Y           REG_YG_Y

class yaoganClass
{
public:
    uint8_t getValue(uint8_t xy);
};

#endif

