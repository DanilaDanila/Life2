#pragma once

namespace mucl
{
	class vec2
	{
	public:
		float x;
		float y;
	
		vec2();

		vec2(float x, float y);

		float module();

		vec2 direction();

		vec2 operator+(vec2);

		vec2 operator-(vec2);

		vec2 operator+=(vec2);

		vec2 operator-=(vec2);

		vec2 operator*(float);

		vec2 operator/(float);

		float operator*(vec2);

		~vec2();
	};
};