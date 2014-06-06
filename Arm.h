
#include <Servo.h>
class Arm {
	public:
	Arm();
	void grab();

	void openHand();
	void closeHand();
	void raise();
	void lower();
	void setWrist(int theta);
        void moveArm(int startTheta, int endTheta);


	private:
	Servo hand;
	Servo wrist;
};

