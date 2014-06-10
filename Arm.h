
#include <Servo.h>
#include<AFMotor.h>
struct Arm {
	Arm();

	void openHand();
	void closeHand();
	void raise();
	void lower();
	void setWrist(int theta);

	Servo hand;
	Servo wrist;
        AF_DCMotor* shoulder;
        
        /* Is the arm raised or not */
        bool isRaised;
};

