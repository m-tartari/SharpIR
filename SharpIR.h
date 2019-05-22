/*
	SharpIR

	Arduino library for retrieving distance (in cm) from the analog GP2Y0A41SK
	Based on Version : 1.0 : Guillaume Rico https://github.com/guillaume-rico/SharpIR

*/

#ifndef SharpIR_h
#define SharpIR_h

#define NB_SAMPLE 25

#include "Arduino.h"

class SharpIR
{
  public:
    SharpIR ();
    int distance(int irPin);
};

#endif