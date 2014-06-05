#include <Servo.h>
class Arm {
	public:
	//enum HANDSTATUS { CLOSED, GRABBING, OPEN  };
	Arm(int controlPin);
	void grab();

	void openHand();
	void closeHand();
	void raise();
	void lower();
	void setWrist(int theta);
        void moveArm(int startTheta, int endTheta);

	void getHandStatus();

	private:
	int controlPin;
	//void handStatus;
	Servo hand;
	Servo wrist;
};
