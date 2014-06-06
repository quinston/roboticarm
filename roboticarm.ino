#include "Arm.h"
#include <Servo.h>

Arm *arm; //can't initialize before setup()
void setup() {
  Serial.begin(9600);
  arm= new Arm(); //initialize here instead
  
}

// the loop routine runs over and over again forever:
void loop() {
  while (Serial.available() > 0) {
    int incomingByte = Serial.read();
    
    switch (incomingByte) {
       case 'r':
        arm->raise();
        break;
       case 'l':
        arm->lower();
       break;
      case 'o':
      arm->openHand();
      break;
      case 'c':
      arm->closeHand();
      break;
    }
  }
}
