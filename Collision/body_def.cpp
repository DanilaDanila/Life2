#include "body_def.hpp"
#include "vec.hpp"

namespace mucl
{
	body_def::body_def() {clear();}

	void body_def::setVertexCount(int count)
	{
		vertex_count=count;
		vertexes = new vec2[vertex_count];
	}

	void body_def::setVertex(unsigned int i, vec2 v)
	{
		if(i<vertex_count) vertexes[i]=v;
	}

	void body_def::setRotation(float angle) {rotation=angle;}

	void body_def::setPosition(vec2 p) {position=p;}

	void body_def::clear()
	{
		vertex_count=0;
		vertexes=new vec2[0];
		rotation=0;
		position=vec2();
	}

	body body_def::getBody()
	{
		body b;
		b.vertex_count = vertex_count;
		b.vertexes = new vec2[vertex_count];
		for(int i=0; i<vertex_count; i++)
			b.vertexes[i]=vertexes[i];
		b.rotation = rotation;

		vec2 origin;
		for(int i=0; i<vertex_count; i++)
			origin+=vertexes[i];
		origin=origin/vertex_count;
		b.origin=origin;
		b.position=position;

		return b;
	}

	body_def::~body_def() {}
}