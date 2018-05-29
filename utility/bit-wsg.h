#ifndef __BIT_WSG_H
#define __BIT_WSG_H

#include <Arduino.h>
#include "Wire.h"

#define BIT_WSG_ADD     0X03

#define REG_WSG_WENDU        0X30        
#define REG_WSG_SHIDU        0X31
#define REG_WSG_GUANGDU      0X32



class wsgClass
{
public:
    uint8_t getTem();   //获取温度
    uint8_t getDam();   //获取湿度
    uint8_t getLum();   //获取光度
};

#endif