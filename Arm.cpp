#include "Arm.h"
//#include <Servo.h>
#include "Arduino.h"
/**
 * 
 */
Arm::Arm(int controlPin){
 this->controlPin=controlPin;
 hand.attach(controlPin);
} 

 
void Arm::grab(){
  //lower(); 
  closeHand();
  //raise();
}
/**
 * Attempts to close the hand by turning the servo controlling the claw
 */
void Arm::closeHand(){
  hand.write(1);
  delay(500);
}

/**
 * Opens the hand as wide as possible using the servo at the hand
 */
void Arm::openHand(){
  
  hand.write(160);
  delay(500);  
}

/**
 * Raises the arm using the stepper motor at the shoulder
 */
void Arm::raise(){

}

/**
 * Lowers the arm using the stepper motor at the shoulder
 */
void Arm::lower(){

}

/**
 * Turns the wrist using a servo to a given angle
 */
void Arm::setWrist(int theta){
  if(theta<=180 && theta >=0)
    wrist.write(theta);
}
