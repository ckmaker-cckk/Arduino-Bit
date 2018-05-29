#include "bit-key.h"
#include "ckmaker-bit.h"


bool keyClass::keyState(uint8_t key,uint8_t info)
{
    uint8_t tbaseReg;
    if(info==BIT_CLICK)tbaseReg=REG_KEY_A_SHORT_RELEASE;
    else if(info==BIT_LONG_CLICK)tbaseReg=REG_KEY_A_LONG_RELEASE;
    else if(info==BIT_LONG_HOLD)tbaseReg=REG_KEY_A_LONG;
    if(BIT_KB_KEY0<=key&&key<=BIT_KB_KEYF)
    {
        return  bitReadReg8(BIT_KEY_ADD,key+tbaseReg);    
    }
    else return 0;                       
}
bool keyClass::keyState(uint8_t key)
{
    return  keyState(key,BIT_CLICK);
}