#include "Arm.h"
#include <Servo.h>
/**
 * 
 */
HANDSTATUS Arm::grab(){

}
/**
 * Attempts to close the hand by turning the servo controlling the claw
 */
HANDSTATUS Arm::closeHand(){
	hand.write(0);
	return CLOSED;
}

/**
 * Opens the hand as wide as possible using the servo at the hand
 */
void Arm::openHand(){
	hand.write(180);
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
