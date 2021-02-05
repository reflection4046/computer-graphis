#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>




void display() {

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);



  glBegin(GL_POLYGON);
  glColor3f(0.0f, 0.0f, 1.0f);

        glVertex2f(0.0f, 0.0f);
         glVertex2f(50.0f, 00.0f);

        glVertex2f(50.0f, 30.0f);
        glVertex2f(0.0f, 30.0f);

	glEnd();

glBegin(GL_POLYGON);
   glColor3f(1.0f, 1.00f, 1.0f);

        glVertex2f(0.0f, 28.0f);
        glVertex2f(3.0f, 30.0f);

        glVertex2f(22.0f, 14.0f);
            glVertex2f(25.0f, 17.0f);
	glEnd();



glBegin(GL_POLYGON);
   glColor3f(1.0f, 1.00f, 1.0f);

        glVertex2f(0.0f, 16.0f);
        glVertex2f(4.0f, 15.0f);
        glVertex2f(25.0f, 29.0f);
        glVertex2f(21.0f, 30.0f);
	glEnd();


 glBegin(GL_POLYGON);
     glColor3f(1.0f, 0.0f, 0.0f);

        glVertex2f(0.0f, 21.0f);
        glVertex2f(25.0f, 21.0f);
        glVertex2f(25.0f, 23.0f);
        glVertex2f(0.0f, 23.0f);
	glEnd();
//iner line
glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.0f, 0.0f);

        glVertex2f(0.0f, 28.5f);
        glVertex2f(2.5f, 29.0f);

        glVertex2f(23.0f, 14.5f);
            glVertex2f(25.5f, 16.0f);
	glEnd();


	glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.0f, 0.0f);

        glVertex2f(1.0f, 15.5f);
        glVertex2f(2.5f, 14.5f);
        glVertex2f(22.5f, 28.5f);
        glVertex2f(21.5f, 30.0f);
	glEnd();

 glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.00f, 0.0f);

        glVertex2f(10.0f, 15.0f);
        glVertex2f(13.0f, 15.0f);
        glVertex2f(13.0f, 30.0f);
        glVertex2f(10.0f, 30.0f);
	glEnd();

   glFlush();
}



    int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 1200);        // Initialize GLUT
glutCreateWindow("Vertex, Primitive & Color");
                                               // Create window with the given title

gluOrtho2D(-10,55,-10,35);   // Set the window's initial width & height
glutInitWindowPosition(50, 50); // Position the window's initial top+left corner
    glutDisplayFunc(display);       // Register callback handler for window re+paint event
	                                  // Our own OpenGL initialization
    glutMainLoop();                 // Enter the event+processing loop
        return 0;




              }
