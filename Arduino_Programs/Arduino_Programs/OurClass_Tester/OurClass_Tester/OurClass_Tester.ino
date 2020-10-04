
#include "ArduinoLowPower.h"
//#include <OneLink.h>
#include <Assert.h>
#include <ArduinoJson.h>
#include <lorawan.h>

const int pinWakeup = 9;
const int pinLED_red = 0;
const int pinLED_green = 1;
const int pinLED_blue = 10;
//OneLinkNodeClass OneLink;

const sRFM_pins RFM_pins = {
  .CS = SS,
  .RST = RFM_RST,
  .DIO0 = RFM_DIO0,
  .DIO1 = RFM_DIO1,
  .DIO2 = RFM_DIO2,
  .DIO5 = RFM_DIO5,
};
int buttonState = 0;

   
void setup() {
  // set up pins for testing only
  pinMode(pinWakeup, INPUT_PULLUP);
  pinMode(pinLED_red, OUTPUT);
  pinMode(pinLED_green, OUTPUT);
  pinMode(pinLED_blue, OUTPUT);
  
  digitalWrite(pinLED_red, LOW);
  digitalWrite(pinLED_green, HIGH);
  delay(100);
  
  //OneLink.init();
  //LowPower.attachInterruptWakeup(9, NULL, CHANGE);
  
}

void loop() {  
  //OneLink.onelinkCycle();
   for(int x=0;x<4;x++)
    {
      digitalWrite(pinLED_green, LOW);
      delay(100); 
      digitalWrite(pinLED_green, HIGH);
      delay(100);
    }
  LowPower.sleep(500);
  delay(500);
//  assert(0);
}
