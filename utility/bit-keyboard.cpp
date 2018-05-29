#include "bit-keyboard.h"
#include "ckmaker-bit.h"

bool keyboardClass::keyState(uint8_t key,uint8_t info)
{
    if(BIT_KB_KEY0<=key&&key<=BIT_KB_KEYF)
    {
        return  bitReadReg8(BIT_KEYBOARD_ADD,key+REG_KB_KEY0_SHORT_RELEASE+info*0X10);    
    }
    else return 0;                       
}
bool keyboardClass::keyState(uint8_t key)
{
    return  keyState(key,BIT_CLICK);
}
uint16_t keyboardClass::allKeyState(uint8_t info)
{
    if(info<=BIT_LONG_HOLD)
    {
        return  bitReadReg16(BIT_KEYBOARD_ADD,info+REG_KB_ALLKEY_SHORT_RELEASE); 
    }
    else return 0;                          
}
uint16_t keyboardClass::allKeyState()
{
    return allKeyState(BIT_CLICK);    
}




