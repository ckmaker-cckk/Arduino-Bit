#ifndef __BIT_SMG_H
#define __BIT_SMG_H


#define BIT_SMG_ADD                 0X07

#include <Arduino.h>
#include "Wire.h"

//模块特殊指令
#define REG_SMG_DIS_MODE                0X30
#define REG_SMG_NORMAL_DIS_DATA         0X31
#define REG_SMG_ROLL_DIS_DATA           0X32
#define REG_SMG_LIGHTENESS              0X33
#define REG_SMG_ONEBIT_NUMBER           0X34
#define REG_SMG_ONEBIT_CODE             0X35
#define REG_SMG_ONEBIT_BLINK            0X36
#define REG_SMG_CLEAR_BLINK             0X37
#define REG_SMG_CLEAR_DISPLAY           0X38


#define BIT_SMG_NORMAL_MODE     0X00
#define BIT_SMG_ROLL_MODE       0X01

class smgClass
{
    public:
        void setDisMode(uint8_t mode);
        void setNormalDisValue(uint8_t length,uint8_t *s);
        void setRollDisValue(uint8_t length,uint8_t *s);				
        void setLighteness(uint8_t l);
        void setOneBitNumber(uint8_t s,uint8_t d);
        void setOneBitCode(uint8_t s,uint8_t d);               
        void setBlinkOneBit(uint8_t s);
        void clearBlink(void);
        void clearDis();    
};




#endif
