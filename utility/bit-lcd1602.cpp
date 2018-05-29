#include "bit-lcd1602.h"
#include "ckmaker-bit.h"

void lcd1602Class::clearScreen()
{
    bitwriteReg(BIT_LCD1602_ADD,REG_1602_CLEAN_SCREEN);
}
void lcd1602Class::setBackLight(uint8_t level)
{
    if(level>5)level=5;
    bitwriteRegNoLength(BIT_LCD1602_ADD,REG_1602_BACK_LIGHT,1,&level); 
}
uint8_t lcd1602Class::displayString(uint8_t x,uint8_t y,String  str)
{
    uint8_t treg;
    uint8_t tsize;
    if(x==1)
    {
        treg=REG_1602_LINE1_NORMAL;
    }
    else if(x==2)
    {
        treg=REG_1602_LINE2_NORMAL;
    }
    else return 0;
    if(y<1||y>16)return 0;   
    tsize=str.length();
    if(tsize>16)tsize=16;
    uint8_t tbuf[tsize+2];
    tbuf[0]=y;
    str.getBytes(tbuf+1,tsize+1);  //拷贝str的时候，buffer的大小要多设置1个
    bitwriteRegNoLength(BIT_LCD1602_ADD,treg,tsize+1,tbuf);
    return 1;            
}
uint8_t lcd1602Class::displayNumber(uint8_t x,uint8_t y,int number)
{
    String str;
    str.concat(number);
    return displayString(x,y,str);
}
uint8_t lcd1602Class::rollDisplayString(uint8_t x,uint8_t y,String  str)
{
    uint8_t treg;
    uint8_t tsize;
    if(x==1)
    {
        treg=REG_1602_LINE1_ROLL;
    }
    else if(x==2)
    {
        treg=REG_1602_LINE2_ROLL;
    }
    else return 0;
    if(y<1||y>16)return 0; 
    tsize=str.length();
    if(tsize>16)tsize=16;
    uint8_t tbuf[tsize+2];
    tbuf[0]=y;
    str.getBytes(tbuf+1,tsize+1);  //拷贝str的时候，buffer的大小要多设置1个
    bitwriteRegNoLength(BIT_LCD1602_ADD,treg,tsize+1,tbuf);
    return 1;            
}
uint8_t lcd1602Class::rollDisplayNumber(uint8_t x,uint8_t y,int number)
{
    String str;
    str.concat(number);
    return rollDisplayString(x,y,str);    
}