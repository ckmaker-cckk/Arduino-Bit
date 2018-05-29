#ifndef __BIT_LCD5110_H
#define __BIT_LCD5110_H

#include <Arduino.h>
#include "Wire.h"


#define BIT_LCD5110_ADD    0X04
//模块特殊指令
#define REG_5110_SOFT_VER                0X30        
#define REG_5110_DRAW                    0X31
#define REG_5110_MENU                    0X32
#define REG_5110_GAME1                   0X33
#define REG_5110_SAVER                   0X34
#define REG_5110_POPUP                   0X35
#define REG_5110_GAME2                   0X36
#define REG_5110_GAME3                   0X37


#define REG_5110_UP                      0X50
#define REG_5110_DOWN                    0X51
#define REG_5110_LEFT                    0X52
#define REG_5110_RIGHT                   0X53
#define REG_5110_NUMBER                  0X54
#define REG_5110_START                   0X55
#define REG_5110_RETURN                  0X56
#define REG_5110_MENU_ADD_ITEM           0X40
#define REG_5110_MENU_NOW_ITEM           0X41
#define REG_5110_MENU_CLEAR_ITEM         0X42

#define REG_5110_LINE                    0X60
#define REG_5110_VLINE                   0X61
#define REG_5110_HLINE                   0X62
#define REG_5110_RECT                    0X63
#define REG_5110_FILL_RECT               0x64
#define REG_5110_FILL_SCREEN             0X65
#define REG_5110_CIRCLE                  0X66
#define REG_5110_PART_CIRCLE             0X67
#define REG_5110_FILL_CIRCLE             0X68
#define REG_5110_FILL_PART_CIRCLE        0X69
#define REG_5110_TRIANGLE                0X6A
#define REG_5110_FILL_TRIANGLE           0X6B
#define REG_5110_ROUND_RECT              0X6C
#define REG_5110_FILL_ROUND_RECT         0X6D
#define REG_5110_BITMAP                  0X6E
#define REG_5110_PRINT                   0X6F
#define REG_5110_PRINTLN                 0X70
#define REG_5110_DRAW_CHAR               0X71
#define REG_5110_SET_CURSOR              0X72
#define REG_5110_DRAW_PIXEL              0X73
#define REG_5110_CLEAR_SCREEN            0X74

#define REG_5110_BACKLIGHT               0X80



//


#define BIT_5110_CIRCLE_PART1  0X01
#define BIT_5110_CIRCLE_PART2  0X02
#define BIT_5110_CIRCLE_PART3  0X04
#define BIT_5110_CIRCLE_PART4  0X08

#define BIT_5110_BACKLIGHT_NONE     0X00
#define BIT_5110_BACKLIGHT_YELLOW   0X01
#define BIT_5110_BACKLIGHT_BLUE     0X02

class lcd5110Class{
public:
    void disVersionMode();
    void drawMode();
    void menuMode();
    void game1Mode(uint8_t ballsize);
    void game2Mode(uint8_t level);
    void game3Mode(uint8_t level);
    void ScreensaverMode();
    void popup(uint8_t length,uint8_t time,uint8_t *dat);

    void menuAddItem(uint8_t length,char *dat);
    uint8_t menuCheckNowItem();
    void menuClearItem();

    void cmdUp();
    void cmdDown();
    void cmdLeft();
    void cmdRight();
    void cmdNumber(uint8_t num);
    void cmdSure();
    void cmdReturn();

	void drawLine(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1);
	void drawVLine(uint8_t x, uint8_t y, uint8_t h);
	void drawHLine(uint8_t x, uint8_t y, uint8_t w);
	void drawRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h);
	void fillRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h);
	void fillScreen();
    void clearScreen();

	void drawCircle(uint8_t x, uint8_t y, uint8_t r);
	void drawPartCircle(uint8_t x, uint8_t y, uint8_t r, uint8_t cornername);
	void fillCircle(uint8_t x, uint8_t y, uint8_t r);
	void fillPartCircle(uint8_t x, uint8_t y, uint8_t r, uint8_t cornername);

	void drawTriangle(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2);
	void fillTriangle(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2);
	void drawRoundRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t radius);
	void fillRoundRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t radius);	
	void drawBitmap(uint8_t x, uint8_t y,uint8_t w, uint8_t h,  uint8_t *bitmap);
	void print(uint8_t length,char *dat);
    void println(uint8_t length,char *dat);
    void drawChar(uint8_t x,uint8_t y,char c,uint8_t size);
    void drawPixel(uint8_t x, uint8_t y);   
    void setCursor(uint8_t x,uint8_t y);

    void setBackLight(uint8_t bl);

};

extern lcd5110Class lcd5110;

#endif

