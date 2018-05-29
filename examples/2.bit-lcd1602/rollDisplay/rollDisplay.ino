#include "ckmaker-bit.h"

bitClass bit;
void setup() {
  // put your setup code here, to run once:
  bit.begin();
  bit.lcd1602.clearScreen();
  bit.lcd1602.rollDisplayNumber(2,1,12345);
}

void loop() {
  // put your main code here, to run repeatedly:
}