#include "bit-yaogan.h"
#include "bit.h"

uint8_t yaoganClass::getValue(uint8_t xy)
{
    // uint16_t timers;
    // Wire.beginTransmission(BIT_YAOGAN_ADD); 
    // Wire.write(xy);     //写寄存器地址
    // Wire.endTransmission();         
    
    // Wire.requestFrom(BIT_YAOGAN_ADD, 1);         //请求读回来一个数据到缓冲区中
    // while(!(Wire.available()>=1))                  //等待i2c读回来数据
    // {
    //     timers++;
    //     if(timers>=1000)return 0;                 //读取超时
    // }
    // return Wire.read();
    if(xy==BIT_YG_X)
    {
        return  bitReadReg8(BIT_YAOGAN_ADD,REG_YG_X);
    }
    else if(xy==BIT_YG_Y)
    {
        return bitReadReg8(BIT_YAOGAN_ADD,REG_YG_Y);
    }
    else return 0;  
}