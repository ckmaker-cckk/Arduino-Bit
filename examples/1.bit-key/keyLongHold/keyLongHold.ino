#include "ckmaker-bit.h"

bitClass bit;
void setup() {
  // put your setup code here, to run once:
  bit.begin();
  Serial.begin(115200);
}

void loop() {
  static uint32_t i;
  // put your main code here, to run repeatedly:
  if(bit.key.keyState(BIT_KEY_KEYA,BIT_LONG_HOLD))
  {
    i++;
    Serial.println(i);        
  }
  delay(10);
}