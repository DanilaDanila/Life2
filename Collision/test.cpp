#include <iostream>
#include "line.hpp"

using namespace mucl;

int main(int argc, char ** argv)
{
	line l0(vec2(0,1),vec2(1,0));
	line l1(vec2(0,1),vec2(-1,0));
	std::cout<<l0.isIntersects(l1)<<'\n';
	vec2 v=l0.intersects(l1);
	std::cout<<v.x<<' '<<v.y<<'\n';
	return 0;
}