#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


glBegin(GL_POLYGON);//1t

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(3.0f, 10.0f);

	glVertex2f(-1.0f, 0.0f);          // These vertices form a closed polygon
	glVertex2f(5.0f,0.0f);




	glEnd();

glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(13.0f, 10.0f);
	glVertex2f(11.0f, 0.0f);
	glVertex2f(17.0f,0.0f);


	glEnd();





		glBegin(GL_POLYGON);//3t

	glColor3f(1.0f, 1.0f, 1.0f);

	  glVertex2f(7.5f, 21.0f);        // These vertices form a closed polygon
	glVertex2f(3.0f, 10.0f);
	glVertex2f(13.0f,10.0f);




	glEnd();



			glBegin(GL_POLYGON);//saquare

	glColor3f(1.0f, 0.0f, 0.0f);

	  glVertex2f(5.0f, 0.0f);        // These vertices form a closed polygon
	glVertex2f(11.0f, 0.0f);
	glVertex2f(14.0f,13.0f);


glVertex2f(2.0f,13.0f);

	glEnd();


	glBegin(GL_POLYGON);//4t

	glColor3f(0.0f, 1.0f, 0.0f);

       // These vertices form a closed polygon
	glVertex2f(5.0f, 9.0f);
	glVertex2f(12.5f,9.0f);

	  glVertex2f(5.0f, 2.0f);


	glEnd();


	 // Clear the color buffer with current clearing color




	   // Clear the color buffer with current clearing color




glFlush();

 }



              int main(int argc, char** argv){
	           glutInit(&argc, argv);
	              glutInitWindowSize(1200, 1200);        // Initialize GLUT
	              glutCreateWindow("Vertex, Primitive & Color");
	            // Create window with the given title

	            gluOrtho2D(-35,35,-35,35);   // Set the window's initial width & height
	             glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	           glutDisplayFunc(display);       // Register callback handler for window re-paint event
	             initGL();                       // Our own OpenGL initialization
	            glutMainLoop();                 // Enter the event-processing loop
	                       return 0;




                                                }
