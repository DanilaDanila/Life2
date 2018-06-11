#pragma once

#include "vec.hpp"

namespace mucl
{
	class line
	{
	private:
		vec2 p0;
		vec2 p1;

		float A;
		float B;
		float C;

		void countABC();

	public:
		line();

		line(vec2,vec2);

		float length();

		vec2 getFirstPoint();

		vec2 getSecondPoint();

		void setFirstPoint(vec2);

		void setSecondPoint(vec2);

		bool isIntersects(line);

		vec2 intersects(line);

		vec2 normalFrom(vec2);

		bool isPointsOnSameSide(vec2,vec2);

		~line();
	};
}