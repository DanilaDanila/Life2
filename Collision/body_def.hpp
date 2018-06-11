#pragma once
#include "vec.hpp"
#include "line.hpp"
#include "body.hpp"

namespace mucl
{
	class body_def
	{
	private:
		int vertex_count;
		vec2 *vertexes;
		float rotation;
		vec2 position;

	public:
		body_def();

		void setVertexCount(int);

		void setVertex(unsigned int, vec2);

		void setRotation(float);

		void setPosition(vec2);

		void clear();

		body getBody();

		~body_def();
	};
}