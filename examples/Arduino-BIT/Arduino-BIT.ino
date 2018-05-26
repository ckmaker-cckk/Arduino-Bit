#include "bit.h"

bitClass bit;

void setup() {
  // put your setup code here, to run once:
  bit.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);

  // bit.smg.setLighteness(1);
  // bit.smg.setNormalDisNumber(4,"1234");
  // bit.smg.setBlinkOneBit(2);
  // bit.lcd5110.disSoftVersion();
  // bit.lcd5110.game1Mode(10);
  // bit.lcd5110.ScreensaverMode();
  // bit.lcd5110.popup(5,3,"12345");
  // bit.lcd5110.menuMode();
  // bit.lcd5110.menuClearItem();
  // bit.lcd5110.menuAddItem(14,"00");
  // bit.lcd5110.menuAddItem(13,"111");
  // bit.lcd5110.menuAddItem(13,"2222");
  // bit.lcd5110.menuAddItem(10,"333333");
  // bit.lcd5110.menuAddItem(3,"44444444");
  // bit.lcd5110.menuAddItem(1,"6");

    bit.lcd5110.drawMode();
    delay(60);
    // bit.lcd5110.drawLine(0,0,30,30);
    // bit.lcd5110.drawCircle(0,0,30);
    bit.lcd5110.setCursor(20,30);
    bit.lcd5110.print(7,"derrick");
    bit.lcd5110.drawChar(10,10,'A',3);
    bit.lcd5110.game3Mode(1);
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.println(bit.lcd5110.menuCheckNowItem());
  if(bit.keyboard.keyState(BIT_KB_KEY2))
  {
    bit.lcd5110.cmdUp();
    Serial.println("---2");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY8))
  {
    bit.lcd5110.cmdDown();
    Serial.println("---8");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY4))
  {
    bit.lcd5110.cmdLeft();
    Serial.println("---4");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY6))
  {
    bit.lcd5110.cmdRight();
    Serial.println("---6");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY5))
  {
    bit.lcd5110.cmdSure();
    Serial.println("---A");
  }
  if(bit.keyboard.keyState(BIT_KB_KEY0))
  {
    bit.lcd5110.cmdReturn();
    Serial.println("---B");
  }
  if(bit.keyboard.keyState(BIT_KB_KEYA))
  {
    bit.lcd5110.game1Mode(1);
  }
  if(bit.keyboard.keyState(BIT_KB_KEYB))
  {
    bit.lcd5110.game2Mode(1);
  }
  if(bit.keyboard.keyState(BIT_KB_KEYC))
  {
    bit.lcd5110.game3Mode(1);
  }
  if(bit.keyboard.keyState(BIT_KB_KEYD))
  {
    bit.lcd5110.ScreensaverMode();
  }
  if(bit.yaogan.getValue(BIT_YG_Y)>=70)
  {
    bit.lcd5110.cmdUp();
  }
  if(bit.yaogan.getValue(BIT_YG_Y)<=30)
  {
    bit.lcd5110.cmdDown();
  }
  if(bit.yaogan.getValue(BIT_YG_X)>=70)
  {
    bit.lcd5110.cmdRight();
  }
  if(bit.yaogan.getValue(BIT_YG_X)<=30)
  {
    bit.lcd5110.cmdLeft();
  }
  delay(50);
// digitalWrite(LED_BUILTIN, LOW); 
}
