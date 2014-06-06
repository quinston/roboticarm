#include "Arm.h"
#include <Servo.h>

Arm *arm; //can't initialize before setup()
void setup() {
  Serial.begin(9600);
  arm= new Arm(); //initialize here instead
  
}

// the loop routine runs over and over again forever:
void loop() {
  
  Serial.println("Picking up now!");
  arm->closeHand();
  Serial.println("OPENING HAND!");
  delay(2000);
  arm->openHand();
  delay(2000);
}
