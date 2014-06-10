#include "Arm.h"
//#include <Servo.h>
#include "Arduino.h"

Arm::Arm() :shoulder(new AF_DCMotor(1, MOTOR12_64KHZ))  {
  /* Set up servo ports */
  hand.attach(10);
  wrist.attach(9);
  /* Set shoulder gear motor to full speed */
  shoulder->setSpeed(255);
} 

 
/**
 * Attempts to close the hand by turning the servo controlling the claw
 */
void Arm::closeHand(){
  hand.write(1);
}

/**
 * Opens the hand as wide as possible using the servo at the hand
 */
void Arm::openHand(){
  hand.write(160);
}

/**
 * Raises the arm using the stepper motor at the shoulder
 */
void Arm::raise(){
  isRaised = true;
  shoulder->run(FORWARD);
  delay(300);
  shoulder->run(RELEASE);
}

/**
 * Lowers the arm using the stepper motor at the shoulder
 */
void Arm::lower(){
  isRaised = false;
  /* Give  it momentum to fall (beat friction) */
  shoulder->run(BACKWARD);
  delay(100);
  shoulder->run(RELEASE);
}

/**
 * Turns the wrist using a servo to a given angle
 */
void Arm::setWrist(int theta){
  if(theta<=180 && theta >=0)
    wrist.write(theta);
}

