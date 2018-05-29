#include "ckmaker-bit.h"


void bitClass::begin()
{
    Wire.begin();
}

void bitwriteReg(uint8_t add,uint8_t reg)
{
    Wire.beginTransmission(add); 
    Wire.write(reg);     //写寄存器地址 
    Wire.endTransmission();
    delay(1);     
}
void bitwriteReg(uint8_t add,uint8_t reg,uint8_t length,uint8_t *buf)
{
    Wire.beginTransmission(add); 
    Wire.write(reg);     //写寄存器地址
    Wire.write(length); 
    Wire.write(buf,length);
    Wire.endTransmission();
    delay(1);     
}
void bitwriteRegNoLength(uint8_t add,uint8_t reg,uint8_t length,uint8_t *buf)
{
    Wire.beginTransmission(add); 
    Wire.write(reg);     //写寄存器地址
    Wire.write(buf,length);
    Wire.endTransmission();
    delay(1);     
}
//直接返回一个uint8_t
uint8_t bitReadReg8(uint8_t add,uint8_t reg)
{
    uint16_t timers;
    Wire.beginTransmission(add); 
    Wire.write(reg);     //写寄存器地址
    Wire.endTransmission();         
    
    Wire.requestFrom(add, 1);         //请求读回来一个数据到缓冲区中
    while(!(Wire.available()>=1))                  //等待i2c读回来数据
    {
        timers++;
        if(timers>=1000)return 0;                 //读取超时
    }
    delay(1);
    return Wire.read();   
}

//直接返回一个uint16_t
uint16_t bitReadReg16(uint8_t add,uint8_t reg)
{
    uint16_t timers;
    uint16_t value;
    Wire.beginTransmission(add); 
    Wire.write(reg);     //写寄存器地址
    Wire.endTransmission();         
    
    Wire.requestFrom(add, 2);         //请求读回来一个数据到缓冲区中
    while(!(Wire.available()>=2))                  //等待i2c读回来数据
    {
        timers++;
        if(timers>=1000)return 0;                 //读取超时
    }
    value=Wire.read()<<8;
    value+=Wire.read();
    delay(1);
    return  value;  
}