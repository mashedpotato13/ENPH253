// armControl.h

#ifndef _ARMCONTROL_h
#define _ARMCONTROL_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

namespace arm {
	void turn_arm(int angle);
	void extend_grab();
	void retract();
	void grab();
	void release();
	
	void pickup(int dir);
}


#endif

