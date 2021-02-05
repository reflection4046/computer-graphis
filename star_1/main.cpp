#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);

glBegin(GL_LINE_LOOP);
glVertex2i(320, 460);
glVertex2i(260, 300);
glVertex2i(40, 300);
glVertex2i(220, 200);
glVertex2i(180, 30);
glVertex2i(320, 160);
glVertex2i(460, 40);
glVertex2i(420, 200);
glVertex2i(620, 300);
glVertex2i(380, 300);
glEnd();


glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
