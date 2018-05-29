#include "ckmaker-bit.h"

bitClass bit;
void setup() {
  // put your setup code here, to run once:
  bit.begin();
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(bit.key.keyState(BIT_KEY_KEYA))
  {
    digitalWrite(LED_BUILTIN, HIGH);      
  }
  if(bit.key.keyState(BIT_KEY_KEYB))
  {
    digitalWrite(LED_BUILTIN, LOW);      
  }
  if(bit.key.keyState(BIT_KEY_KEYC))
  {
    digitalWrite(LED_BUILTIN, HIGH);      
  }
  if(bit.key.keyState(BIT_KEY_KEYD))
  {
    digitalWrite(LED_BUILTIN, LOW);      
  }
}