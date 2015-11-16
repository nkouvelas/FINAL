#ifndef FilterDerivative_h
#define FilterDerivative_h
#include <math.h>
#define TWO_PI  6.28
// returns the derivative
struct FilterDerivative {
  long LastUS;
  float LastInput;
  
  float Derivative;
  
  float input( float inVal );
  
  float output();
};

void testFilterDerivative();

#endif
