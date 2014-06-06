
#include <Servo.h>
class Arm {
	public:
	Arm(int controlPin);
	void grab();

	void openHand();
	void closeHand();
	void raise();
	void lower();
	void setWrist(int theta);
        void moveArm(int startTheta, int endTheta);


	private:
	int controlPin;
	Servo hand;
	Servo wrist;
};

