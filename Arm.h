class Arm {
	public:
	enum HANDSTATUS { CLOSED, GRABBING, OPEN  };

	Arm(int controlPin);
	HANDSTATUS grab();

	void openHand();
	HANDSTATUS closeHand();
	void extend();
	void retract();

	HANDSTATUS getHandStatus();

	private:
	int controlPin;
	HANDSTATUS handStatus;
};
