#include "math_mucl.hpp"

namespace mucl
{
	float sqr(float a) {return a*a;}

	float max(float a, float b) {return (a>b)?a:b;}

	float min(float a, float b) {return (a<b)?a:b;}

	float det2f(float a0, float a1, float b0, float b1)
	{
		/*
		|a0 a1| => a0*b1-a1*b0
		|b0 b1|
		*/
		return a0*b1-a1*b0;
	}
}