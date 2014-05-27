#include<Arm.h>

Arm::Arm(int i) : controlPin(i) {

}

Arm::HANDSTATUS grab() {
	openHand();
	extend();
	HANDSTATUS h = closeHand();
	retract();
	return h;
}
