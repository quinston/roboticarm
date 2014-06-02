#include <Servo.h>
class Arm {
	public:
	enum HANDSTATUS { CLOSED, GRABBING, OPEN  };
	Arm(int controlPin);
	HANDSTATUS grab();

	void openHand();
	HANDSTATUS closeHand();
	void raise();
	void lower();
	void setWrist(int theta);

	HANDSTATUS getHandStatus();

	private:
	int controlPin;
	HANDSTATUS handStatus;
	Servo hand;
	Servo wrist;
};
