#ifndef __BIT_KEYBOARD_H
#define __BIT_KEYBOARD_H

#define BIT_KEYBOARD_ADD                 0X05

#include <Arduino.h>
#include "Wire.h"
//模块特殊指令
#define REG_KB_KEY0_SHORT_RELEASE        0X30
#define REG_KB_KEY1_SHORT_RELEASE        0X31
#define REG_KB_KEY2_SHORT_RELEASE        0X32
#define REG_KB_KEY3_SHORT_RELEASE        0X33
#define REG_KB_KEY4_SHORT_RELEASE        0X34
#define REG_KB_KEY5_SHORT_RELEASE        0X35
#define REG_KB_KEY6_SHORT_RELEASE        0X36
#define REG_KB_KEY7_SHORT_RELEASE        0X37
#define REG_KB_KEY8_SHORT_RELEASE        0X38
#define REG_KB_KEY9_SHORT_RELEASE        0X39
#define REG_KB_KEYA_SHORT_RELEASE        0X3A
#define REG_KB_KEYB_SHORT_RELEASE        0X3B
#define REG_KB_KEYC_SHORT_RELEASE        0X3C
#define REG_KB_KEYD_SHORT_RELEASE        0X3D
#define REG_KB_KEYE_SHORT_RELEASE        0X3E
#define REG_KB_KEYF_SHORT_RELEASE        0X3F

#define REG_KB_KEY0_LONG_RELEASE        0X40
#define REG_KB_KEY1_LONG_RELEASE        0X41
#define REG_KB_KEY2_LONG_RELEASE        0X42
#define REG_KB_KEY3_LONG_RELEASE        0X43
#define REG_KB_KEY4_LONG_RELEASE        0X44
#define REG_KB_KEY5_LONG_RELEASE        0X45
#define REG_KB_KEY6_LONG_RELEASE        0X46
#define REG_KB_KEY7_LONG_RELEASE        0X47
#define REG_KB_KEY8_LONG_RELEASE        0X48
#define REG_KB_KEY9_LONG_RELEASE        0X49
#define REG_KB_KEYA_LONG_RELEASE        0X4A
#define REG_KB_KEYB_LONG_RELEASE        0X4B
#define REG_KB_KEYC_LONG_RELEASE        0X4C
#define REG_KB_KEYD_LONG_RELEASE        0X4D
#define REG_KB_KEYE_LONG_RELEASE        0X4E
#define REG_KB_KEYF_LONG_RELEASE        0X4F

#define REG_KB_KEY0_LONG        0X50
#define REG_KB_KEY1_LONG        0X51
#define REG_KB_KEY2_LONG        0X52
#define REG_KB_KEY3_LONG        0X53
#define REG_KB_KEY4_LONG        0X54
#define REG_KB_KEY5_LONG        0X55
#define REG_KB_KEY6_LONG        0X56
#define REG_KB_KEY7_LONG        0X57
#define REG_KB_KEY8_LONG        0X58
#define REG_KB_KEY9_LONG        0X59
#define REG_KB_KEYA_LONG        0X5A
#define REG_KB_KEYB_LONG        0X5B
#define REG_KB_KEYC_LONG        0X5C
#define REG_KB_KEYD_LONG        0X5D
#define REG_KB_KEYE_LONG        0X5E
#define REG_KB_KEYF_LONG        0X5F

#define REG_KB_ALLKEY_SHORT_RELEASE       0X60
#define REG_KB_ALLKEY_LONG_RELEASE        0X61
#define REG_KB_ALLKEY_LONG          	  0X62


#define BIT_KB_KEY0     0x00
#define BIT_KB_KEY1     0x01
#define BIT_KB_KEY2     0x02
#define BIT_KB_KEY3     0x03
#define BIT_KB_KEY4     0x04
#define BIT_KB_KEY5     0x05
#define BIT_KB_KEY6     0x06
#define BIT_KB_KEY7     0x07
#define BIT_KB_KEY8     0x08
#define BIT_KB_KEY9     0x09
#define BIT_KB_KEYA     0x0A
#define BIT_KB_KEYB     0X0B
#define BIT_KB_KEYC     0X0C
#define BIT_KB_KEYD     0X0D
#define BIT_KB_KEYE     0X0E
#define BIT_KB_KEYF     0X0F



class keyboardClass
{
public:
    bool keyState(uint8_t key,uint8_t info);
    bool keyState(uint8_t key);
    uint16_t allKeyState(uint8_t info);
    uint16_t allKeyState();
};


#endif

