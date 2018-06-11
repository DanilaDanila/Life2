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

	public:
		body_def();

		void setVertexCount(int);

		void setVertex(unsigned int, vec2);

		void setRotation(float);

		void clear();

		body getBody();

		~body_def();
	};
}