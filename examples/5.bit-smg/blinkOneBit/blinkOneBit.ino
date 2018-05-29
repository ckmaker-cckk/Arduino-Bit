#include "ckmaker-bit.h"

bitClass bit;
void setup() {
  // put your setup code here, to run once:
  bit.begin();
  bit.smg.clearDis();
  bit.smg.setNormalDisValue(3,"1203");
  bit.smg.setBlinkOneBit(0);
}

void loop() {
  // put your main code here, to run repeatedly:
}