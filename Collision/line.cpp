#include "line.hpp"
#include "math_mucl.hpp"
#include <iostream>

namespace mucl
{
	void line::countABC()
	{
		A=p0.y-p1.y;
		B=p1.x-p0.x;
		C=p0.x*p1.y-p1.x*p0.y;
	}

	line::line() {A=B=C=0;}

	line::line(vec2 v0, vec2 v1):
	p0(v0),
	p1(v1)
	{this->countABC();}

	float line::length()
	{
		return sqrt(sqr(p0.x-p1.x)+sqr(p0.y-p1.y));
	}

	vec2 line::getFirstPoint() {return p0;}

	vec2 line::getSecondPoint() {return p1;}

	void line::setFirstPoint(vec2 v) {p0=v; this->countABC();}

	void line::setSecondPoint(vec2 v) {p1=v; this->countABC();}

	bool line::isIntersects(line l)
	{
		if((this->A/this->B)==(l.A/l.B)) return false;

		vec2 point=this->intersects(l);

		return ((point.x>=min(this->p0.x,this->p1.x)) and (point.x<=max(this->p0.x,this->p1.x)) and (point.y>=min(this->p0.y,this->p1.y)) and (point.y<=max(this->p0.y,this->p1.y)));
	}

	vec2 line::intersects(line l)
	{
		/*
		Ax+By+C=0 => x=-(By+C)/A => y=-(Ax+C)/B
		A'x+B'y+C'=0 => x=-(B'y+C')/A' => y=-(A'x+C')/B'
		
		A'By+A'C-AB'y-AC'=0   AB'x+B'C-A'Bx-BC'=0
		y(A'B-AB')=AC'-A'C    x(AB'-A'B)=BC'-B'C
		y=(AC'-A'C)/(A'B-AB') x=(BC'-B'C)/(AB'-A'B)
		*/

		float x=(this->B*l.C-l.B*this->C)/(this->A*l.B-l.A*this->B);
		float y=(this->A*l.C-l.A*this->C)/(l.A*this->B-this->A*l.B);

		return vec2(x,y);
	}

	vec2 line::normalFrom(vec2 point)
	{
		return vec2();
	}

	line::~line() {}
};