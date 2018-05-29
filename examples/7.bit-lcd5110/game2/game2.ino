#include "ckmaker-bit.h"

bitClass bit;
void setup() {
  // put your setup code here, to run once:
  bit.begin();
  bit.lcd5110.drawMode();
  bit.lcd5110.game2Mode(1);

}

void loop() {
    uint8_t value;
  // put your main code here, to run repeatedly:
    value=bit.yaogan.getValue(BIT_YG_X);
    if(value<20)
    {
        bit.lcd5110.cmdLeft();
    }
    else if(value>80)
    {
        bit.lcd5110.cmdRight();
    }
    value=bit.yaogan.getValue(BIT_YG_Y);
    if(value<20)
    {
        bit.lcd5110.cmdDown();
    }
    else if(value>80)
    {
        bit.lcd5110.cmdUp();
    }
    delay(20);
}