#include <GL/glut.h>
void inti()
{
	glClearColor(1,0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,200,0.0,150);
}
void   lineSegment()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0,0);
	glBegin(GL_LINES);
	  glVertex2i(180,15);
	  glVertex2i(10,145);
	glEnd();
	glFlush();
}