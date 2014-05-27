#ifndef ARM_H
#define ARM_H

class Arm {
	public:
	enum HANDSTATUS { CLOSED, GRABBING, OPEN  };

	Arm(int);
	HANDSTATUS grab();

	void openHand();
	HANDSTATUS closeHand();
	void extend();
	void retract();

	HANDSTATUS pollHandStatus();

	private:
	int controlPin;
	HANDSTATUS handStatus;
};

#endif
