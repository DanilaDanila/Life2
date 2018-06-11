#include "body.hpp"

namespace mucl
{
	body::body()
	{
		vertex_count=4;
		vertexes = new vec2[4];
		vertexes[0] = vec2(0.0, 0.0);
		vertexes[1] = vec2(10.0, 0.0);
		vertexes[2] = vec2(10.0, 10.0);
		vertexes[3] = vec2(0.0, 10.0);
	}

	// DO
	vec2 body::getVertexPos(int i)
	{
		return position+vertexes[i];
	}

	line *body::cut()
	{
		line *l = new line[vertex_count];

		for(int i=0; i<vertex_count-1; i++)
			l[i]=line(vertexes[i], vertexes[i+1]);
		l[vertex_count-1]=line(vertexes[vertex_count-1],vertexes[0]);

		return l;
	}

	body::~body() {}
};