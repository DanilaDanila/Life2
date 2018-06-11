#pragma once
#include "vec.hpp"
#include "line.hpp"

namespace mucl
{
	class body
	{
	friend class body_def;
	private:
		vec2 position;
		vec2 origin;

		int vertex_count;
		vec2 *vertexes;

		float rotation;

	public:
		body();

		int getVertexCount();

		vec2 getVertexPos(int);

		line *cut();

		~body();
	};
}