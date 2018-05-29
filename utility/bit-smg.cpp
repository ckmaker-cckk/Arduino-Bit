#include "bit-smg.h"
#include "ckmaker-bit.h"

void smgClass::setDisMode(uint8_t mode)
{
    bitwriteRegNoLength(BIT_SMG_ADD,REG_SMG_DIS_MODE,1,&mode);              
}
void smgClass::setNormalDisValue(uint8_t length,uint8_t *s)
{

    bitwriteReg(BIT_SMG_ADD,REG_SMG_NORMAL_DIS_DATA,length,s);
}
void smgClass::setRollDisValue(uint8_t length,uint8_t *s)
{
    bitwriteReg(BIT_SMG_ADD,REG_SMG_ROLL_DIS_DATA,length,s);  
}
void smgClass::setLighteness(uint8_t l)
{
    bitwriteRegNoLength(BIT_SMG_ADD,REG_SMG_LIGHTENESS,1,&l);     
}
void smgClass::setOneBitNumber(uint8_t s,uint8_t d)
{
    uint8_t tbuf [2];
    tbuf[0]=s;
    tbuf[1]=d;
    bitwriteRegNoLength(BIT_SMG_ADD,REG_SMG_ONEBIT_NUMBER,2,tbuf);    
}
void smgClass::setOneBitCode(uint8_t s,uint8_t d)
{
    uint8_t tbuf [2];
    tbuf[0]=s;
    tbuf[1]=d;
    bitwriteRegNoLength(BIT_SMG_ADD,REG_SMG_ONEBIT_CODE,2,tbuf);      
}
void smgClass::setBlinkOneBit(uint8_t s)
{ 
    bitwriteRegNoLength(BIT_SMG_ADD,REG_SMG_ONEBIT_BLINK,1,&s);    
}

void smgClass::clearBlink()
{
    bitwriteReg(BIT_SMG_ADD,REG_SMG_CLEAR_BLINK);
}
void smgClass::clearDis()
{
    bitwriteReg(BIT_SMG_ADD,REG_SMG_CLEAR_DISPLAY);
}