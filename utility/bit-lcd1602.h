#ifndef __BIT_LCD1602_H
#define __BIT_LCD1602_H

#include <Arduino.h>
#include "Wire.h"

#define BIT_LCD1602_ADD     0X02

#define REG_1602_CLEAN_SCREEN        0X30        
#define REG_1602_LINE1_NORMAL        0X31
#define REG_1602_LINE2_NORMAL        0X32
#define REG_1602_LINE1_ROLL          0X33
#define REG_1602_LINE2_ROLL          0X34
#define REG_1602_BACK_LIGHT          0X35
#define REG_1602_DIS_VERSION         0X40

class lcd1602Class
{
public:
    void clearScreen(void);
    void setBackLight(uint8_t level);
    uint8_t displayString(uint8_t x,uint8_t y,String  str);
    uint8_t displayNumber(uint8_t x,uint8_t y,int number);
    uint8_t rollDisplayString(uint8_t x,uint8_t y,String  str);
    uint8_t rollDisplayNumber(uint8_t x,uint8_t y,int number);
};

#endif

