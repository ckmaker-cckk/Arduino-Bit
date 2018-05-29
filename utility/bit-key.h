#ifndef __BIT_KEY_H
#define __BIT_KEY_H

#include <Arduino.h>
#include "Wire.h"

#define BIT_KEY_ADD     0X01

#define REG_KEY_A_SHORT_RELEASE        0X30        
#define REG_KEY_B_SHORT_RELEASE        0X31
#define REG_KEY_C_SHORT_RELEASE        0X32
#define REG_KEY_D_SHORT_RELEASE        0X33
#define REG_KEY_A_LONG_RELEASE         0X34
#define REG_KEY_B_LONG_RELEASE         0X35
#define REG_KEY_C_LONG_RELEASE         0X36
#define REG_KEY_D_LONG_RELEASE         0X37
#define REG_KEY_A_LONG          			 0X38
#define REG_KEY_B_LONG          			 0X39
#define REG_KEY_C_LONG         				 0X3A
#define REG_KEY_D_LONG          			 0X3B





#define BIT_KEY_KEYA  0X00
#define BIT_KEY_KEYB  0X01
#define BIT_KEY_KEYC  0X02
#define BIT_KEY_KEYD  0X03


class keyClass
{
public:
    bool keyState(uint8_t key,uint8_t info);
    bool keyState(uint8_t key);
};

#endif