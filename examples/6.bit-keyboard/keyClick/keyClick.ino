#include "ckmaker-bit.h"

bitClass bit;
void setup() {
  // put your setup code here, to run once:
  bit.begin();
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(bit.keyboard.keyState(BIT_KB_KEY0))
  {
      Serial.println("KEY0");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY1))
  {
      Serial.println("KEY1");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY2))
  {
      Serial.println("KEY2");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY3))
  {
      Serial.println("KEY3");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY4))
  {
      Serial.println("KEY4");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY5))
  {
      Serial.println("KEY5");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY6))
  {
      Serial.println("KEY6");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY7))
  {
      Serial.println("KEY7");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY8))
  {
      Serial.println("KEY8");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY9))
  {
      Serial.println("KEY9");
  }
  if(bit.keyboard.keyState(BIT_KB_KEYA))
  {
      Serial.println("KEYA");
  }
  if(bit.keyboard.keyState(BIT_KB_KEYB))
  {
      Serial.println("KEYB");
  }
  if(bit.keyboard.keyState(BIT_KB_KEYC))
  {
      Serial.println("KEYC");
  }
  if(bit.keyboard.keyState(BIT_KB_KEYD))
  {
      Serial.println("KEYD");
  }
  if(bit.keyboard.keyState(BIT_KB_KEYE))
  {
      Serial.println("KEYE");
  }
  if(bit.keyboard.keyState(BIT_KB_KEYF))
  {
      Serial.println("KEYF");
  }
  delay(10);
}