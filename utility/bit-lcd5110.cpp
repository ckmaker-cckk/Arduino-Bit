#include "bit-keyboard.h"
#include "ckmaker-bit.h"

lcd5110Class lcd5110;

void lcd5110Class::disVersionMode()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_SOFT_VER);
    delay(60);
}
void lcd5110Class::drawMode()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_DRAW);
    delay(60);
}
void lcd5110Class::menuMode()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_MENU);
    delay(60);    
}
void lcd5110Class::game1Mode(uint8_t ballsize)
{
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_GAME1,1,&ballsize);
    delay(60);        
}
void lcd5110Class::game2Mode(uint8_t level)
{
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_GAME2,1,&level);
    delay(60);        
}
void lcd5110Class::game3Mode(uint8_t level)
{
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_GAME3,1,&level); 
    delay(60);       
}
void lcd5110Class::ScreensaverMode()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_SAVER);
}
void lcd5110Class::popup(uint8_t length,uint8_t time,uint8_t *dat)
{
    uint8_t buf[15];
    if(length>13)length=13;
    buf[0]=length;
    buf[1]=time*20;  //1代表50ms，1000/50=20；
    memcpy(buf+2,dat,length);
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_POPUP,length+2,buf);
}
void lcd5110Class::menuAddItem(uint8_t length,char *dat)
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_MENU_ADD_ITEM,length,dat);
}
uint8_t lcd5110Class::menuCheckNowItem()
{
    return bitReadReg8(BIT_LCD5110_ADD,REG_5110_MENU_NOW_ITEM);
}
void lcd5110Class::menuClearItem()
{
     bitwriteReg(BIT_LCD5110_ADD,REG_5110_MENU_CLEAR_ITEM);    
}

void lcd5110Class::cmdUp()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_UP);     
}
void lcd5110Class::cmdDown()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_DOWN);     
}
void lcd5110Class::cmdLeft()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_LEFT);     
}
void lcd5110Class::cmdRight()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_RIGHT);     
}
void lcd5110Class::cmdSure()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_START);     
}
void lcd5110Class::cmdReturn()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_RETURN);     
}
void lcd5110Class::drawLine(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1)
{
    uint8_t buf[4];
    buf[0]=x0;buf[1]=y0;
    buf[2]=x1;buf[3]=y1;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_LINE,4,buf);
}
void lcd5110Class::drawVLine(uint8_t x, uint8_t y, uint8_t h)
{
    uint8_t buf[3];
    buf[0]=x;
    buf[1]=y;
    buf[2]=h;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_VLINE,3,buf);
}
void lcd5110Class::drawHLine(uint8_t x, uint8_t y, uint8_t w)
{
    uint8_t buf[3];
    buf[0]=x;
    buf[1]=y;
    buf[2]=w;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_HLINE,3,buf);
}
void lcd5110Class::drawRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h)
{
    uint8_t buf[4];
    buf[0]=x;
    buf[1]=y;
    buf[2]=w;
    buf[3]=h;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_RECT,4,buf);
}
void lcd5110Class::fillRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h)
{
    uint8_t buf[4];
    buf[0]=x;
    buf[1]=y;
    buf[2]=w;
    buf[3]=h;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_FILL_RECT,4,buf);
}
void lcd5110Class::fillScreen()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_FILL_SCREEN);    
}
void lcd5110Class::clearScreen()
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_CLEAR_SCREEN); 
}
void lcd5110Class::drawCircle(uint8_t x, uint8_t y, uint8_t r)
{
    uint8_t buf[3];
    buf[0]=x;
    buf[1]=y;
    buf[2]=r;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_CIRCLE,3,buf);
}
void lcd5110Class::fillCircle(uint8_t x, uint8_t y, uint8_t r)
{
    uint8_t buf[3];
    buf[0]=x;
    buf[1]=y;
    buf[2]=r;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_FILL_CIRCLE,3,buf);    
}

void lcd5110Class::drawPartCircle(uint8_t x, uint8_t y, uint8_t r, uint8_t c)
{
    uint8_t buf[4];
    buf[0]=x;
    buf[1]=y;
    buf[2]=r;
    buf[3]=c;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_PART_CIRCLE,4,buf);
}
void lcd5110Class::fillPartCircle(uint8_t x, uint8_t y, uint8_t r, uint8_t c)
{
    uint8_t buf[4];
    buf[0]=x;
    buf[1]=y;
    buf[2]=r;
    buf[3]=c;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_FILL_PART_CIRCLE,4,buf);
}
void lcd5110Class::drawTriangle(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2)
{
    uint8_t buf[6];
    buf[0]=x0;
    buf[1]=y0;
    buf[2]=x1;
    buf[3]=y1;
    buf[4]=x2;
    buf[5]=y2;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_TRIANGLE,6,buf);
}
void lcd5110Class::fillTriangle(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2)
{
    uint8_t buf[6];
    buf[0]=x0;
    buf[1]=y0;
    buf[2]=x1;
    buf[3]=y1;
    buf[4]=x2;
    buf[5]=y2;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_FILL_TRIANGLE,6,buf);
}
void lcd5110Class::drawRoundRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t r)
{
    uint8_t buf[6];
    buf[0]=x;
    buf[1]=y;
    buf[2]=w;
    buf[3]=h;
    buf[4]=r;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_ROUND_RECT,5,buf);
}
void lcd5110Class::fillRoundRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t r)
{
    uint8_t buf[5];
    buf[0]=x;
    buf[1]=y;
    buf[2]=w;
    buf[3]=h;
    buf[4]=r;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_FILL_ROUND_RECT,5,buf);
}
void lcd5110Class::drawBitmap(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t *bitmap)
{
    uint8_t tmpvalue=w*h/8;
    uint8_t buf[tmpvalue+4];
    buf[0]=x;
    buf[1]=y;
    buf[2]=w;
    buf[3]=h;
    memcpy(buf+4,bitmap,tmpvalue);
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_BITMAP,tmpvalue+4,buf);
}
void lcd5110Class::print(uint8_t length,char *dat)
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_PRINT,length,dat);     
}
void lcd5110Class::println(uint8_t length,char *dat)
{
    bitwriteReg(BIT_LCD5110_ADD,REG_5110_PRINTLN,length,dat);     
}
void lcd5110Class::drawChar(uint8_t x,uint8_t y,char c,uint8_t size)
{
    uint8_t buf[4];
    buf[0]=x;
    buf[1]=y;
    buf[2]=c;
    buf[3]=size;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_DRAW_CHAR,4,buf);   
}
void lcd5110Class::drawPixel(uint8_t x, uint8_t y)
{
    uint8_t buf[2];
    buf[0]=x;
    buf[1]=y;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_DRAW_PIXEL,2,buf);     
}
void lcd5110Class::setCursor(uint8_t x, uint8_t y)
{
    uint8_t buf[2];
    buf[0]=x;
    buf[1]=y;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_SET_CURSOR,2,buf);     
}

void lcd5110Class::setBackLight(uint8_t bl)
{
    uint8_t buf[1];
    buf[0]=bl;
    bitwriteRegNoLength(BIT_LCD5110_ADD,REG_5110_BACKLIGHT,1,buf);     
}