#include "ckmaker-bit.h"

bitClass bit;
void setup() {
  // put your setup code here, to run once:
  bit.begin();
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(bit.yaogan.getValue(BIT_YG_X));
  delay(100);
}