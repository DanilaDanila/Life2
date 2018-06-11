#include <iostream>
#include "body.hpp"

using namespace mucl;

int main(int argc, char ** argv)
{
	mucl::body b;
	line *l = b.cut();
	vec2 v0 = l[3].getFirstPoint();
	vec2 v1 = l[3].getSecondPoint();

	std::cout<<v0.x<<' '<<v0.y<<'\n'<<v1.x<<' '<<v1.y<<'\n';
	return 0;
}