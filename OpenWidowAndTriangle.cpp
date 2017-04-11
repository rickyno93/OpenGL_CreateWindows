#include <iostream>
#define GLEW_STATIC
#include <GL\glew.h>
#include <GL\freeglut.h>

using namespace std;

void renderScence(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 0.0); //Clear Red
	glLineWidth(3);

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-0.6, -0.75, 0.5);
	//glColor3f(0.0, 1.0, 0.0);
	glVertex3f(0.6, -0.75, 0);
	//glColor3f(0.0, 0.0, 1.0);
	//glVertex3f(0, 0.75, 0);
	glEnd();                    

	//glBegin(GL_LINES);
	//glVertex3f(100.0f, 100.0f, 0.0f); // origin of the line
	//glVertex3f(200.0f, 140.0f, 5.0f); // ending point of the line
	//glEnd();
	glutSwapBuffers();
}

int main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(500, 500);
	glutInitWindowSize(800, 600);
	glutCreateWindow("OpenGL First Window");

	glEnable(GL_DEPTH_TEST);

	//Register callbacks
	glutDisplayFunc(renderScence);

	glutMainLoop();

	return 0;
}
