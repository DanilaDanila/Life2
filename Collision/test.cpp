#include <iostream>
#include <OpenGl/OpenGL.h>
#include <GLUT/GLUT.h>
#include "mucl.hpp"

using namespace mucl;

body b0;

void draw_line(line *l)
{
	vec2 p0 = l->getFirstPoint();
	vec2 p1 = l->getSecondPoint();

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(p0.x,p0.y);
	glVertex2f(p1.x,p1.y);
	glEnd();
}

void draw_body(body *b)
{
	int lines_count = b->getVertexCount();
	line *lines = b->cut();

	for(int i=0; i<lines_count; i++)
		draw_line(&lines[i]);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	draw_body(&b0);

	glFlush();
}

void init(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1024, 576);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("");

	gluOrtho2D(0.0, 1024.0, 576.0, 0.0);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glutDisplayFunc(display);
	glutIdleFunc(display);
}

void setup()
{
	body_def def;
	def.setVertexCount(4);
	def.setVertex(0, vec2(0.0, 0.0));
	def.setVertex(1, vec2(60.0, 0.0));
	def.setVertex(2, vec2(60.0, 30.0));
	def.setVertex(3, vec2(0.0, 30.0));
	def.setPosition(vec2(100,200));
	def.setRotation(pi/4.0);
	b0 = def.getBody();
}

int main(int argc, char **argv)
{
	init(argc,argv);
	setup();

	glutMainLoop();
	return 0;
}