#include "ckmaker-bit.h"

bitClass bit;
void setup() {
  // put your setup code here, to run once:
  bit.begin();
  bit.lcd1602.clearScreen();
}

void loop() {
  // put your main code here, to run repeatedly:
  bit.lcd1602.displayString(1,1,"T:");
  bit.lcd1602.displayNumber(1,3,bit.wsg.getTem());

  bit.lcd1602.displayString(1,6,"D:");
  bit.lcd1602.displayNumber(1,8,bit.wsg.getDam());

  bit.lcd1602.displayString(1,11,"L:");
  bit.lcd1602.displayNumber(1,13,bit.wsg.getLum());
  delay(1000);   
}