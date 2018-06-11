#include <iostream>
#include <OpenGl/OpenGL.h>
#include <GLUT/GLUT.h>
#include "mucl.hpp"

using namespace mucl;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

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

int main(int argc, char **argv)
{
	init(argc,argv);

	glutMainLoop();
	return 0;
}