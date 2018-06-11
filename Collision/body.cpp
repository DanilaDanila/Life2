#include "body.hpp"
#include "math_mucl.hpp"

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

	int body::getVertexCount() {return vertex_count;}

	// DO
	vec2 body::getVertexPos(int i)
	{
		vec2 pos;
		pos.x=origin.x+(pos.x-origin.x)*cos(rotation)-(pos.y-origin.y)*sin(rotation);
		pos.y=origin.y+(pos.y-origin.y)*cos(rotation)+(pos.x-origin.x)*sin(rotation);

		return position-origin+pos;
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
}