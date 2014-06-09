
#include <Servo.h>
#include<AFMotor.h>
struct Arm {
	Arm();
	void grab();

	void openHand();
	void closeHand();
	void raise();
	void lower();
	void setWrist(int theta);
        void moveArm(int startTheta, int endTheta);

	Servo hand;
	Servo wrist;
        AF_DCMotor* shoulder;
        bool isRaised;
        bool isHandClosed;
        bool isWristClosed;
};

