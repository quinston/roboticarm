#include "Arm.h"
#include <Servo.h>
#include <AFMotor.h>

Arm *arm; //can't initialize before setup()
AF_DCMotor* shoulder;
void setup() {
  Serial.begin(9600);
  arm= new Arm(); //initialize here instead
}

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
      case 'a':
      arm->setWrist(90);
      break;
      case 'd':
      arm->setWrist(160);
    }

  }
    if (arm->isRaised) {
      /* Maintains the upright position by repeatedly driving the motor */
      arm->shoulder->run(FORWARD);
      delay(20);
      arm->shoulder->run(RELEASE);
      delay(40);
    }
    
}
