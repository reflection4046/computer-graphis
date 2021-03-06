#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{

glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (105,105,105);
glPointSize(5.0);

glBegin(GL_QUADS);
glVertex2i(0, 0);
glVertex2i(620, 0);
glVertex2i(620, 80);
glVertex2i(0, 80);
glEnd();

glColor3ub (0, 0, 0);
glBegin(GL_LINES);
glVertex2i(50, 50);
glVertex2i(50, 80);

glVertex2i(70, 50);
glVertex2i(70, 80);
glEnd();

glColor3ub (128,128, 0);
glBegin(GL_QUADS);
glVertex2i(0, 0);
glVertex2i(500, 0);
glVertex2i(500, 20);
glVertex2i(0, 20);
glVertex2i(30, 20);
glVertex2i(500, 20);
glVertex2i(500, 40);
glVertex2i(30, 40);
glEnd();
glColor3ub (0, 0, 0);
glBegin(GL_LINES);
glVertex2i(1, 0);
glVertex2i(1, 30);
glVertex2i(1, 20);
glVertex2i(200, 20);
glVertex2i(160, 0);
glVertex2i(160, 20);
glVertex2i(30, 20);
glVertex2i(30, 40);
glVertex2i(100, 20);
glVertex2i(180, 40);
glVertex2i(30, 40);
glVertex2i(500, 40);
glVertex2i(700, 0);
glVertex2i(700, 40);
glEnd();
glColor3ub (188, 143, 143);
glBegin(GL_QUADS);
glVertex2i(60, 40);
glVertex2i(320, 40);
glVertex2i(320, 50);
glVertex2i(50, 50);
glVertex2i(90, 60);
glVertex2i(320, 60);
glVertex2i(320, 80);
glVertex2i(90, 80);
glVertex2i(110, 80);
glVertex2i(320, 80);
glVertex2i(320, 120);
glVertex2i(110, 120);
glVertex2i(170, 120);
glVertex2i(320, 120);
glVertex2i(320, 300);
glVertex2i(170, 300);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(180, 300);
glVertex2i(320, 300);
glVertex2i(255, 400);
glEnd();
glColor3ub (0, 0, 0);
glBegin(GL_LINES);
glVertex2i(60, 40);
glVertex2i(60, 60);
glVertex2i(200, 40);
glVertex2i(200, 60);
glVertex2i(60, 60);
glVertex2i(250,60);
glVertex2i(250, 60);
glVertex2i(240, 80);
glVertex2i(90, 60);
glVertex2i(90, 80);
glVertex2i(320, 40);
glVertex2i(320, 270);
glVertex2i(250, 80);
glVertex2i(250, 120);
glVertex2i(180, 100);
glVertex2i(260, 100);
glVertex2i(180, 80);
glVertex2i(180, 120);
glVertex2i(250, 120);
glVertex2i(320, 120);
glVertex2i(90, 80);
glVertex2i(320, 80);
glVertex2i(90, 140);
glVertex2i(320, 140);
glVertex2i(90, 190);
glVertex2i(320, 190);
glVertex2i(90, 290);
glVertex2i(320, 290);
glVertex2i(90, 325);
glVertex2i(320, 325);
glVertex2i(90, 360);
glVertex2i(320, 360);
glEnd();
glColor3ub (216,191, 216);
glBegin(GL_QUADS);
glVertex2i(320, 40);
glVertex2i(500, 40);
glVertex2i(500, 70);
glVertex2i(320, 70);
glVertex2i(320, 70);
glVertex2i(600, 70);
glVertex2i(600, 300);
glVertex2i(320, 300);
glEnd();
glColor3ub (0, 0, 0);
glBegin(GL_LINES);
glVertex2i(340,40);
glVertex2i(340,280);
glVertex2i(600,40);
glVertex2i(600,70);
glVertex2i(530,40);
glVertex2i(530,70);
glVertex2i(460,40);
glVertex2i(460,70);
glVertex2i(390,40);
glVertex2i(390,70);
glVertex2i(340,70);
glVertex2i(610,70);
glVertex2i(340,120);
glVertex2i(610,120);
glVertex2i(340,170);
glVertex2i(610,170);
glVertex2i(340,220);
glVertex2i(610,220);
glEnd();
glBegin(GL_QUADS);
glVertex2i(340, 65);
glVertex2i(600, 65);
glVertex2i(600, 70);
glVertex2i(340, 70);
glEnd();
glBegin(GL_QUADS);
glVertex2i(340, 270);
glVertex2i(610, 270);
glVertex2i(610, 280);
glVertex2i(340, 280);
glEnd();
glColor3ub (210,105,30);
glBegin(GL_QUADS);
glVertex2i(320, 280);
glVertex2i(630, 280);
glVertex2i(545, 420);
glVertex2i(235, 420);
glVertex2i(130, 280);
glVertex2i(170, 280);
glVertex2i(275, 420);
glVertex2i(235, 420);
glEnd();
glColor3ub (0, 0, 0);
glBegin(GL_LINE_LOOP);
glVertex2i(320, 280);
glVertex2i(630, 280);
glVertex2i(545, 420);
glVertex2i(235, 420);
glVertex2i(130, 280);
glVertex2i(170, 280);
glVertex2i(253, 390);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(325, 290);
glVertex2i(630, 290);
glVertex2i(545, 420);
glVertex2i(245, 420);
glEnd();
glBegin(GL_LINES);
glVertex2i(310, 315);
glVertex2i(640, 315);
glVertex2i(289, 350);
glVertex2i(640, 350);
glVertex2i(268, 385);
glVertex2i(640, 385);
glEnd();
glBegin(GL_QUADS);
glVertex2i(140, 280);
glVertex2i(170, 280);
glVertex2i(253, 390);
glVertex2i(239, 410);
glEnd();
glColor3ub (210,105,30);
glBegin(GL_QUADS);
glVertex2i(200, 120);
glVertex2i(270, 120);
glVertex2i(270, 210);
glVertex2i(200, 210);
glVertex2i(200, 80);
glVertex2i(259, 80);
glVertex2i(259, 120);
glVertex2i(200, 120);
glEnd();
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(200, 80);
glVertex2i(210, 80);
glVertex2i(210, 210);
glVertex2i(200, 210);
glVertex2i(200, 205);
glVertex2i(270, 205);
glVertex2i(270, 210);
glVertex2i(200, 210);
glEnd();
glColor3ub (210,105,30);
glBegin(GL_QUADS);
glVertex2i(120, 220);
glVertex2i(329, 220);
glVertex2i(329, 270);
glVertex2i(170, 270);
glEnd();
glColor3ub(0, 0, 0);
glBegin(GL_LINE_LOOP);
glVertex2i(120, 220);
glVertex2i(330, 220);
glVertex2i(330, 270);
glVertex2i(170, 270);
glEnd();
glBegin(GL_LINES);
glVertex2i(120, 225);
glVertex2i(330, 225);
glVertex2i(330, 270);
glVertex2i(280, 220);
glEnd();
glColor3ub (255, 235, 205);
glBegin(GL_QUADS);
glVertex2i(140, 80);
glVertex2i(145, 80);
glVertex2i(145, 220);
glVertex2i(140, 220);
glVertex2i(270, 80);
glVertex2i(275, 80);
glVertex2i(275, 220);
glVertex2i(270, 220);
glVertex2i(380, 140);
glVertex2i(440, 140);
glVertex2i(440, 240);
glVertex2i(380, 240);
glVertex2i(500, 140);
glVertex2i(560, 140);
glVertex2i(560, 240);
glVertex2i(500, 240);
glEnd();
glColor3ub(0, 0, 0);
glBegin(GL_LINE_LOOP);
glVertex2i(140, 80);
glVertex2i(145, 80);
glVertex2i(145, 220);
glVertex2i(140, 220);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(270, 80);
glVertex2i(275, 80);
glVertex2i(275, 220);
glVertex2i(270, 220);
glEnd();
glColor3ub (244, 164, 96);
glBegin(GL_QUADS);
glVertex2i(385, 145);
glVertex2i(435, 145);
glVertex2i(435, 235);
glVertex2i(385, 235);
glVertex2i(505, 145);
glVertex2i(555, 145);
glVertex2i(555, 235);
glVertex2i(505, 235);
glEnd();
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(385, 145);
glVertex2i(435, 145);
glVertex2i(435, 200);
glVertex2i(385, 200);
glVertex2i(505, 145);
glVertex2i(555, 145);
glVertex2i(555, 200);
glVertex2i(505, 200);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(380, 140);
glVertex2i(440, 140);
glVertex2i(440, 240);
glVertex2i(380, 240);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(500, 140);
glVertex2i(560, 140);
glVertex2i(560, 240);
glVertex2i(500, 240);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(435, 200);
glVertex2i(386, 200);
glVertex2i(386, 235);
glVertex2i(435, 235);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(506, 200);
glVertex2i(555, 200);
glVertex2i(555, 235);
glVertex2i(506, 235);
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
