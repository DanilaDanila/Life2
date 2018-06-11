#pragma once
#include "vec.hpp"
#include "line.hpp"
#include "body_def.hpp"

namespace mucl
{
	class body
	{
	friend body_def;
	private:
		vec2 position;

		int vertex_count;
		vec2 *vertexes;

	public:
		body();

		~body();
	};
};