#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
using namespace std;
/* Initialize OpenGL Graphics */

float _angle1 = 0.0f;
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Black and opaque
}


void circle(){




  glBegin(GL_POLYGON);
      	for(int i=0;i<200;i++)
        {
            glColor3f(1.0,0.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.07;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();


  glBegin(GL_POLYGON);
      	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,0.0,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();





}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void drawScene() {

    glClear(GL_COLOR_BUFFER_BIT);
   //glColor3d(1,0,0);





glBegin(GL_POLYGON);//1t

	glColor3f(0.0f, 0.0f, 1.0f);


	glVertex2f(-0.02f, -0.06f);



	glVertex2f(-0.12f,-0.8f);


	glVertex2f(0.12f,-0.8f);


	glVertex2f(0.02f, -0.06f);

	glEnd();


glBegin(GL_POLYGON);//1t

	glColor3f(0.0f, 0.0f, 1.0f);


	glVertex2f(-0.12f,-0.8f);



	glVertex2f(-0.3f,-0.9f);


	glVertex2f(0.3f,-0.9f);


	glVertex2f(0.12f,-0.8f);

	glEnd();



	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
	glRotatef(_angle1,0.0f, 0.0f,1.0f);



gluOrtho2D(-0.4,0.4,-0.4,0.4);


glBegin(GL_POLYGON);//1t

	glColor3f(1.0f, 1.0f, 0.0f);


	glVertex2f(-0.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);


	glVertex2f(0.030f,0.280f);


	glVertex2f(-0.030f,0.280f);


	glEnd();

glBegin(GL_POLYGON);//1t

	glColor3f(1.0f, 1.0f, 0.0f);


	glVertex2f(0.0f, 0.0f);




	glVertex2f(-0.28f,0.030f);


	glVertex2f(-0.28f,-0.030f);

    glVertex2f(0.0f, 0.0f);


	glEnd();



glBegin(GL_POLYGON);//1t

	glColor3f(1.0f, 1.0f, 0.0f);


    glVertex2f(0.0f, 0.0f);

		glVertex2f(-0.03f,-0.28f);



	glVertex2f(0.030f,-0.28f);



		glVertex2f(0.0f, 0.0f);

	glEnd();



glBegin(GL_POLYGON);//1t

	glColor3f(1.0f, 1.0f, 0.0f);


    glVertex2f(0.0f, 0.0f);


		glVertex2f(0.0f, 0.0f);

		glVertex2f(0.28f,-0.030f);



	glVertex2f(0.28f,0.030f);




	glEnd();

 glPopMatrix();

	glutSwapBuffers();




circle();
glFlush();

 }





void update(int value) {

    _angle1+=20.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(100, update, 0); //Notify GLUT to call update again in 25 milliseconds
}




              int main(int argc, char** argv){
	           glutInit(&argc, argv);
	              glutInitWindowSize(1000, 1000);        // Initialize GLUT
	              glutCreateWindow("Vertex, Primitive & Color");
	            // Create window with the given title

	          gluOrtho2D(-0.4,0.4,-0.4,0.4); // Set the window's initial width & height
	            glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	           // Register callback handler for window re-paint event
	             initGL();



glutDisplayFunc(drawScene);
	glutTimerFunc(20, update, 0);


	//Add a timer                  // Our own OpenGL initialization
	            glutMainLoop();                 // Enter the event-processing loop
	                       return 0;
   }
