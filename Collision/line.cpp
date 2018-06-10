#include "line.hpp"
#include "math_mucl.hpp"
#include <iostream>

namespace mucl
{
	line::line() {A=B=C=0;}

	line::line(vec2 v0, vec2 v1):
	p0(v0),
	p1(v1)
	{
		A=p0.y-p1.y;
		B=p1.x-p0.x;
		C=p0.x*p1.y-p1.x*p0.y;
	}

	float line::length()
	{
		return sqrt(sqr(p0.x-p1.x)+sqr(p0.y-p1.y));
	}

	vec2 line::getFirstPoint() {return p0;}

	vec2 line::getSecondPoint() {return p1;}

	void line::setFirstPoint(vec2 v) {p0=v;}

	void line::setSecondPoint(vec2 v) {p1=v;}

	bool line::isIntersects(line l)
	{
		return false;
	}

	vec2 line::intersects(line l)
	{
		return vec2();
	}

	vec2 line::normalFrom(vec2 point)
	{
		return vec2();
	}

	line::~line() {}
};