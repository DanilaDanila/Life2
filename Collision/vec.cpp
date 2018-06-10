#include "vec.hpp"
#include "math_mucl.hpp"

namespace mucl
{
	vec2::vec2() {x=y=0;}

	vec2::vec2(float rx, float ry):
	x(rx),
	y(ry)
	{}

	float vec2::module() {return sqrt(sqr(this->x)+sqr(this->y));}

	vec2 vec2::direction()
	{
		float m=this->module();
		return vec2(this->x/m, this->y/m);
	}

	vec2 vec2::operator+(vec2 v)
	{
		return vec2(this->x+v.x, this->y+v.y);
	}

	vec2 vec2::operator-(vec2 v)
	{
		return vec2(this->x-v.x, this->y-v.y);
	}

	vec2 vec2::operator+=(vec2 v)
	{
		this->x+=v.x;
		this->y+=v.y;
		return vec2();
	}

	vec2 vec2::operator-=(vec2 v)
	{
		this->x-=v.x;
		this->y-=v.y;
		return vec2();
	}

	vec2 vec2::operator*(float f)
	{
		return vec2(this->x*f, this->y*f);
	}

	vec2 vec2::operator/(float f)
	{
		return vec2(this->x/f, this->y/f);
	}

	float vec2::operator*(vec2 v)
	{
		return this->x*v.x+this->y*v.y;
	}

	vec2::~vec2() {}
}