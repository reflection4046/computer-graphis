



#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 01.0f, 1.0f); // Black and opaque
}

/* Handler for window+repaint event. Call back when the window first appears and
whenever the window needs to be re+painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

	//top left

		//extra -----------------------


	 glBegin(GL_POLYGON); //1/2

                glColor3f(0.0f, 0.0f, 0.0f);





                 glVertex2f( -9.0f,11.0f);
              glVertex2f(  -9.0f,10.0f);
  glVertex2f(  -8.0f ,10.0f);

             glVertex2f(  -8.0f ,11.0f);

	                     glEnd();



	         glBegin(GL_POLYGON); //1/2

                glColor3f(0.0f, 0.0f, 0.0f);





                 glVertex2f( -8.0f,11.0f);
              glVertex2f(  -8.0,10.0f);
  glVertex2f(  -7.0f ,10.0f);

             glVertex2f(  -7.0f ,11.0f);

	                     glEnd();


	         	glBegin(GL_POLYGON); //1/3


                       glColor3f(0.0f, 0.0f, 0.0f);
                        glVertex2f(  -7.0f ,10.0f);
                        glVertex2f(  -7.0f ,11.0f);

                        glVertex2f(    -6.0f,  11.0f);
                        glVertex2f(   -6.0f,   10.0f);

                 glEnd();


	glBegin(GL_POLYGON); //1/4

glColor3f(0.0f, 0.0f, 0.0f);
                             glVertex2f(   -6.0f,   10.0f);

                        glVertex2f(    -6.0f,  11.0f);

                         glVertex2f(    -5.0f,   11.0f);
                        glVertex2f(   -5.0f,   10.0f);




                              glEnd();


	               glBegin(GL_POLYGON); //1/5

	                glColor3f(0.0f, 0.0f, 0.0f);

                    glVertex2f(    -5.0f,   10.0f);
                    glVertex2f(   -5.0f,   11.0f);
                    glVertex2f(  -4.0f,  11.0f);
                    glVertex2f(   -4.0f,   10.0f);

                                        glEnd();




		glBegin(GL_POLYGON); //1/6

                    glColor3f(0.0f, 0.0f, 0.0f);
                    glVertex2f(  -4.0f,  10.0f);
                    glVertex2f(   -4.0f,   11.0f);
                     glVertex2f(    -3.0f,   11.0f);
                    glVertex2f(   -3.0f,   10.0f);

                           glEnd();



		glBegin(GL_POLYGON); //1/7

                     glColor3f(0.0f, 0.0f, 0.0f);
                     glVertex2f(    -3.0f,   10.0f);
                    glVertex2f(   -3.0f,   11.0f);

                    glVertex2f(   -2.0f,   11.0f);
                    glVertex2f(    -2.0, 10.0f);

                      glEnd();

            glBegin(GL_POLYGON); //1/9

                                     glColor3f(0.0f, 0.0f, 0.0f);
                    glVertex2f(   -2.0f,   10.0f);
                    glVertex2f(    -2.0, 11.0f);
                   glVertex2f(   -1.0f,   11.0f);

                     glVertex2f( -1.0f,10.0f);

                                   glEnd();



            glBegin(GL_POLYGON); //1/10

                                     glColor3f(0.0f, 0.0f, 0.0f);
                    glVertex2f(   -1.0f,   10.0f);
                    glVertex2f(    -1.0, 11.0f);
                   glVertex2f(   0.0f,   11.0f);

                     glVertex2f( 0.0f, 10.0f);

                                   glEnd();







	//-------------------------------------------------------------

	              glBegin(GL_POLYGON);   //1/111



                              glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(  -10.0f ,10.0f);
                        glVertex2f(  -10.0f, 9.0f);

     glVertex2f( -9.0f,9.0f);
                            glVertex2f(  -9.0,10.0f);


                                  glEnd();




                          glBegin(GL_POLYGON);   //1/1



                              glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(  -9.0f ,10.0f);
                        glVertex2f(  -9.0f, 9.0f);

     glVertex2f( -8.0f,9.0f);
                            glVertex2f(  -8.0,10.0f);


                                  glEnd();


	         glBegin(GL_POLYGON); //1/2

                glColor3f(1.0f, 1.0f, 0.0f);

              glVertex2f(  -8.0,9.0f);
              glVertex2f( -8.0f,10.0f);
             glVertex2f(  -7.0f ,10.0f);
             glVertex2f(  -7.0f ,9.0f);

	                     glEnd();


	         	glBegin(GL_POLYGON); //1/3


                       glColor3f(1.0f, 1.0f, 0.0f);
                        glVertex2f(  -7.0f ,9.0f);
                        glVertex2f(  -7.0f ,10.0f);

                        glVertex2f(    -6.0f,  10.0f);
                        glVertex2f(   -6.0f,   9.0f);

                 glEnd();


	glBegin(GL_POLYGON); //1/4

glColor3f(1.0f, 1.0f, 0.0f);
                             glVertex2f(   -6.0f,   9.0f);

                        glVertex2f(    -6.0f,  10.0f);

                         glVertex2f(    -5.0f,   10.0f);
                        glVertex2f(   -5.0f,   9.0f);




                              glEnd();


	               glBegin(GL_POLYGON); //1/5

	                glColor3f(1.0f, 1.0f, 0.0f);

                    glVertex2f(    -5.0f,   9.0f);
                    glVertex2f(   -5.0f,   10.0f);
                    glVertex2f(  -4.0f,  10.0f);
                    glVertex2f(   -4.0f,   9.0f);

                                        glEnd();




		glBegin(GL_POLYGON); //1/6

                    glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(  -4.0f,  9.0f);
                    glVertex2f(   -4.0f,   10.0f);
                     glVertex2f(    -3.0f,   10.0f);
                    glVertex2f(   -3.0f,   9.0f);

                           glEnd();



		glBegin(GL_POLYGON); //1/7

                     glColor3f(1.0f, 1.0f, 0.0f);
                     glVertex2f(    -3.0f,   9.0f);
                    glVertex2f(   -3.0f,   10.0f);

                    glVertex2f(   -2.0f,   10.0f);
                    glVertex2f(    -2.0, 9.0f);

                      glEnd();

            glBegin(GL_POLYGON); //1/9

                                     glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(   -2.0f,   9.0f);
                    glVertex2f(    -2.0, 10.0f);
                   glVertex2f(   -1.0f,   10.0f);

                     glVertex2f( -1.0f, 9.0f);

                                   glEnd();



            glBegin(GL_POLYGON); //1/10

                                     glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(   -1.0f,   9.0f);
                    glVertex2f(    -1.0, 10.0f);
                   glVertex2f(   0.0f,   10.0f);

                     glVertex2f( 0.0f, 9.0f);

                                   glEnd();


//new row 2

                     glBegin(GL_POLYGON); //2/1

                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,9.0f);
                            glVertex2f( -11.0f,8.0f);
                          glVertex2f( -10.0f,8.0f);
                          glVertex2f( -10.0f, 9.0f);

                               glEnd();


	                        glBegin(GL_POLYGON); //2/1

                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -10.0f ,9.0f);
                            glVertex2f( -10.0f,8.0f);
                          glVertex2f( -9.0f,8.0f);
                          glVertex2f( -9.0f, 9.0f);

                               glEnd();









                              glBegin(GL_POLYGON); //2/2

                             glColor3f(1.0f, 1.0f, 0.0f);
                                       glVertex2f( -9.0f, 9.0f);
                            glVertex2f( -9.0f,8.0f);
                               glVertex2f( -8.0f ,8.0f);
                               glVertex2f( -8.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/3

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -8.0f,9.0f);
                               glVertex2f( -8.0f ,8.0f);
                                    glVertex2f( -7.0f ,8.0f);
                             glVertex2f( -7.0f,9.0f);



                                   glEnd();







                              glBegin(GL_POLYGON); //2/4

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -7.0f,9.0f);
                               glVertex2f( -7.0f ,8.0f);
                                    glVertex2f( -6.0f ,8.0f);
                             glVertex2f( -6.0f,9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //2/5

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -6.0f,9.0f);
                               glVertex2f( -6.0f ,8.0f);
                                    glVertex2f( -5.0f ,8.0f);
                             glVertex2f( -5.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/6

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -5.0f,9.0f);
                               glVertex2f( -5.0f ,8.0f);
                                    glVertex2f( -4.0f ,8.0f);
                             glVertex2f( -4.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/7

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -4.0f,9.0f);
                               glVertex2f( -4.0f ,8.0f);
                                    glVertex2f( -3.0f ,8.0f);
                             glVertex2f( -3.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/8

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -3.0f,9.0f);
                               glVertex2f( -3.0f ,8.0f);
                                    glVertex2f( -2.0f ,8.0f);
                             glVertex2f( -2.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/9

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -2.0f,9.0f);
                               glVertex2f( -2.0f ,8.0f);
                                    glVertex2f( -1.0f ,8.0f);
                             glVertex2f( -1.0f,9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //2/10

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -1.0f,9.0f);
                               glVertex2f( -1.0f ,8.0f);
                                    glVertex2f( -0.0f ,8.0f);
                             glVertex2f( -0.0f,9.0f);



                                   glEnd();

                              //row 2 end

//row3 start

/*

 glBegin(GL_POLYGON);//3/1





                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,9.0f);
                            glVertex2f( -11.0f,8.0f);
                          glVertex2f( -10.0f,8.0f);
                          glVertex2f( -10.0f, 9.0f);

                               glEnd();

 glBegin(GL_POLYGON);//3/2





                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -10.0f ,9.0f);
                            glVertex2f( -10.0f,8.0f);
                          glVertex2f( -9.0f,8.0f);
                          glVertex2f( -9.0f, 9.0f);

                               glEnd();









                              glBegin(GL_POLYGON); //3/3

                             glColor3f(1.0f, 1.0f, 0.0f);
                                       glVertex2f( -9.0f, 9.0f);
                            glVertex2f( -9.0f,8.0f);
                               glVertex2f( -8.0f ,8.0f);
                               glVertex2f( -8.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/4

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -8.0f,9.0f);
                               glVertex2f( -8.0f ,8.0f);
                                    glVertex2f( -7.0f ,8.0f);
                             glVertex2f( -7.0f,9.0f);



                                   glEnd();







                              glBegin(GL_POLYGON); //3/5

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -7.0f,9.0f);
                               glVertex2f( -7.0f ,8.0f);
                                    glVertex2f( -6.0f ,8.0f);
                             glVertex2f( -6.0f,9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/6

                             glColor3f(1.0f,1.0f, 0.0f);
                                     glVertex2f( -6.0f,9.0f);
                               glVertex2f( -6.0f ,8.0f);
                                    glVertex2f( -5.0f ,8.0f);
                             glVertex2f( -5.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/7

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -5.0f,9.0f);
                               glVertex2f( -5.0f ,8.0f);
                                    glVertex2f( -4.0f ,8.0f);
                             glVertex2f( -4.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/8

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -4.0f,9.0f);
                               glVertex2f( -4.0f ,8.0f);
                                    glVertex2f( -3.0f ,8.0f);
                             glVertex2f( -3.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/9

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -3.0f,9.0f);
                               glVertex2f( -3.0f ,8.0f);
                                    glVertex2f( -2.0f ,8.0f);
                             glVertex2f( -2.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/10

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -2.0f,9.0f);
                               glVertex2f( -2.0f ,8.0f);
                                    glVertex2f( -1.0f ,8.0f);
                             glVertex2f( -1.0f,9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/11

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -1.0f,9.0f);
                               glVertex2f( -1.0f ,8.0f);
                                    glVertex2f( -0.0f ,8.0f);
                             glVertex2f( -0.0f,9.0f);



                                   glEnd();

*/
                                   // row 3 ended



                                  //row 3 started

                                  //row3 start



 glBegin(GL_POLYGON);//3/1





                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,8.0f);
                            glVertex2f( -12.0f,7.0f);
                          glVertex2f( -11.0f,7.0f);
                          glVertex2f( -11.0f, 8.0f);

                               glEnd();
 glBegin(GL_POLYGON);//3/1





                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -11.0f ,8.0f);
                            glVertex2f( -11.0f,7.0f);
                          glVertex2f( -10.0f,7.0f);
                          glVertex2f( -10.0f, 8.0f);

                               glEnd();

 glBegin(GL_POLYGON);//3/2





                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -10.0f ,8.0f);
                            glVertex2f( -10.0f,7.0f);
                          glVertex2f( -9.0f,7.0f);
                          glVertex2f( -9.0f, 8.0f);

                               glEnd();









                              glBegin(GL_POLYGON); //3/3

                             glColor3f(0.0f, 0.0f, 0.0f);
                                       glVertex2f( -9.0f, 8.0f);
                            glVertex2f( -9.0f,7.0f);
                               glVertex2f( -8.0f ,7.0f);
                               glVertex2f( -8.0f,8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/4

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -8.0f,8.0f);
                               glVertex2f( -8.0f ,7.0f);
                                    glVertex2f( -7.0f ,7.0f);
                             glVertex2f( -7.0f,8.0f);



                                   glEnd();







                              glBegin(GL_POLYGON); //3/5

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -7.0f,8.0f);
                               glVertex2f( -7.0f ,7.0f);
                                    glVertex2f( -6.0f ,7.0f);
                             glVertex2f( -6.0f,8.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/6

                             glColor3f(1.0f,1.0f, 0.0f);
                                     glVertex2f( -6.0f,8.0f);
                               glVertex2f( -6.0f ,7.0f);
                                    glVertex2f( -5.0f ,7.0f);
                             glVertex2f( -5.0f,8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/7

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -5.0f,8.0f);
                               glVertex2f( -5.0f ,7.0f);
                                    glVertex2f( -4.0f ,7.0f);
                             glVertex2f( -4.0f,8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/8

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -4.0f,8.0f);
                               glVertex2f( -4.0f ,7.0f);
                                    glVertex2f( -3.0f ,7.0f);
                             glVertex2f( -3.0f,8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/9

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -3.0f,8.0f);
                               glVertex2f( -3.0f ,7.0f);
                                    glVertex2f( -2.0f ,7.0f);
                             glVertex2f( -2.0f,8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/10

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -2.0f,8.0f);
                               glVertex2f( -2.0f ,7.0f);
                                    glVertex2f( -1.0f ,7.0f);
                             glVertex2f( -1.0f,8.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/11

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -1.0f,8.0f);
                               glVertex2f( -1.0f ,7.0f);
                                    glVertex2f( -0.0f ,7.0f);
                             glVertex2f( -0.0f,8.0f);




                                   glEnd();


 //row 5 started

                               glBegin(GL_POLYGON);//5/14





                               glBegin(GL_POLYGON);//5/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -13.0f ,7.0f);
                            glVertex2f( -13.0f,6.0f);
                          glVertex2f( -12.0f,6.0f);
                          glVertex2f( -12-.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/12


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -12.0f ,7.0f);
                            glVertex2f( -12.0f,6.0f);
                          glVertex2f( -11.0f,6.0f);
                          glVertex2f( -11.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/11


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -11.0f ,7.0f);
                            glVertex2f( -11.0f,6.0f);
                          glVertex2f( -10.0f,6.0f);
                          glVertex2f( -10.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,7.0f);
                            glVertex2f( -10.0f,6.0f);
                          glVertex2f( -9.0f,6.0f);
                          glVertex2f( -9.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,7.0f);
                            glVertex2f( -9.0f,6.0f);
                          glVertex2f( -8.0f,6.0f);
                          glVertex2f( -8.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,7.0f);
                            glVertex2f( -8.0f,6.0f);
                          glVertex2f( -7.0f,6.0f);
                          glVertex2f( -7.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/7


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -7.0f ,7.0f);
                            glVertex2f( -7.0f,6.0f);
                          glVertex2f( -6.0f,6.0f);
                          glVertex2f( -6.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/6


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -6.0f ,7.0f);
                            glVertex2f( -6.0f,6.0f);
                          glVertex2f( -5.0f,6.0f);
                          glVertex2f( -5.0f, 7.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//5/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -5.0f ,7.0f);
                            glVertex2f( -5.0f,6.0f);
                          glVertex2f( -4.0f,6.0f);
                          glVertex2f( -4.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -4.0f ,7.0f);
                            glVertex2f( -4.0f,6.0f);
                          glVertex2f( -3.0f,6.0f);
                          glVertex2f( -3.0f,7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,7.0f);
                            glVertex2f( -3.0f,6.0f);
                          glVertex2f( -2.0f,6.0f);
                          glVertex2f( -2.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,7.0f);
                            glVertex2f( -2.0f,6.0f);
                          glVertex2f( -1.0f,6.0f);
                          glVertex2f( -1.0f, 7.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//5/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,7.0f);
                            glVertex2f( -1.0f,6.0f);
                          glVertex2f( -0.0f,6.0f);
                          glVertex2f( -0.0f, 7.0f);

                               glEnd();







                                      //row 5 ended




//row6 stared

                    glBegin(GL_POLYGON);//6/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -14.0f ,6.0f);
                            glVertex2f( -14.0f,5.0f);
                          glVertex2f( -13.0f,5.0f);
                          glVertex2f( -13.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/13


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -13.0f ,6.0f);
                            glVertex2f( -13.0f,5.0f);
                          glVertex2f( -12.0f,5.0f);
                          glVertex2f( -12-.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/12


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -12.0f ,6.0f);
                            glVertex2f( -12.0f,5.0f);
                          glVertex2f( -11.0f,5.0f);
                          glVertex2f( -11.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,6.0f);
                            glVertex2f( -11.0f,5.0f);
                          glVertex2f( -10.0f,5.0f);
                          glVertex2f( -10.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,6.0f);
                            glVertex2f( -10.0f,5.0f);
                          glVertex2f( -9.0f,5.0f);
                          glVertex2f( -9.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,6.0f);
                            glVertex2f( -9.0f,5.0f);
                          glVertex2f( -8.0f,5.0f);
                          glVertex2f( -8.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,6.0f);
                            glVertex2f( -8.0f,5.0f);
                          glVertex2f( -7.0f,5.0f);
                          glVertex2f( -7.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/7


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -7.0f ,6.0f);
                            glVertex2f( -7.0f,5.0f);
                          glVertex2f( -6.0f,5.0f);
                          glVertex2f( -6.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/6


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -6.0f ,6.0f);
                            glVertex2f( -6.0f,5.0f);
                          glVertex2f( -5.0f,5.0f);
                          glVertex2f( -5.0f, 6.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//6/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -5.0f ,6.0f);
                            glVertex2f( -5.0f,5.0f);
                          glVertex2f( -4.0f,5.0f);
                          glVertex2f( -4.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -4.0f ,6.0f);
                            glVertex2f( -4.0f,5.0f);
                          glVertex2f( -3.0f,5.0f);
                          glVertex2f( -3.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,6.0f);
                            glVertex2f( -3.0f,5.0f);
                          glVertex2f( -2.0f,5.0f);
                          glVertex2f( -2.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,6.0f);
                            glVertex2f( -2.0f,5.0f);
                          glVertex2f( -1.0f,5.0f);
                          glVertex2f( -1.0f, 6.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//6/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,6.0f);
                            glVertex2f( -1.0f,5.0f);
                          glVertex2f( -0.0f,5.0f);
                          glVertex2f( -0.0f, 6.0f);

                               glEnd();







                                                         //row6 ended

 //row7 stared






                               glBegin(GL_POLYGON);//7/15


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -15.0f ,5.0f);
                            glVertex2f( -15.0f,4.0f);
                          glVertex2f( -14.0f,4.0f);
                          glVertex2f( -14.0f, 5.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//7/14


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -14.0f ,5.0f);
                            glVertex2f( -14.0f,4.0f);
                          glVertex2f( -13.0f,4.0f);
                          glVertex2f( -13.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/13


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -13.0f ,5.0f);
                            glVertex2f( -13.0f,4.0f);
                          glVertex2f( -12.0f,4.0f);
                          glVertex2f( -12-.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,5.0f);
                            glVertex2f( -12.0f,4.0f);
                          glVertex2f( -11.0f,4.0f);
                          glVertex2f( -11.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,5.0f);
                            glVertex2f( -11.0f,4.0f);
                          glVertex2f( -10.0f,4.0f);
                          glVertex2f( -10.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,5.0f);
                            glVertex2f( -10.0f,4.0f);
                          glVertex2f( -9.0f,4.0f);
                          glVertex2f( -9.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,5.0f);
                            glVertex2f( -9.0f,4.0f);
                          glVertex2f( -8.0f,4.0f);
                          glVertex2f( -8.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,5.0f);
                            glVertex2f( -8.0f,4.0f);
                          glVertex2f( -7.0f,4.0f);
                          glVertex2f( -7.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/7


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -7.0f ,5.0f);
                            glVertex2f( -7.0f,4.0f);
                          glVertex2f( -6.0f,4.0f);
                          glVertex2f( -6.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/6


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -6.0f ,5.0f);
                            glVertex2f( -6.0f,4.0f);
                          glVertex2f( -5.0f,4.0f);
                          glVertex2f( -5.0f, 5.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//7/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -5.0f ,5.0f);
                            glVertex2f( -5.0f,4.0f);
                          glVertex2f( -4.0f,4.0f);
                          glVertex2f( -4.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -4.0f ,5.0f);
                            glVertex2f( -4.0f,4.0f);
                          glVertex2f( -3.0f,4.0f);
                          glVertex2f( -3.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,5.0f);
                            glVertex2f( -3.0f,4.0f);
                          glVertex2f( -2.0f,4.0f);
                          glVertex2f( -2.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,5.0f);
                            glVertex2f( -2.0f,4.0f);
                          glVertex2f( -1.0f,4.0f);
                          glVertex2f( -1.0f, 5.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//7/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,5.0f);
                            glVertex2f( -1.0f,4.0f);
                          glVertex2f( -0.0f,4.0f);
                          glVertex2f( -0.0f, 5.0f);

                               glEnd();



//row7 ended


//row 8 started


                               glBegin(GL_POLYGON);//8/16


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -16.0f ,4.0f);
                            glVertex2f( -16.0f,3.0f);
                          glVertex2f( -15.0f,3.0f);
                          glVertex2f( -15.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/15


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -15.0f ,4.0f);
                            glVertex2f( -15.0f,3.0f);
                          glVertex2f( -14.0f,3.0f);
                          glVertex2f( -14.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/14


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -14.0f ,4.0f);
                            glVertex2f( -14.0f,3.0f);
                          glVertex2f( -13.0f,3.0f);
                          glVertex2f( -13.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -13.0f ,4.0f);
                            glVertex2f( -13.0f,3.0f);
                          glVertex2f( -12.0f,3.0f);
                          glVertex2f( -12-.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,4.0f);
                            glVertex2f( -12.0f,3.0f);
                          glVertex2f( -11.0f,3.0f);
                          glVertex2f( -11.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,4.0f);
                            glVertex2f( -11.0f,3.0f);
                          glVertex2f( -10.0f,3.0f);
                          glVertex2f( -10.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,4.0f);
                            glVertex2f( -10.0f,3.0f);
                          glVertex2f( -9.0f,3.0f);
                          glVertex2f( -9.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,4.0f);
                            glVertex2f( -9.0f,3.0f);
                          glVertex2f( -8.0f,3.0f);
                          glVertex2f( -8.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,4.0f);
                            glVertex2f( -8.0f,3.0f);
                          glVertex2f( -7.0f,3.0f);
                          glVertex2f( -7.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,4.0f);
                            glVertex2f( -7.0f,3.0f);
                          glVertex2f( -6.0f,3.0f);
                          glVertex2f( -6.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/6


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -6.0f ,4.0f);
                            glVertex2f( -6.0f,3.0f);
                          glVertex2f( -5.0f,3.0f);
                          glVertex2f( -5.0f, 4.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//8/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -5.0f ,4.0f);
                            glVertex2f( -5.0f,3.0f);
                          glVertex2f( -4.0f,3.0f);
                          glVertex2f( -4.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -4.0f ,4.0f);
                            glVertex2f( -4.0f,3.0f);
                          glVertex2f( -3.0f,3.0f);
                          glVertex2f( -3.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,4.0f);
                            glVertex2f( -3.0f,3.0f);
                          glVertex2f( -2.0f,3.0f);
                          glVertex2f( -2.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,4.0f);
                            glVertex2f( -2.0f,3.0f);
                          glVertex2f( -1.0f,3.0f);
                          glVertex2f( -1.0f, 4.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//8/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,4.0f);
                            glVertex2f( -1.0f,3.0f);
                          glVertex2f( -0.0f,3.0f);
                          glVertex2f( -0.0f, 4.0f);

                               glEnd();





                                   //row 8 ened

//row 9 start









                               glBegin(GL_POLYGON);//9/16


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -16.0f ,3.0f);
                            glVertex2f( -16.0f,2.0f);
                          glVertex2f( -15.0f,2.0f);
                          glVertex2f( -15.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/15


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -15.0f ,3.0f);
                            glVertex2f( -15.0f,2.0f);
                          glVertex2f( -14.0f,2.0f);
                          glVertex2f( -14.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -14.0f ,3.0f);
                            glVertex2f( -14.0f,2.0f);
                          glVertex2f( -13.0f,2.0f);
                          glVertex2f( -13.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -13.0f ,3.0f);
                            glVertex2f( -13.0f,2.0f);
                          glVertex2f( -12.0f,2.0f);
                          glVertex2f( -12-.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,3.0f);
                            glVertex2f( -12.0f,2.0f);
                          glVertex2f( -11.0f,2.0f);
                          glVertex2f( -11.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,3.0f);
                            glVertex2f( -11.0f,2.0f);
                          glVertex2f( -10.0f,2.0f);
                          glVertex2f( -10.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,3.0f);
                            glVertex2f( -10.0f,2.0f);
                          glVertex2f( -9.0f,2.0f);
                          glVertex2f( -9.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,3.0f);
                            glVertex2f( -9.0f,2.0f);
                          glVertex2f( -8.0f,2.0f);
                          glVertex2f( -8.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,3.0f);
                            glVertex2f( -8.0f,2.0f);
                          glVertex2f( -7.0f,2.0f);
                          glVertex2f( -7.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,3.0f);
                            glVertex2f( -7.0f,2.0f);
                          glVertex2f( -6.0f,2.0f);
                          glVertex2f( -6.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -6.0f ,3.0f);
                            glVertex2f( -6.0f,2.0f);
                          glVertex2f( -5.0f,2.0f);
                          glVertex2f( -5.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -5.0f ,3.0f);
                            glVertex2f( -5.0f,2.0f);
                          glVertex2f( -4.0f,2.0f);
                          glVertex2f( -4.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -4.0f ,3.0f);
                            glVertex2f( -4.0f,2.0f);
                          glVertex2f( -3.0f,2.0f);
                          glVertex2f( -3.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,3.0f);
                            glVertex2f( -3.0f,2.0f);
                          glVertex2f( -2.0f,2.0f);
                          glVertex2f( -2.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,3.0f);
                            glVertex2f( -2.0f,2.0f);
                          glVertex2f( -1.0f,2.0f);
                          glVertex2f( -1.0f, 3.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//9/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,3.0f);
                            glVertex2f( -1.0f,2.0f);
                          glVertex2f( -0.0f,2.0f);
                          glVertex2f( -0.0f, 3.0f);

                               glEnd();




//row 9 end


                     glBegin(GL_POLYGON);//11/17


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -16.0f ,2.0f);
                            glVertex2f( -16.0f,1.0f);
                          glVertex2f( -15.0f,1.0f);
                          glVertex2f( -15.0f, 2.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//11/16


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -15.0f ,2.0f);
                            glVertex2f( -15.0f,1.0f);
                          glVertex2f( -14.0f,1.0f);
                          glVertex2f( -14.0f, 2.0f);

                               glEnd();




                     glBegin(GL_POLYGON);//11/15


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -14.0f ,2.0f);
                            glVertex2f( -14.0f,1.0f);
                          glVertex2f( -13.0f,1.0f);
                          glVertex2f( -13.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -13.0f ,2.0f);
                            glVertex2f( -13.0f,1.0f);
                          glVertex2f( -12.0f,1.0f);
                          glVertex2f( -12.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,2.0f);
                            glVertex2f( -12.0f,1.0f);
                          glVertex2f( -11.0f,1.0f);
                          glVertex2f( -11.0f, 2.0f);

                               glEnd();

                     glBegin(GL_POLYGON);//11/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,2.0f);
                            glVertex2f( -11.0f,1.0f);
                          glVertex2f( -10.0f,1.0f);
                          glVertex2f( -10.0f, 2.0f);

                               glEnd();




                     glBegin(GL_POLYGON);//11/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,2.0f);
                            glVertex2f( -10.0f,1.0f);
                          glVertex2f( -9.0f,1.0f);
                          glVertex2f( -9.0f, 2.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//11/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,2.0f);
                            glVertex2f( -9.0f,1.0f);
                          glVertex2f( -8.0f,1.0f);
                          glVertex2f( -8.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,2.0f);
                            glVertex2f( -8.0f,1.0f);
                          glVertex2f( -7.0f,1.0f);
                          glVertex2f( -7.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,2.0f);
                            glVertex2f( -7.0f,1.0f);
                          glVertex2f( -6.0f,1.0f);
                          glVertex2f( -6.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -6.0f ,2.0f);
                            glVertex2f( -6.0f,1.0f);
                          glVertex2f( -5.0f,1.0f);
                          glVertex2f( -5.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -5.0f ,2.0f);
                            glVertex2f( -5.0f,1.0f);
                          glVertex2f( -4.0f,1.0f);
                          glVertex2f( -4.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -4.0f ,2.0f);
                            glVertex2f( -4.0f,1.0f);
                          glVertex2f( -3.0f,1.0f);
                          glVertex2f( -3.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,2.0f);
                            glVertex2f( -3.0f,1.0f);
                          glVertex2f( -2.0f,1.0f);
                          glVertex2f( -2.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,2.0f);
                            glVertex2f( -2.0f,1.0f);
                          glVertex2f( -1.0f,1.0f);
                          glVertex2f( -1.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,2.0f);
                            glVertex2f( -1.0f,1.0f);
                          glVertex2f( -0.0f,1.0f);
                          glVertex2f( -0.0f, 2.0f);

                               glEnd();







//start row 11





                     glBegin(GL_POLYGON);//11/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -16.0f ,1.0f);
                            glVertex2f( -16.0f,0.0f);
                          glVertex2f( -15.0f,0.0f);
                          glVertex2f( -15.0f, 1.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//11/2


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -15.0f ,1.0f);
                            glVertex2f( -15.0f,0.0f);
                          glVertex2f( -14.0f,0.0f);
                          glVertex2f( -14.0f, 1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -14.0f ,1.0f);
                            glVertex2f( -14.0f,0.0f);
                          glVertex2f( -13.0f,0.0f);
                          glVertex2f( -13.0f, 1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -13.0f ,1.0f);
                            glVertex2f( -13.0f,0.0f);
                          glVertex2f( -12.0f,0.0f);
                          glVertex2f( -12.0f, 1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,1.0f);
                            glVertex2f( -12.0f,0.0f);
                          glVertex2f( -11.0f,0.0f);
                          glVertex2f( -11.0f, 1.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//11/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,1.0f);
                            glVertex2f( -11.0f,0.0f);
                          glVertex2f( -10.0f,0.0f);
                          glVertex2f( -10.0f, 1.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,1.0f);
                            glVertex2f( -10.0f,0.0f);
                          glVertex2f( -9.0f,0.0f);
                          glVertex2f( -9.0f, 1.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//11/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,1.0f);
                            glVertex2f( -9.0f,0.0f);
                          glVertex2f( -8.0f,0.0f);
                          glVertex2f( -8.0f, 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,1.0f);
                            glVertex2f( -8.0f,0.0f);
                          glVertex2f( -7.0f,0.0f);
                          glVertex2f( -7.0f, 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,1.0f);
                            glVertex2f( -7.0f,0.0f);
                          glVertex2f( -6.0f,0.0f);
                          glVertex2f( -6.0f, 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -6.0f ,1.0f);
                            glVertex2f( -6.0f,0.0f);
                          glVertex2f( -5.0f,0.0f);
                          glVertex2f( -5.0f, 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -5.0f ,1.0f);
                            glVertex2f( -5.0f,0.0f);
                          glVertex2f( -4.0f,0.0f);
                          glVertex2f( -4.0f, 1.0f);

                               glEnd();

glBegin(GL_POLYGON);//11/13



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -4.0f ,1.0f);
                            glVertex2f( -4.0f,0.0f);
                          glVertex2f( -3.0f,0.0f);
                          glVertex2f( -3.0f, 1.0f);

                               glEnd();

                                glBegin(GL_POLYGON);//11/14



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,1.0f);
                            glVertex2f( -3.0f,0.0f);
                          glVertex2f( -2.0f,0.0f);
                          glVertex2f( -2.0f, 1.0f);

                               glEnd();

                                glBegin(GL_POLYGON);//11/15



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,1.0f);
                            glVertex2f( -2.0f,0.0f);
                          glVertex2f( -1.0f,0.0f);
                          glVertex2f( -1.0f, 1.0f);

                               glEnd();


                                glBegin(GL_POLYGON);//11/16



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,1.0f);
                            glVertex2f( -1.0f,0.0f);
                          glVertex2f( -0.0f,0.0f);
                          glVertex2f( -0.0f, 1.0f);

                               glEnd();




















	//**************************************************************************left*********************************************



	//extra +----------------------


	 glBegin(GL_POLYGON); //1/2

                glColor3f(0.0f, 0.0f, 0.0f);





                 glVertex2f( +9.0f,11.0f);
              glVertex2f(  +9.0,10.0f);
  glVertex2f(  +8.0f ,10.0f);

             glVertex2f(  +8.0f ,11.0f);

	                     glEnd();



	         glBegin(GL_POLYGON); //1/2

                glColor3f(0.0f, 0.0f, 0.0f);





                 glVertex2f( +8.0f,11.0f);
              glVertex2f(  +8.0,10.0f);
  glVertex2f(  +7.0f ,10.0f);

             glVertex2f(  +7.0f ,11.0f);

	                     glEnd();


	         	glBegin(GL_POLYGON); //1/3


                       glColor3f(0.0f, 0.0f, 0.0f);
                        glVertex2f(  +7.0f ,10.0f);
                        glVertex2f(  +7.0f ,11.0f);

                        glVertex2f(    +6.0f,  11.0f);
                        glVertex2f(   +6.0f,   10.0f);

                 glEnd();


	glBegin(GL_POLYGON); //1/4

glColor3f(0.0f, 0.0f, 0.0f);
                             glVertex2f(   +6.0f,   10.0f);

                        glVertex2f(    +6.0f,  11.0f);

                         glVertex2f(    +5.0f,   11.0f);
                        glVertex2f(   +5.0f,   10.0f);




                              glEnd();


	               glBegin(GL_POLYGON); //1/5

	                glColor3f(0.0f, 0.0f, 0.0f);

                    glVertex2f(    +5.0f,   10.0f);
                    glVertex2f(   +5.0f,   11.0f);
                    glVertex2f(  +4.0f,  11.0f);
                    glVertex2f(   +4.0f,   10.0f);

                                        glEnd();




		glBegin(GL_POLYGON); //1/6

                    glColor3f(0.0f, 0.0f, 0.0f);
                    glVertex2f(  +4.0f,  10.0f);
                    glVertex2f(   +4.0f,   11.0f);
                     glVertex2f(    +3.0f,   11.0f);
                    glVertex2f(   +3.0f,   10.0f);

                           glEnd();



		glBegin(GL_POLYGON); //1/7

                     glColor3f(0.0f, 0.0f, 0.0f);
                     glVertex2f(    +3.0f,   10.0f);
                    glVertex2f(   +3.0f,   11.0f);

                    glVertex2f(   +2.0f,   11.0f);
                    glVertex2f(    +2.0, 10.0f);

                      glEnd();

            glBegin(GL_POLYGON); //1/9

                                     glColor3f(0.0f, 0.0f, 0.0f);
                    glVertex2f(   +2.0f,   10.0f);
                    glVertex2f(    +2.0, 11.0f);
                   glVertex2f(   +1.0f,   11.0f);

                     glVertex2f( +1.0f,10.0f);

                                   glEnd();



            glBegin(GL_POLYGON); //1/10

                                     glColor3f(0.0f, 0.0f, 0.0f);
                    glVertex2f(   +1.0f,   10.0f);
                    glVertex2f(    +1.0, 11.0f);
                   glVertex2f(   0.0f,   11.0f);

                     glVertex2f( 0.0f, 10.0f);

                                   glEnd();







	//-------------------------------------------------------------

	              glBegin(GL_POLYGON);   //1/111



                              glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(  +10.0f ,10.0f);
                        glVertex2f(  +10.0f, 9.0f);

     glVertex2f( +9.0f,9.0f);
                            glVertex2f(  +9.0,10.0f);


                                  glEnd();




                          glBegin(GL_POLYGON);   //1/1



                              glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(  +9.0f ,10.0f);
                        glVertex2f(  +9.0f, 9.0f);

     glVertex2f( +8.0f,9.0f);
                            glVertex2f(  +8.0,10.0f);


                                  glEnd();


	         glBegin(GL_POLYGON); //1/2

                glColor3f(1.0f, 1.0f, 0.0f);

              glVertex2f(  +8.0,9.0f);
              glVertex2f( +8.0f,10.0f);
             glVertex2f(  +7.0f ,10.0f);
             glVertex2f(  +7.0f ,9.0f);

	                     glEnd();


	         	glBegin(GL_POLYGON); //1/3


                       glColor3f(1.0f, 1.0f, 0.0f);
                        glVertex2f(  +7.0f ,9.0f);
                        glVertex2f(  +7.0f ,10.0f);

                        glVertex2f(    +6.0f,  10.0f);
                        glVertex2f(   +6.0f,   9.0f);

                 glEnd();


	glBegin(GL_POLYGON); //1/4

glColor3f(1.0f, 1.0f, 0.0f);
                             glVertex2f(   +6.0f,   9.0f);

                        glVertex2f(    +6.0f,  10.0f);

                         glVertex2f(    +5.0f,   10.0f);
                        glVertex2f(   +5.0f,   9.0f);




                              glEnd();


	               glBegin(GL_POLYGON); //1/5

	                glColor3f(1.0f, 1.0f, 0.0f);

                    glVertex2f(    +5.0f,   9.0f);
                    glVertex2f(   +5.0f,   10.0f);
                    glVertex2f(  +4.0f,  10.0f);
                    glVertex2f(   +4.0f,   9.0f);

                                        glEnd();




		glBegin(GL_POLYGON); //1/6

                    glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(  +4.0f,  9.0f);
                    glVertex2f(   +4.0f,   10.0f);
                     glVertex2f(    +3.0f,   10.0f);
                    glVertex2f(   +3.0f,   9.0f);

                           glEnd();



		glBegin(GL_POLYGON); //1/7

                     glColor3f(1.0f, 1.0f, 0.0f);
                     glVertex2f(    +3.0f,   9.0f);
                    glVertex2f(   +3.0f,   10.0f);

                    glVertex2f(   +2.0f,   10.0f);
                    glVertex2f(    +2.0, 9.0f);

                      glEnd();

            glBegin(GL_POLYGON); //1/9

                                     glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(   +2.0f,   9.0f);
                    glVertex2f(    +2.0, 10.0f);
                   glVertex2f(   +1.0f,   10.0f);

                     glVertex2f( +1.0f, 9.0f);

                                   glEnd();



            glBegin(GL_POLYGON); //1/10

                                     glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(   +1.0f,   9.0f);
                    glVertex2f(    +1.0, 10.0f);
                   glVertex2f(   0.0f,   10.0f);

                     glVertex2f( 0.0f, 9.0f);

                                   glEnd();


//new row 2

                     glBegin(GL_POLYGON); //2/1

                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +11.0f ,9.0f);
                            glVertex2f( +11.0f,8.0f);
                          glVertex2f( +10.0f,8.0f);
                          glVertex2f( +10.0f, 9.0f);

                               glEnd();


	                        glBegin(GL_POLYGON); //2/1

                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +10.0f ,9.0f);
                            glVertex2f( +10.0f,8.0f);
                          glVertex2f( +9.0f,8.0f);
                          glVertex2f( +9.0f, 9.0f);

                               glEnd();









                              glBegin(GL_POLYGON); //2/2

                             glColor3f(1.0f, 1.0f, 0.0f);
                                       glVertex2f( +9.0f, 9.0f);
                            glVertex2f( +9.0f,8.0f);
                               glVertex2f( +8.0f ,8.0f);
                               glVertex2f( +8.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/3

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +8.0f,9.0f);
                               glVertex2f( +8.0f ,8.0f);
                                    glVertex2f( +7.0f ,8.0f);
                             glVertex2f( +7.0f,9.0f);



                                   glEnd();







                              glBegin(GL_POLYGON); //2/4

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +7.0f,9.0f);
                               glVertex2f( +7.0f ,8.0f);
                                    glVertex2f( +6.0f ,8.0f);
                             glVertex2f( +6.0f,9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //2/5

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +6.0f,9.0f);
                               glVertex2f( +6.0f ,8.0f);
                                    glVertex2f( +5.0f ,8.0f);
                             glVertex2f( +5.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/6

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +5.0f,9.0f);
                               glVertex2f( +5.0f ,8.0f);
                                    glVertex2f( +4.0f ,8.0f);
                             glVertex2f( +4.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/7

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +4.0f,9.0f);
                               glVertex2f( +4.0f ,8.0f);
                                    glVertex2f( +3.0f ,8.0f);
                             glVertex2f( +3.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/8

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +3.0f,9.0f);
                               glVertex2f( +3.0f ,8.0f);
                                    glVertex2f( +2.0f ,8.0f);
                             glVertex2f( +2.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/9

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +2.0f,9.0f);
                               glVertex2f( +2.0f ,8.0f);
                                    glVertex2f( +1.0f ,8.0f);
                             glVertex2f( +1.0f,9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //2/10

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +1.0f,9.0f);
                               glVertex2f( +1.0f ,8.0f);
                                    glVertex2f( +0.0f ,8.0f);
                             glVertex2f( +0.0f,9.0f);



                                   glEnd();

                              //row 2 end

//row3 start

/*

 glBegin(GL_POLYGON);//3/1





                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +11.0f ,9.0f);
                            glVertex2f( +11.0f,8.0f);
                          glVertex2f( +10.0f,8.0f);
                          glVertex2f( +10.0f, 9.0f);

                               glEnd();

 glBegin(GL_POLYGON);//3/2





                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +10.0f ,9.0f);
                            glVertex2f( +10.0f,8.0f);
                          glVertex2f( +9.0f,8.0f);
                          glVertex2f( +9.0f, 9.0f);

                               glEnd();









                              glBegin(GL_POLYGON); //3/3

                             glColor3f(1.0f, 1.0f, 0.0f);
                                       glVertex2f( +9.0f, 9.0f);
                            glVertex2f( +9.0f,8.0f);
                               glVertex2f( +8.0f ,8.0f);
                               glVertex2f( +8.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/4

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +8.0f,9.0f);
                               glVertex2f( +8.0f ,8.0f);
                                    glVertex2f( +7.0f ,8.0f);
                             glVertex2f( +7.0f,9.0f);



                                   glEnd();







                              glBegin(GL_POLYGON); //3/5

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +7.0f,9.0f);
                               glVertex2f( +7.0f ,8.0f);
                                    glVertex2f( +6.0f ,8.0f);
                             glVertex2f( +6.0f,9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/6

                             glColor3f(1.0f,1.0f, 0.0f);
                                     glVertex2f( +6.0f,9.0f);
                               glVertex2f( +6.0f ,8.0f);
                                    glVertex2f( +5.0f ,8.0f);
                             glVertex2f( +5.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/7

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +5.0f,9.0f);
                               glVertex2f( +5.0f ,8.0f);
                                    glVertex2f( +4.0f ,8.0f);
                             glVertex2f( +4.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/8

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +4.0f,9.0f);
                               glVertex2f( +4.0f ,8.0f);
                                    glVertex2f( +3.0f ,8.0f);
                             glVertex2f( +3.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/9

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +3.0f,9.0f);
                               glVertex2f( +3.0f ,8.0f);
                                    glVertex2f( +2.0f ,8.0f);
                             glVertex2f( +2.0f,9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/10

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +2.0f,9.0f);
                               glVertex2f( +2.0f ,8.0f);
                                    glVertex2f( +1.0f ,8.0f);
                             glVertex2f( +1.0f,9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/11

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +1.0f,9.0f);
                               glVertex2f( +1.0f ,8.0f);
                                    glVertex2f( +0.0f ,8.0f);
                             glVertex2f( +0.0f,9.0f);



                                   glEnd();

*/
                                   // row 3 ended



                                  //row 3 started

                                  //row3 start



 glBegin(GL_POLYGON);//3/1





                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +12.0f ,8.0f);
                            glVertex2f( +12.0f,7.0f);
                          glVertex2f( +11.0f,7.0f);
                          glVertex2f( +11.0f, 8.0f);

                               glEnd();
 glBegin(GL_POLYGON);//3/1





                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +11.0f ,8.0f);
                            glVertex2f( +11.0f,7.0f);
                          glVertex2f( +10.0f,7.0f);
                          glVertex2f( +10.0f, 8.0f);

                               glEnd();

 glBegin(GL_POLYGON);//3/2





                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +10.0f ,8.0f);
                            glVertex2f( +10.0f,7.0f);
                          glVertex2f( +9.0f,7.0f);
                          glVertex2f( +9.0f, 8.0f);

                               glEnd();









                              glBegin(GL_POLYGON); //3/3

                             glColor3f(0.0f, 0.0f, 0.0f);
                                       glVertex2f( +9.0f, 8.0f);
                            glVertex2f( +9.0f,7.0f);
                               glVertex2f( +8.0f ,7.0f);
                               glVertex2f( +8.0f,8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/4

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +8.0f,8.0f);
                               glVertex2f( +8.0f ,7.0f);
                                    glVertex2f( +7.0f ,7.0f);
                             glVertex2f( +7.0f,8.0f);



                                   glEnd();







                              glBegin(GL_POLYGON); //3/5

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +7.0f,8.0f);
                               glVertex2f( +7.0f ,7.0f);
                                    glVertex2f( +6.0f ,7.0f);
                             glVertex2f( +6.0f,8.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/6

                             glColor3f(1.0f,1.0f, 0.0f);
                                     glVertex2f( +6.0f,8.0f);
                               glVertex2f( +6.0f ,7.0f);
                                    glVertex2f( +5.0f ,7.0f);
                             glVertex2f( +5.0f,8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/7

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +5.0f,8.0f);
                               glVertex2f( +5.0f ,7.0f);
                                    glVertex2f( +4.0f ,7.0f);
                             glVertex2f( +4.0f,8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/8

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( +4.0f,8.0f);
                               glVertex2f( +4.0f ,7.0f);
                                    glVertex2f( +3.0f ,7.0f);
                             glVertex2f( +3.0f,8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/9

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +3.0f,8.0f);
                               glVertex2f( +3.0f ,7.0f);
                                    glVertex2f( +2.0f ,7.0f);
                             glVertex2f( +2.0f,8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/10

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +2.0f,8.0f);
                               glVertex2f( +2.0f ,7.0f);
                                    glVertex2f( +1.0f ,7.0f);
                             glVertex2f( +1.0f,8.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/11

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( +1.0f,8.0f);
                               glVertex2f( +1.0f ,7.0f);
                                    glVertex2f( +0.0f ,7.0f);
                             glVertex2f( +0.0f,8.0f);




                                   glEnd();


 //row 5 started

                               glBegin(GL_POLYGON);//5/14





                               glBegin(GL_POLYGON);//5/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +13.0f ,7.0f);
                            glVertex2f( +13.0f,6.0f);
                          glVertex2f( +12.0f,6.0f);
                          glVertex2f( +12+.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/12


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +12.0f ,7.0f);
                            glVertex2f( +12.0f,6.0f);
                          glVertex2f( +11.0f,6.0f);
                          glVertex2f( +11.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/11


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +11.0f ,7.0f);
                            glVertex2f( +11.0f,6.0f);
                          glVertex2f( +10.0f,6.0f);
                          glVertex2f( +10.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +10.0f ,7.0f);
                            glVertex2f( +10.0f,6.0f);
                          glVertex2f( +9.0f,6.0f);
                          glVertex2f( +9.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +9.0f ,7.0f);
                            glVertex2f( +9.0f,6.0f);
                          glVertex2f( +8.0f,6.0f);
                          glVertex2f( +8.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +8.0f ,7.0f);
                            glVertex2f( +8.0f,6.0f);
                          glVertex2f( +7.0f,6.0f);
                          glVertex2f( +7.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/7


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +7.0f ,7.0f);
                            glVertex2f( +7.0f,6.0f);
                          glVertex2f( +6.0f,6.0f);
                          glVertex2f( +6.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/6


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +6.0f ,7.0f);
                            glVertex2f( +6.0f,6.0f);
                          glVertex2f( +5.0f,6.0f);
                          glVertex2f( +5.0f, 7.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//5/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +5.0f ,7.0f);
                            glVertex2f( +5.0f,6.0f);
                          glVertex2f( +4.0f,6.0f);
                          glVertex2f( +4.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +4.0f ,7.0f);
                            glVertex2f( +4.0f,6.0f);
                          glVertex2f( +3.0f,6.0f);
                          glVertex2f( +3.0f,7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +3.0f ,7.0f);
                            glVertex2f( +3.0f,6.0f);
                          glVertex2f( +2.0f,6.0f);
                          glVertex2f( +2.0f, 7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +2.0f ,7.0f);
                            glVertex2f( +2.0f,6.0f);
                          glVertex2f( +1.0f,6.0f);
                          glVertex2f( +1.0f, 7.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//5/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +1.0f ,7.0f);
                            glVertex2f( +1.0f,6.0f);
                          glVertex2f( +0.0f,6.0f);
                          glVertex2f( +0.0f, 7.0f);

                               glEnd();







                                      //row 5 ended




//row6 stared

                    glBegin(GL_POLYGON);//6/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +14.0f ,6.0f);
                            glVertex2f( +14.0f,5.0f);
                          glVertex2f( +13.0f,5.0f);
                          glVertex2f( +13.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/13


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +13.0f ,6.0f);
                            glVertex2f( +13.0f,5.0f);
                          glVertex2f( +12.0f,5.0f);
                          glVertex2f( +12+.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/12


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +12.0f ,6.0f);
                            glVertex2f( +12.0f,5.0f);
                          glVertex2f( +11.0f,5.0f);
                          glVertex2f( +11.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +11.0f ,6.0f);
                            glVertex2f( +11.0f,5.0f);
                          glVertex2f( +10.0f,5.0f);
                          glVertex2f( +10.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +10.0f ,6.0f);
                            glVertex2f( +10.0f,5.0f);
                          glVertex2f( +9.0f,5.0f);
                          glVertex2f( +9.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +9.0f ,6.0f);
                            glVertex2f( +9.0f,5.0f);
                          glVertex2f( +8.0f,5.0f);
                          glVertex2f( +8.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +8.0f ,6.0f);
                            glVertex2f( +8.0f,5.0f);
                          glVertex2f( +7.0f,5.0f);
                          glVertex2f( +7.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/7


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +7.0f ,6.0f);
                            glVertex2f( +7.0f,5.0f);
                          glVertex2f( +6.0f,5.0f);
                          glVertex2f( +6.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/6


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +6.0f ,6.0f);
                            glVertex2f( +6.0f,5.0f);
                          glVertex2f( +5.0f,5.0f);
                          glVertex2f( +5.0f, 6.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//6/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +5.0f ,6.0f);
                            glVertex2f( +5.0f,5.0f);
                          glVertex2f( +4.0f,5.0f);
                          glVertex2f( +4.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +4.0f ,6.0f);
                            glVertex2f( +4.0f,5.0f);
                          glVertex2f( +3.0f,5.0f);
                          glVertex2f( +3.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +3.0f ,6.0f);
                            glVertex2f( +3.0f,5.0f);
                          glVertex2f( +2.0f,5.0f);
                          glVertex2f( +2.0f, 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +2.0f ,6.0f);
                            glVertex2f( +2.0f,5.0f);
                          glVertex2f( +1.0f,5.0f);
                          glVertex2f( +1.0f, 6.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//6/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +1.0f ,6.0f);
                            glVertex2f( +1.0f,5.0f);
                          glVertex2f( +0.0f,5.0f);
                          glVertex2f( +0.0f, 6.0f);

                               glEnd();







                                                         //row6 ended

 //row7 stared






                               glBegin(GL_POLYGON);//7/15


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +15.0f ,5.0f);
                            glVertex2f( +15.0f,4.0f);
                          glVertex2f( +14.0f,4.0f);
                          glVertex2f( +14.0f, 5.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//7/14


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +14.0f ,5.0f);
                            glVertex2f( +14.0f,4.0f);
                          glVertex2f( +13.0f,4.0f);
                          glVertex2f( +13.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/13


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +13.0f ,5.0f);
                            glVertex2f( +13.0f,4.0f);
                          glVertex2f( +12.0f,4.0f);
                          glVertex2f( +12+.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +12.0f ,5.0f);
                            glVertex2f( +12.0f,4.0f);
                          glVertex2f( +11.0f,4.0f);
                          glVertex2f( +11.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +11.0f ,5.0f);
                            glVertex2f( +11.0f,4.0f);
                          glVertex2f( +10.0f,4.0f);
                          glVertex2f( +10.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +10.0f ,5.0f);
                            glVertex2f( +10.0f,4.0f);
                          glVertex2f( +9.0f,4.0f);
                          glVertex2f( +9.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +9.0f ,5.0f);
                            glVertex2f( +9.0f,4.0f);
                          glVertex2f( +8.0f,4.0f);
                          glVertex2f( +8.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +8.0f ,5.0f);
                            glVertex2f( +8.0f,4.0f);
                          glVertex2f( +7.0f,4.0f);
                          glVertex2f( +7.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/7


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +7.0f ,5.0f);
                            glVertex2f( +7.0f,4.0f);
                          glVertex2f( +6.0f,4.0f);
                          glVertex2f( +6.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/6


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +6.0f ,5.0f);
                            glVertex2f( +6.0f,4.0f);
                          glVertex2f( +5.0f,4.0f);
                          glVertex2f( +5.0f, 5.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//7/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +5.0f ,5.0f);
                            glVertex2f( +5.0f,4.0f);
                          glVertex2f( +4.0f,4.0f);
                          glVertex2f( +4.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +4.0f ,5.0f);
                            glVertex2f( +4.0f,4.0f);
                          glVertex2f( +3.0f,4.0f);
                          glVertex2f( +3.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +3.0f ,5.0f);
                            glVertex2f( +3.0f,4.0f);
                          glVertex2f( +2.0f,4.0f);
                          glVertex2f( +2.0f, 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +2.0f ,5.0f);
                            glVertex2f( +2.0f,4.0f);
                          glVertex2f( +1.0f,4.0f);
                          glVertex2f( +1.0f, 5.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//7/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +1.0f ,5.0f);
                            glVertex2f( +1.0f,4.0f);
                          glVertex2f( +0.0f,4.0f);
                          glVertex2f( +0.0f, 5.0f);

                               glEnd();



//row7 ended


//row 8 started


                               glBegin(GL_POLYGON);//8/16


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +16.0f ,4.0f);
                            glVertex2f( +16.0f,3.0f);
                          glVertex2f( +15.0f,3.0f);
                          glVertex2f( +15.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/15


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +15.0f ,4.0f);
                            glVertex2f( +15.0f,3.0f);
                          glVertex2f( +14.0f,3.0f);
                          glVertex2f( +14.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/14


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +14.0f ,4.0f);
                            glVertex2f( +14.0f,3.0f);
                          glVertex2f( +13.0f,3.0f);
                          glVertex2f( +13.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +13.0f ,4.0f);
                            glVertex2f( +13.0f,3.0f);
                          glVertex2f( +12.0f,3.0f);
                          glVertex2f( +12+.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +12.0f ,4.0f);
                            glVertex2f( +12.0f,3.0f);
                          glVertex2f( +11.0f,3.0f);
                          glVertex2f( +11.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +11.0f ,4.0f);
                            glVertex2f( +11.0f,3.0f);
                          glVertex2f( +10.0f,3.0f);
                          glVertex2f( +10.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +10.0f ,4.0f);
                            glVertex2f( +10.0f,3.0f);
                          glVertex2f( +9.0f,3.0f);
                          glVertex2f( +9.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +9.0f ,4.0f);
                            glVertex2f( +9.0f,3.0f);
                          glVertex2f( +8.0f,3.0f);
                          glVertex2f( +8.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +8.0f ,4.0f);
                            glVertex2f( +8.0f,3.0f);
                          glVertex2f( +7.0f,3.0f);
                          glVertex2f( +7.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +7.0f ,4.0f);
                            glVertex2f( +7.0f,3.0f);
                          glVertex2f( +6.0f,3.0f);
                          glVertex2f( +6.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/6


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +6.0f ,4.0f);
                            glVertex2f( +6.0f,3.0f);
                          glVertex2f( +5.0f,3.0f);
                          glVertex2f( +5.0f, 4.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//8/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +5.0f ,4.0f);
                            glVertex2f( +5.0f,3.0f);
                          glVertex2f( +4.0f,3.0f);
                          glVertex2f( +4.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +4.0f ,4.0f);
                            glVertex2f( +4.0f,3.0f);
                          glVertex2f( +3.0f,3.0f);
                          glVertex2f( +3.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +3.0f ,4.0f);
                            glVertex2f( +3.0f,3.0f);
                          glVertex2f( +2.0f,3.0f);
                          glVertex2f( +2.0f, 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +2.0f ,4.0f);
                            glVertex2f( +2.0f,3.0f);
                          glVertex2f( +1.0f,3.0f);
                          glVertex2f( +1.0f, 4.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//8/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +1.0f ,4.0f);
                            glVertex2f( +1.0f,3.0f);
                          glVertex2f( +0.0f,3.0f);
                          glVertex2f( +0.0f, 4.0f);

                               glEnd();





                                   //row 8 ened

//row 9 start









                               glBegin(GL_POLYGON);//9/16


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +16.0f ,3.0f);
                            glVertex2f( +16.0f,2.0f);
                          glVertex2f( +15.0f,2.0f);
                          glVertex2f( +15.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/15


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +15.0f ,3.0f);
                            glVertex2f( +15.0f,2.0f);
                          glVertex2f( +14.0f,2.0f);
                          glVertex2f( +14.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +14.0f ,3.0f);
                            glVertex2f( +14.0f,2.0f);
                          glVertex2f( +13.0f,2.0f);
                          glVertex2f( +13.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +13.0f ,3.0f);
                            glVertex2f( +13.0f,2.0f);
                          glVertex2f( +12.0f,2.0f);
                          glVertex2f( +12+.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +12.0f ,3.0f);
                            glVertex2f( +12.0f,2.0f);
                          glVertex2f( +11.0f,2.0f);
                          glVertex2f( +11.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +11.0f ,3.0f);
                            glVertex2f( +11.0f,2.0f);
                          glVertex2f( +10.0f,2.0f);
                          glVertex2f( +10.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +10.0f ,3.0f);
                            glVertex2f( +10.0f,2.0f);
                          glVertex2f( +9.0f,2.0f);
                          glVertex2f( +9.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +9.0f ,3.0f);
                            glVertex2f( +9.0f,2.0f);
                          glVertex2f( +8.0f,2.0f);
                          glVertex2f( +8.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +8.0f ,3.0f);
                            glVertex2f( +8.0f,2.0f);
                          glVertex2f( +7.0f,2.0f);
                          glVertex2f( +7.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +7.0f ,3.0f);
                            glVertex2f( +7.0f,2.0f);
                          glVertex2f( +6.0f,2.0f);
                          glVertex2f( +6.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +6.0f ,3.0f);
                            glVertex2f( +6.0f,2.0f);
                          glVertex2f( +5.0f,2.0f);
                          glVertex2f( +5.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +5.0f ,3.0f);
                            glVertex2f( +5.0f,2.0f);
                          glVertex2f( +4.0f,2.0f);
                          glVertex2f( +4.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +4.0f ,3.0f);
                            glVertex2f( +4.0f,2.0f);
                          glVertex2f( +3.0f,2.0f);
                          glVertex2f( +3.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +3.0f ,3.0f);
                            glVertex2f( +3.0f,2.0f);
                          glVertex2f( +2.0f,2.0f);
                          glVertex2f( +2.0f, 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +2.0f ,3.0f);
                            glVertex2f( +2.0f,2.0f);
                          glVertex2f( +1.0f,2.0f);
                          glVertex2f( +1.0f, 3.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//9/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +1.0f ,3.0f);
                            glVertex2f( +1.0f,2.0f);
                          glVertex2f( +0.0f,2.0f);
                          glVertex2f( +0.0f, 3.0f);

                               glEnd();




//row 9 end


                     glBegin(GL_POLYGON);//11/17


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +16.0f ,2.0f);
                            glVertex2f( +16.0f,1.0f);
                          glVertex2f( +15.0f,1.0f);
                          glVertex2f( +15.0f, 2.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//11/16


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +15.0f ,2.0f);
                            glVertex2f( +15.0f,1.0f);
                          glVertex2f( +14.0f,1.0f);
                          glVertex2f( +14.0f, 2.0f);

                               glEnd();




                     glBegin(GL_POLYGON);//11/15


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +14.0f ,2.0f);
                            glVertex2f( +14.0f,1.0f);
                          glVertex2f( +13.0f,1.0f);
                          glVertex2f( +13.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +13.0f ,2.0f);
                            glVertex2f( +13.0f,1.0f);
                          glVertex2f( +12.0f,1.0f);
                          glVertex2f( +12.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +12.0f ,2.0f);
                            glVertex2f( +12.0f,1.0f);
                          glVertex2f( +11.0f,1.0f);
                          glVertex2f( +11.0f, 2.0f);

                               glEnd();

                     glBegin(GL_POLYGON);//11/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +11.0f ,2.0f);
                            glVertex2f( +11.0f,1.0f);
                          glVertex2f( +10.0f,1.0f);
                          glVertex2f( +10.0f, 2.0f);

                               glEnd();




                     glBegin(GL_POLYGON);//11/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +10.0f ,2.0f);
                            glVertex2f( +10.0f,1.0f);
                          glVertex2f( +9.0f,1.0f);
                          glVertex2f( +9.0f, 2.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//11/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +9.0f ,2.0f);
                            glVertex2f( +9.0f,1.0f);
                          glVertex2f( +8.0f,1.0f);
                          glVertex2f( +8.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +8.0f ,2.0f);
                            glVertex2f( +8.0f,1.0f);
                          glVertex2f( +7.0f,1.0f);
                          glVertex2f( +7.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +7.0f ,2.0f);
                            glVertex2f( +7.0f,1.0f);
                          glVertex2f( +6.0f,1.0f);
                          glVertex2f( +6.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +6.0f ,2.0f);
                            glVertex2f( +6.0f,1.0f);
                          glVertex2f( +5.0f,1.0f);
                          glVertex2f( +5.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +5.0f ,2.0f);
                            glVertex2f( +5.0f,1.0f);
                          glVertex2f( +4.0f,1.0f);
                          glVertex2f( +4.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +4.0f ,2.0f);
                            glVertex2f( +4.0f,1.0f);
                          glVertex2f( +3.0f,1.0f);
                          glVertex2f( +3.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +3.0f ,2.0f);
                            glVertex2f( +3.0f,1.0f);
                          glVertex2f( +2.0f,1.0f);
                          glVertex2f( +2.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +2.0f ,2.0f);
                            glVertex2f( +2.0f,1.0f);
                          glVertex2f( +1.0f,1.0f);
                          glVertex2f( +1.0f, 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +1.0f ,2.0f);
                            glVertex2f( +1.0f,1.0f);
                          glVertex2f( +0.0f,1.0f);
                          glVertex2f( +0.0f, 2.0f);

                               glEnd();







//start row 11





                     glBegin(GL_POLYGON);//11/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +16.0f ,1.0f);
                            glVertex2f( +16.0f,0.0f);
                          glVertex2f( +15.0f,0.0f);
                          glVertex2f( +15.0f, 1.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//11/2


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( +15.0f ,1.0f);
                            glVertex2f( +15.0f,0.0f);
                          glVertex2f( +14.0f,0.0f);
                          glVertex2f( +14.0f, 1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +14.0f ,1.0f);
                            glVertex2f( +14.0f,0.0f);
                          glVertex2f( +13.0f,0.0f);
                          glVertex2f( +13.0f, 1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +13.0f ,1.0f);
                            glVertex2f( +13.0f,0.0f);
                          glVertex2f( +12.0f,0.0f);
                          glVertex2f( +12.0f, 1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +12.0f ,1.0f);
                            glVertex2f( +12.0f,0.0f);
                          glVertex2f( +11.0f,0.0f);
                          glVertex2f( +11.0f, 1.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//11/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +11.0f ,1.0f);
                            glVertex2f( +11.0f,0.0f);
                          glVertex2f( +10.0f,0.0f);
                          glVertex2f( +10.0f, 1.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +10.0f ,1.0f);
                            glVertex2f( +10.0f,0.0f);
                          glVertex2f( +9.0f,0.0f);
                          glVertex2f( +9.0f, 1.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//11/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +9.0f ,1.0f);
                            glVertex2f( +9.0f,0.0f);
                          glVertex2f( +8.0f,0.0f);
                          glVertex2f( +8.0f, 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +8.0f ,1.0f);
                            glVertex2f( +8.0f,0.0f);
                          glVertex2f( +7.0f,0.0f);
                          glVertex2f( +7.0f, 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +7.0f ,1.0f);
                            glVertex2f( +7.0f,0.0f);
                          glVertex2f( +6.0f,0.0f);
                          glVertex2f( +6.0f, 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +6.0f ,1.0f);
                            glVertex2f( +6.0f,0.0f);
                          glVertex2f( +5.0f,0.0f);
                          glVertex2f( +5.0f, 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +5.0f ,1.0f);
                            glVertex2f( +5.0f,0.0f);
                          glVertex2f( +4.0f,0.0f);
                          glVertex2f( +4.0f, 1.0f);

                               glEnd();

glBegin(GL_POLYGON);//11/13



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +4.0f ,1.0f);
                            glVertex2f( +4.0f,0.0f);
                          glVertex2f( +3.0f,0.0f);
                          glVertex2f( +3.0f, 1.0f);

                               glEnd();

                                glBegin(GL_POLYGON);//11/14



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +3.0f ,1.0f);
                            glVertex2f( +3.0f,0.0f);
                          glVertex2f( +2.0f,0.0f);
                          glVertex2f( +2.0f, 1.0f);

                               glEnd();

                                glBegin(GL_POLYGON);//11/15



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +2.0f ,1.0f);
                            glVertex2f( +2.0f,0.0f);
                          glVertex2f( +1.0f,0.0f);
                          glVertex2f( +1.0f, 1.0f);

                               glEnd();


                                glBegin(GL_POLYGON);//11/16



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( +1.0f ,1.0f);
                            glVertex2f( +1.0f,0.0f);
                          glVertex2f( +0.0f,0.0f);
                          glVertex2f( +0.0f, 1.0f);

                               glEnd();

//**************************************************************bottom left************************/


	//extra -----------------------


	 glBegin(GL_POLYGON); //1/2

                glColor3f(0.0f, 0.0f, 0.0f);





                 glVertex2f( -9.0f,-11.0f);
              glVertex2f(  -9.0,-10.0f);
  glVertex2f(  -8.0f ,-10.0f);

             glVertex2f(  -8.0f ,-11.0f);

	                     glEnd();



	         glBegin(GL_POLYGON); //1/2

                glColor3f(0.0f, 0.0f, 0.0f);





                 glVertex2f( -8.0f,-11.0f);
              glVertex2f(  -8.0,-10.0f);
  glVertex2f(  -7.0f ,-10.0f);

             glVertex2f(  -7.0f ,-11.0f);

	                     glEnd();


	         	glBegin(GL_POLYGON); //1/3


                       glColor3f(0.0f, 0.0f, 0.0f);


                        glVertex2f(  -7.0f ,-10.0f);
                        glVertex2f(  -7.0f ,-11.0f);

                        glVertex2f(    -6.0f,  -11.0f);
                        glVertex2f(   -6.0f,  - 10.0f);

                 glEnd();


	glBegin(GL_POLYGON); //1/4

glColor3f(0.0f, 0.0f, 0.0f);
                             glVertex2f(   -6.0f,   -10.0f);

                        glVertex2f(    -6.0f,  -11.0f);

                         glVertex2f(    -5.0f, -  11.0f);
                        glVertex2f(   -5.0f,  - 10.0f);




                              glEnd();


	               glBegin(GL_POLYGON); //1/5

	                glColor3f(0.0f, 0.0f, 0.0f);

                    glVertex2f(    -5.0f,  - 10.0f);
                    glVertex2f(   -5.0f, -  11.0f);
                    glVertex2f(  -4.0f, - 11.0f);
                    glVertex2f(   -4.0f, -  10.0f);

                                        glEnd();




		glBegin(GL_POLYGON); //1/6

                    glColor3f(0.0f, 0.0f, 0.0f);
                    glVertex2f(  -4.0f, - 10.0f);
                    glVertex2f(   -4.0f,  - 11.0f);
                     glVertex2f(    -3.0f,  - 11.0f);
                    glVertex2f(   -3.0f,  - 10.0f);

                           glEnd();



		glBegin(GL_POLYGON); //1/7

                     glColor3f(0.0f, 0.0f, 0.0f);
                     glVertex2f(    -3.0f, -  10.0f);
                    glVertex2f(   -3.0f, -  11.0f);

                    glVertex2f(   -2.0f, -  11.0f);
                    glVertex2f(    -2.0,- 10.0f);

                      glEnd();

            glBegin(GL_POLYGON); //1/9

                                     glColor3f(0.0f, 0.0f, 0.0f);
                    glVertex2f(   -2.0f,  - 10.0f);
                    glVertex2f(    -2.0,- 11.0f);
                   glVertex2f(   -1.0f,  - 11.0f);

                     glVertex2f( -1.0f,-10.0f);

                                   glEnd();



            glBegin(GL_POLYGON); //1/10

                                     glColor3f(.0f, 0.0f, 0.0f);
                    glVertex2f(   -1.0f,  - 10.0f);
                    glVertex2f(    -1.0f,- 11.0f);
                   glVertex2f(   0.0f, -  11.0f);

                     glVertex2f( 0.0f,- 10.0f);

                                   glEnd();







	//-------------------------------------------------------------

	              glBegin(GL_POLYGON);   //1/111



                              glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(  -10.0f ,-10.0f);
                        glVertex2f(  -10.0f, -9.0f);

     glVertex2f( -9.0f,-9.0f);
                            glVertex2f(  -9.0,-10.0f);


                                  glEnd();




                          glBegin(GL_POLYGON);   //1/1



                              glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(  -9.0f ,-10.0f);
                        glVertex2f(  -9.0f, -9.0f);

     glVertex2f( -8.0f,-9.0f);
                            glVertex2f(  -8.0,-10.0f);


                                  glEnd();


	         glBegin(GL_POLYGON); //1/2

                glColor3f(1.0f, 1.0f, 0.0f);

              glVertex2f(  -8.0,-9.0f);
              glVertex2f( -8.0f,-10.0f);
             glVertex2f(  -7.0f ,-10.0f);
             glVertex2f(  -7.0f ,-9.0f);

	                     glEnd();


	         	glBegin(GL_POLYGON); //1/3


                       glColor3f(1.0f, 1.0f, 0.0f);
                        glVertex2f(  -7.0f ,-9.0f);
                        glVertex2f(  -7.0f ,-10.0f);

                        glVertex2f(    -6.0f, - 10.0f);
                        glVertex2f(   -6.0f,  - 9.0f);

                 glEnd();


	glBegin(GL_POLYGON); //1/4

glColor3f(1.0f, 1.0f, 0.0f);
                             glVertex2f(   -6.0f, -  9.0f);

                        glVertex2f(    -6.0f, - 10.0f);

                         glVertex2f(    -5.0f, -  10.0f);
                        glVertex2f(   -5.0f, -  9.0f);




                              glEnd();


	               glBegin(GL_POLYGON); //1/5

	                glColor3f(1.0f, 1.0f, 0.0f);

                    glVertex2f(    -5.0f,  - 9.0f);
                    glVertex2f(   -5.0f,-   10.0f);
                    glVertex2f(  -4.0f,  -10.0f);
                    glVertex2f(   -4.0f, -  9.0f);

                                        glEnd();




		glBegin(GL_POLYGON); //1/6

                    glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(  -4.0f, - 9.0f);
                    glVertex2f(   -4.0f,  - 10.0f);
                     glVertex2f(    -3.0f, -  10.0f);
                    glVertex2f(   -3.0f,  - 9.0f);

                           glEnd();



		glBegin(GL_POLYGON); //1/7

                     glColor3f(1.0f, 1.0f, 0.0f);
                     glVertex2f(    -3.0f,-   9.0f);
                    glVertex2f(   -3.0f, -  10.0f);

                    glVertex2f(   -2.0f,  - 10.0f);
                    glVertex2f(    -2.0,- 9.0f);

                      glEnd();

            glBegin(GL_POLYGON); //1/9

                                     glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(   -2.0f,  - 9.0f);
                    glVertex2f(    -2.0,- 10.0f);
                   glVertex2f(   -1.0f,  - 10.0f);

                     glVertex2f( -1.0f,- 9.0f);

                                   glEnd();



            glBegin(GL_POLYGON); //1/10

                                     glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(   -1.0f,  - 9.0f);
                    glVertex2f(    -1.0,- 10.0f);
                   glVertex2f(   0.0f,  - 10.0f);

                     glVertex2f( 0.0f, -9.0f);

                                   glEnd();


//new row 9


                     glBegin(GL_POLYGON); //9/1

                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,-9.0f);
                            glVertex2f( -11.0f,-8.0f);
                          glVertex2f( -10.0f,-8.0f);
                          glVertex2f( -10.0f, -9.0f);

                               glEnd();


	                        glBegin(GL_POLYGON); //9/1

                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -10.0f ,-9.0f);
                            glVertex2f( -10.0f,-8.0f);
                          glVertex2f( -9.0f,-8.0f);
                          glVertex2f( -9.0f, -9.0f);

                               glEnd();









                              glBegin(GL_POLYGON); //2/2

                             glColor3f(1.0f, 1.0f, 0.0f);
                                       glVertex2f( -9.0f,- 9.0f);
                            glVertex2f( -9.0f,-8.0f);
                               glVertex2f( -8.0f ,-8.0f);
                               glVertex2f( -8.0f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/3

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -8.0f,-9.0f);
                               glVertex2f( -8.0f ,-8.0f);
                                    glVertex2f( -7.0f ,-8.0f);
                             glVertex2f( -7.0f,-9.0f);



                                   glEnd();







                              glBegin(GL_POLYGON); //2/4

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -7.0f,-9.0f);
                               glVertex2f( -7.0f ,-8.0f);
                                    glVertex2f( -6.0f ,-8.0f);
                             glVertex2f( -6.0f,-9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //2/5

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -6.0f,-9.0f);
                               glVertex2f( -6.0f ,-8.0f);
                                    glVertex2f( -5.0f ,-8.0f);
                             glVertex2f( -5.0f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/6

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -5.0f,-9.0f);
                               glVertex2f( -5.0f ,-8.0f);
                                    glVertex2f( -4.0f ,-8.0f);
                             glVertex2f( -4.0f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/7

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -4.0f,-9.0f);
                               glVertex2f( -4.0f ,-8.0f);
                                    glVertex2f( -3.0f ,-8.0f);
                             glVertex2f( -3.0f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/8

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -3.0f,-9.0f);
                               glVertex2f( -3.0f ,-8.0f);
                                    glVertex2f( -2.0f ,-8.0f);
                             glVertex2f( -2.0f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/9

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -2.0f,-9.0f);
                               glVertex2f( -2.0f ,-8.0f);
                                    glVertex2f( -0.4f ,-8.0f);
                             glVertex2f( -0.4f,-9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //2/10

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -0.6f,-9.0f);
                               glVertex2f( -0.6f ,-8.0f);
                                    glVertex2f( -0.0f ,-8.0f);
                             glVertex2f( -0.0f,-9.0f);



                                   glEnd();

/*

                              glBegin(GL_POLYGON); //2/10

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -0.5f,-9.0f);
                               glVertex2f( -0.5f ,-8.0f);
                                    glVertex2f( -0.0f ,-8.0f);
                             glVertex2f( -0.0f,-9.0f);





                                   glEnd();
*/



                                  //row 8 started



 glBegin(GL_POLYGON);//3/1





                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,-8.0f);
                            glVertex2f( -12.0f,-7.0f);
                          glVertex2f( -11.0f,-7.0f);
                          glVertex2f( -11.0f, -8.0f);

                               glEnd();
 glBegin(GL_POLYGON);//3/1





                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -11.0f ,-8.0f);
                            glVertex2f( -11.0f,-7.0f);
                          glVertex2f( -10.0f,-7.0f);
                          glVertex2f( -10.0f,- 8.0f);

                            glEnd();

 glBegin(GL_POLYGON);//3/2





                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -10.0f ,-8.0f);
                            glVertex2f( -10.0f,-7.0f);
                          glVertex2f( -9.0f,-7.0f);
                          glVertex2f( -9.0f, -8.0f);

                               glEnd();









                              glBegin(GL_POLYGON); //3/3

                             glColor3f(0.0f, 0.0f, 0.0f);
                                       glVertex2f( -9.0f, -8.0f);
                            glVertex2f( -9.0f,-7.0f);
                               glVertex2f( -8.0f ,-7.0f);
                               glVertex2f( -8.0f,-8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/4

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -8.0f,-8.0f);
                               glVertex2f( -8.0f ,-7.0f);
                                    glVertex2f( -7.0f ,-7.0f);
                             glVertex2f( -7.0f,-8.0f);



                                   glEnd();







                              glBegin(GL_POLYGON); //3/5

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -7.0f,-8.0f);
                               glVertex2f( -7.0f ,-7.0f);
                                    glVertex2f( -6.0f ,-7.0f);
                             glVertex2f( -6.0f,-8.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/6

                             glColor3f(1.0f,1.0f, 0.0f);
                                     glVertex2f( -6.0f,-8.0f);
                               glVertex2f( -6.0f ,-7.0f);
                                    glVertex2f( -5.0f ,-7.0f);
                             glVertex2f( -5.0f,-8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/7

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -5.0f,-8.0f);
                               glVertex2f( -5.0f ,-7.0f);
                                    glVertex2f( -4.0f ,-7.0f);
                             glVertex2f( -4.0f,-8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/8

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -4.0f,-8.0f);
                               glVertex2f( -4.0f ,-7.0f);
                                    glVertex2f( -3.0f ,-7.0f);
                             glVertex2f( -3.0f,-8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/9

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f( -3.0f,-8.0f);
                               glVertex2f( -3.0f ,-7.0f);
                                    glVertex2f( -2.0f ,-7.0f);
                             glVertex2f( -2.0f,-8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/10

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -2.0f,-8.0f);
                               glVertex2f( -2.0f ,-7.0f);
                                    glVertex2f( -1.0f ,-7.0f);
                             glVertex2f( -1.0f,-8.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/11

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f( -1.0f,-8.0f);
                               glVertex2f( -1.0f ,-7.0f);
                                    glVertex2f( -0.0f ,-7.0f);
                             glVertex2f( -0.0f,-8.0f);




                                   glEnd();


 //row 7 started

                               glBegin(GL_POLYGON);//7/14





                               glBegin(GL_POLYGON);//7/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -13.0f ,-7.0f);
                            glVertex2f( -13.0f,-6.0f);
                          glVertex2f( -12.0f,-6.0f);
                          glVertex2f( -12-.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/12


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -12.0f ,-7.0f);
                            glVertex2f( -12.0f,-6.0f);
                          glVertex2f( -11.0f,-6.0f);
                          glVertex2f( -11.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/11


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -11.0f ,-7.0f);
                            glVertex2f( -11.0f,-6.0f);
                          glVertex2f( -10.0f,-6.0f);
                          glVertex2f( -10.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,-7.0f);
                            glVertex2f( -10.0f,-6.0f);
                          glVertex2f( -9.0f,-6.0f);
                          glVertex2f( -9.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,-7.0f);
                            glVertex2f( -9.0f,-6.0f);
                          glVertex2f( -8.0f,-6.0f);
                          glVertex2f( -8.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,-7.0f);
                            glVertex2f( -8.0f,-6.0f);
                          glVertex2f( -7.0f,-6.0f);
                          glVertex2f( -7.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,-7.0f);
                            glVertex2f( -7.0f,-6.0f);
                          glVertex2f( -6.0f,-6.0f);
                          glVertex2f( -6.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/6


                               glColor3f(1.0f, 1.0f, -0.0f);
                                glVertex2f( -6.0f ,-7.0f);
                            glVertex2f( -6.0f,-6.0f);
                          glVertex2f( -5.0f,-6.0f);
                          glVertex2f( -5.0f, -7.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//4/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -5.0f ,-7.0f);
                            glVertex2f( -5.0f,-6.0f);
                          glVertex2f( -4.0f,-6.0f);
                          glVertex2f( -4.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -4.0f ,-7.0f);
                            glVertex2f( -4.0f,-6.0f);
                          glVertex2f( -3.0f,-6.0f);
                          glVertex2f( -3.0f,-7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/3


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -3.0f ,-7.0f);
                            glVertex2f( -3.0f,-6.0f);
                          glVertex2f( -2.0f,-6.0f);
                          glVertex2f( -2.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,-7.0f);
                            glVertex2f( -2.0f,-6.0f);
                          glVertex2f( -1.0f,-6.0f);
                          glVertex2f( -1.0f, -7.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//4/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,-7.0f);
                            glVertex2f( -1.0f,-6.0f);
                          glVertex2f( -0.0f,-6.0f);
                          glVertex2f( -0.0f, -7.0f);

                               glEnd();






                                      //row 4 ended



//row6 stared

                    glBegin(GL_POLYGON);//6/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -14.0f ,-6.0f);
                            glVertex2f( -14.0f,-5.0f);
                          glVertex2f( -13.0f,-5.0f);
                          glVertex2f( -13.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/13


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -13.0f ,-6.0f);
                            glVertex2f( -13.0f,-5.0f);
                          glVertex2f( -12.0f,-5.0f);
                          glVertex2f( -12-.0f,- 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/12


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -12.0f ,-6.0f);
                            glVertex2f( -12.0f,-5.0f);
                          glVertex2f( -11.0f,-5.0f);
                          glVertex2f( -11.0f,- 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,-6.0f);
                            glVertex2f( -11.0f,-5.0f);
                          glVertex2f( -10.0f,-5.0f);
                          glVertex2f( -10.0f,- 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,-6.0f);
                            glVertex2f( -10.0f,-5.0f);
                          glVertex2f( -9.0f,-5.0f);
                          glVertex2f( -9.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,-6.0f);
                            glVertex2f( -9.0f,-5.0f);
                          glVertex2f( -8.0f,-5.0f);
                          glVertex2f( -8.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,-6.0f);
                            glVertex2f( -8.0f,-5.0f);
                          glVertex2f( -7.0f,-5.0f);
                          glVertex2f( -7.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,-6.0f);
                            glVertex2f( -7.0f,-5.0f);
                          glVertex2f( -6.0f,-5.0f);
                          glVertex2f( -6.0f,- 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -6.0f ,-6.0f);
                            glVertex2f( -6.0f,-5.0f);
                          glVertex2f( -5.0f,-5.0f);
                          glVertex2f( -5.0f, -6.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//6/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -5.0f ,-6.0f);
                            glVertex2f( -5.0f,-5.0f);
                          glVertex2f( -4.0f,-5.0f);
                          glVertex2f( -4.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -4.0f ,-6.0f);
                            glVertex2f( -4.0f,-5.0f);
                          glVertex2f( -3.0f,-5.0f);
                          glVertex2f( -3.0f,- 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/3


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -3.0f ,-6.0f);
                            glVertex2f( -3.0f,-5.0f);
                          glVertex2f( -2.0f,-5.0f);
                          glVertex2f( -2.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,-6.0f);
                            glVertex2f( -2.0f,-5.0f);
                          glVertex2f( -1.0f,-5.0f);
                          glVertex2f( -1.0f, -6.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//6/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,-6.0f);
                            glVertex2f( -1.0f,-5.0f);
                          glVertex2f( -0.0f,-5.0f);
                          glVertex2f( -0.0f, -6.0f);

                               glEnd();






                                                         //row6 ended

 //row5 stared






                               glBegin(GL_POLYGON);//5/15


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -15.0f ,-5.0f);
                            glVertex2f( -15.0f,-4.0f);
                          glVertex2f( -14.0f,-4.0f);
                          glVertex2f( -14.0f,-5.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//5/14


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -14.0f ,-5.0f);
                            glVertex2f( -14.0f,-4.0f);
                          glVertex2f( -13.0f,-4.0f);
                          glVertex2f( -13.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/13


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -13.0f ,-5.0f);
                            glVertex2f( -13.0f,-4.0f);
                          glVertex2f( -12.0f,-4.0f);
                          glVertex2f( -12-.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,-5.0f);
                            glVertex2f( -12.0f,-4.0f);
                          glVertex2f( -11.0f,-4.0f);
                          glVertex2f( -11.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,-5.0f);
                            glVertex2f( -11.0f,-4.0f);
                          glVertex2f( -10.0f,-4.0f);
                          glVertex2f( -10.0f, -5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,-5.0f);
                            glVertex2f( -10.0f,-4.0f);
                          glVertex2f( -9.0f,-4.0f);
                          glVertex2f( -9.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,-5.0f);
                            glVertex2f( -9.0f,-4.0f);
                          glVertex2f( -8.0f,-4.0f);
                          glVertex2f( -8.0f, -5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,-5.0f);
                            glVertex2f( -8.0f,-4.0f);
                          glVertex2f( -7.0f,-4.0f);
                          glVertex2f( -7.0f, -5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,-5.0f);
                            glVertex2f( -7.0f,-4.0f);
                          glVertex2f( -6.0f,-4.0f);
                          glVertex2f( -6.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -6.0f ,-5.0f);
                            glVertex2f( -6.0f,-4.0f);
                          glVertex2f( -5.0f,-4.0f);
                          glVertex2f( -5.0f,- 5.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//7/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -5.0f ,-5.0f);
                            glVertex2f( -5.0f,-4.0f);
                          glVertex2f( -4.0f,-4.0f);
                          glVertex2f( -4.0f, -5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -4.0f ,-5.0f);
                            glVertex2f( -4.0f,-4.0f);
                          glVertex2f( -3.0f,-4.0f);
                          glVertex2f( -3.0f, -5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,-5.0f);
                            glVertex2f( -3.0f,-4.0f);
                          glVertex2f( -2.0f,-4.0f);
                          glVertex2f( -2.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,-5.0f);
                            glVertex2f( -2.0f,-4.0f);
                          glVertex2f( -1.0f,-4.0f);
                          glVertex2f( -1.0f,- 5.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//7/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,-5.0f);
                            glVertex2f( -1.0f,-4.0f);
                          glVertex2f( -0.0f,-4.0f);
                          glVertex2f( -0.0f,- 5.0f);

                               glEnd();


//row5 ended


//row 4started


                               glBegin(GL_POLYGON);//4/16


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -16.0f ,-4.0f);
                            glVertex2f( -16.0f,-3.0f);
                          glVertex2f( -15.0f,-3.0f);
                          glVertex2f( -15.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/15


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -15.0f ,-4.0f);
                            glVertex2f( -15.0f,-3.0f);
                          glVertex2f( -14.0f,-3.0f);
                          glVertex2f( -14.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/14


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -14.0f ,-4.0f);
                            glVertex2f( -14.0f,-3.0f);
                          glVertex2f( -13.0f,-3.0f);
                          glVertex2f( -13.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/13

                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -13.0f ,-4.0f);
                            glVertex2f( -13.0f,-3.0f);
                          glVertex2f( -12.0f,-3.0f);
                          glVertex2f( -12-.0f,- 4.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//4/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,-4.0f);
                            glVertex2f( -12.0f,-3.0f);
                          glVertex2f( -11.0f,-3.0f);
                          glVertex2f( -11.0f,- 4.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//4/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,-4.0f);
                            glVertex2f( -11.0f,-3.0f);
                          glVertex2f( -10.0f,-3.0f);
                          glVertex2f( -10.0f,- 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,-4.0f);
                            glVertex2f( -10.0f,-3.0f);
                          glVertex2f( -9.0f,-3.0f);
                          glVertex2f( -9.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,-4.0f);
                            glVertex2f( -9.0f,-3.0f);
                          glVertex2f( -8.0f,-3.0f);
                          glVertex2f( -8.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,-4.0f);
                            glVertex2f( -8.0f,-3.0f);
                          glVertex2f( -7.0f,-3.0f);
                          glVertex2f( -7.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,-4.0f);
                            glVertex2f( -7.0f,-3.0f);
                          glVertex2f( -6.0f,-3.0f);
                          glVertex2f( -6.0f,- 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -6.0f ,-4.0f);
                            glVertex2f( -6.0f,-3.0f);
                          glVertex2f( -5.0f,-3.0f);
                          glVertex2f( -5.0f,- 4.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//8/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -5.0f ,-4.0f);
                            glVertex2f( -5.0f,-3.0f);
                          glVertex2f( -4.0f,-3.0f);
                          glVertex2f( -4.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -4.0f ,-4.0f);
                            glVertex2f( -4.0f,-3.0f);
                          glVertex2f( -3.0f,-3.0f);
                          glVertex2f( -3.0f,- 4.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//8/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,-4.0f);
                            glVertex2f( -3.0f,-3.0f);
                          glVertex2f( -2.0f,-3.0f);
                          glVertex2f( -2.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,-4.0f);
                            glVertex2f( -2.0f,-3.0f);
                          glVertex2f( -1.0f,-3.0f);
                          glVertex2f( -1.0f, -4.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//8/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,-4.0f);
                            glVertex2f( -1.0f,-3.0f);
                          glVertex2f( -0.0f,-3.0f);
                          glVertex2f( -0.0f, -4.0f);

                               glEnd();




                                   //row 4ened

//row 3 start








                               glBegin(GL_POLYGON);//3/16


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -16.0f ,-3.0f);
                            glVertex2f( -16.0f,-2.0f);
                          glVertex2f( -15.0f,-2.0f);
                          glVertex2f( -15.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/15


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -15.0f ,-3.0f);
                            glVertex2f( -15.0f,-2.0f);
                          glVertex2f( -14.0f,-2.0f);
                          glVertex2f( -14.0f,-3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -14.0f ,-3.0f);
                            glVertex2f( -14.0f,-2.0f);
                          glVertex2f( -13.0f,-2.0f);
                          glVertex2f( -13.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -13.0f ,-3.0f);
                            glVertex2f( -13.0f,-2.0f);
                          glVertex2f( -12.0f,-2.0f);
                          glVertex2f( -12-.0f,- 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,-3.0f);
                            glVertex2f( -12.0f,-2.0f);
                          glVertex2f( -11.0f,-2.0f);
                          glVertex2f( -11.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,-3.0f);
                            glVertex2f( -11.0f,-2.0f);
                          glVertex2f( -10.0f,-2.0f);
                          glVertex2f( -10.0f,- 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,-3.0f);
                            glVertex2f( -10.0f,-2.0f);
                          glVertex2f( -9.0f,-2.0f);
                          glVertex2f( -9.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,-3.0f);
                            glVertex2f( -9.0f,-2.0f);
                          glVertex2f( -8.0f,-2.0f);
                          glVertex2f( -8.0f,- 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,-3.0f);
                            glVertex2f( -8.0f,-2.0f);
                          glVertex2f( -7.0f,-2.0f);
                          glVertex2f( -7.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,-3.0f);
                            glVertex2f( -7.0f,-2.0f);
                          glVertex2f( -6.0f,-2.0f);
                          glVertex2f( -6.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -6.0f ,-3.0f);
                            glVertex2f( -6.0f,-2.0f);
                          glVertex2f( -5.0f,-2.0f);
                          glVertex2f( -5.0f,- 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -5.0f ,-3.0f);
                            glVertex2f( -5.0f,-2.0f);
                          glVertex2f( -4.0f,-2.0f);
                          glVertex2f( -4.0f,- 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -4.0f ,-3.0f);
                            glVertex2f( -4.0f,-2.0f);
                          glVertex2f( -3.0f,-2.0f);
                          glVertex2f( -3.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,-3.0f);
                            glVertex2f( -3.0f,-2.0f);
                          glVertex2f( -2.0f,-2.0f);
                          glVertex2f( -2.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,-3.0f);
                            glVertex2f( -2.0f,-2.0f);
                          glVertex2f( -1.0f,-2.0f);
                          glVertex2f( -1.0f,- 3.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//3/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,-3.0f);
                            glVertex2f( -1.0f,-2.0f);
                          glVertex2f( -0.0f,-2.0f);
                          glVertex2f( -0.0f, -3.0f);

                               glEnd();


//row 3 end

//roe 2 dstsrtfd
                     glBegin(GL_POLYGON);//2/17


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -16.0f ,-2.0f);
                            glVertex2f( -16.0f,-1.0f);
                          glVertex2f( -15.0f,-1.0f);
                          glVertex2f( -15.0f,- 2.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//11/16


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -15.0f ,-2.0f);
                            glVertex2f( -15.0f,-1.0f);
                          glVertex2f( -14.0f,-1.0f);
                          glVertex2f( -14.0f,- 2.0f);

                               glEnd();




                     glBegin(GL_POLYGON);//2/15


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -14.0f ,-2.0f);
                            glVertex2f( -14.0f,-1.0f);
                          glVertex2f( -13.0f,-1.0f);
                          glVertex2f( -13.0f, -2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -13.0f ,-2.0f);
                            glVertex2f( -13.0f,-1.0f);
                          glVertex2f( -12.0f,-1.0f);
                          glVertex2f( -12.0f,-2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/13


                               glColor3f(0.0f, 0.0f,- 0.0f);
                                glVertex2f( -12.0f ,-2.0f);
                            glVertex2f( -12.0f,-1.0f);
                          glVertex2f( -11.0f,-1.0f);
                          glVertex2f( -11.0f,- 2.0f);

                               glEnd();

                     glBegin(GL_POLYGON);//2/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,-2.0f);
                            glVertex2f( -11.0f,-1.0f);
                          glVertex2f( -10.0f,-1.0f);
                          glVertex2f( -10.0f, -2.0f);

                               glEnd();




                     glBegin(GL_POLYGON);//11/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,-2.0f);
                            glVertex2f( -10.0f,-1.0f);
                          glVertex2f( -9.0f,-1.0f);
                          glVertex2f( -9.0f,- 2.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//11/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,-2.0f);
                            glVertex2f( -9.0f,-1.0f);
                          glVertex2f( -8.0f,-1.0f);
                          glVertex2f( -8.0f,- 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,-2.0f);
                            glVertex2f( -8.0f,-1.0f);
                          glVertex2f( -7.0f,-1.0f);
                          glVertex2f( -7.0f,- 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,-2.0f);
                            glVertex2f( -7.0f,-1.0f);
                          glVertex2f( -6.0f,-1.0f);
                          glVertex2f( -6.0f, -2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -6.0f ,-2.0f);
                            glVertex2f( -6.0f,-1.0f);
                          glVertex2f( -5.0f,-1.0f);
                          glVertex2f( -5.0f,- 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -5.0f ,-2.0f);
                            glVertex2f( -5.0f,-1.0f);
                          glVertex2f( -4.0f,-1.0f);
                          glVertex2f( -4.0f,-2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -4.0f ,-2.0f);
                            glVertex2f( -4.0f,-1.0f);
                          glVertex2f( -3.0f,-1.0f);
                          glVertex2f( -3.0f,- 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,-2.0f);
                            glVertex2f( -3.0f,-1.0f);
                          glVertex2f( -2.0f,-1.0f);
                          glVertex2f( -2.0f,- 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,-2.0f);
                            glVertex2f( -2.0f,-1.0f);
                          glVertex2f( -1.0f,-1.0f);
                          glVertex2f( -1.0f, -2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,-2.0f);
                            glVertex2f( -1.0f,-1.0f);
                          glVertex2f( -0.0f,-1.0f);
                          glVertex2f( -0.0f,- 2.0f);

                               glEnd();







//start row 1




                     glBegin(GL_POLYGON);//1/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -16.0f ,-1.0f);
                            glVertex2f( -16.0f,-0.0f);
                          glVertex2f( -15.0f,-0.0f);
                          glVertex2f( -15.0f, -1.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//1/2


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f( -15.0f ,-1.0f);
                            glVertex2f( -15.0f,-0.0f);
                          glVertex2f( -14.0f,-0.0f);
                          glVertex2f( -14.0f, -1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//1/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -14.0f ,-1.0f);
                            glVertex2f( -14.0f,-0.0f);
                          glVertex2f( -13.0f,-0.0f);
                          glVertex2f( -13.0f,- 1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//1/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -13.0f ,-1.0f);
                            glVertex2f( -13.0f,-0.0f);
                          glVertex2f( -12.0f,-0.0f);
                          glVertex2f( -12.0f, -1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -12.0f ,-1.0f);
                            glVertex2f( -12.0f,-0.0f);
                          glVertex2f( -11.0f,-0.0f);
                          glVertex2f( -11.0f,- 1.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//11/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -11.0f ,-1.0f);
                            glVertex2f( -11.0f,-0.0f);
                          glVertex2f( -10.0f,-0.0f);
                          glVertex2f( -10.0f, -1.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -10.0f ,-1.0f);
                            glVertex2f( -10.0f,-0.0f);
                          glVertex2f( -9.0f,-0.0f);
                          glVertex2f( -9.0f,-1.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//11/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -9.0f ,-1.0f);
                            glVertex2f( -9.0f,-0.0f);
                          glVertex2f( -8.0f,-0.0f);
                          glVertex2f( -8.0f,- 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -8.0f ,-1.0f);
                            glVertex2f( -8.0f,-0.0f);
                          glVertex2f( -7.0f,-0.0f);
                          glVertex2f( -7.0f,- 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -7.0f ,-1.0f);
                            glVertex2f( -7.0f,-0.0f);
                          glVertex2f( -6.0f,-0.0f);
                          glVertex2f( -6.0f,- 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -6.0f ,-1.0f);
                            glVertex2f( -6.0f,-0.0f);
                          glVertex2f( -5.0f,-0.0f);
                          glVertex2f( -5.0f, -1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -5.0f ,-1.0f);
                            glVertex2f( -5.0f,-0.0f);
                          glVertex2f( -4.0f,-0.0f);
                          glVertex2f( -4.0f,- 1.0f);

                               glEnd();

glBegin(GL_POLYGON);//11/13



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -4.0f ,-1.0f);
                            glVertex2f( -4.0f,-0.0f);
                          glVertex2f( -3.0f,-0.0f);
                          glVertex2f( -3.0f, -1.0f);

                               glEnd();

                                glBegin(GL_POLYGON);//11/14



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -3.0f ,-1.0f);
                            glVertex2f( -3.0f,-0.0f);
                          glVertex2f( -2.0f,-0.0f);
                          glVertex2f( -2.0f, -1.0f);

                               glEnd();

                                glBegin(GL_POLYGON);//11/15



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -2.0f ,-1.0f);
                            glVertex2f( -2.0f,-0.0f);
                          glVertex2f( -1.0f,-0.0f);
                          glVertex2f( -1.0f,- 1.0f);

                               glEnd();


                                glBegin(GL_POLYGON);//11/16



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f( -1.0f ,-1.0f);
                            glVertex2f( -1.0f,-0.0f);
                          glVertex2f( -0.0f,-0.0f);
                          glVertex2f( -0.0f, -1.0f);

                               glEnd();






//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++bottom right


//extra -----------------------


	 glBegin(GL_POLYGON); //1/2

                glColor3f(0.0f, 0.0f, 0.0f);





                 glVertex2f(+9.0f,-11.0f);
              glVertex2f(  +9.0,-10.0f);
  glVertex2f(  +8.0f ,-10.0f);

             glVertex2f( +8.0f ,-11.0f);

	                     glEnd();



	         glBegin(GL_POLYGON); //1/2

                glColor3f(0.0f, 0.0f, 0.0f);





                 glVertex2f(+8.0f,-11.0f);
              glVertex2f(  +8.0,-10.0f);
  glVertex2f(  +7.0f ,-10.0f);

             glVertex2f(  +7.0f ,-11.0f);

	                     glEnd();


	         	glBegin(GL_POLYGON); //1/3


                       glColor3f(0.0f, 0.0f, 0.0f);


                        glVertex2f(  +7.0f ,-10.0f);
                        glVertex2f(  +7.0f ,-11.0f);

                        glVertex2f(    +6.0f,  -11.0f);
                        glVertex2f(   +6.0f,  - 10.0f);

                 glEnd();


	glBegin(GL_POLYGON); //1/4

glColor3f(0.0f, 0.0f, 0.0f);
                             glVertex2f(   +6.0f,   -10.0f);

                        glVertex2f(    +6.0f,  -11.0f);

                         glVertex2f(    +5.0f, -  11.0f);
                        glVertex2f(  +5.0f,  - 10.0f);




                              glEnd();


	               glBegin(GL_POLYGON); //1/5

	                glColor3f(0.0f, 0.0f, 0.0f);

                    glVertex2f(    +5.0f,  - 10.0f);
                    glVertex2f(   +5.0f, -  11.0f);
                    glVertex2f(  +4.0f, - 11.0f);
                    glVertex2f(   +4.0f, -  10.0f);

                                        glEnd();




		glBegin(GL_POLYGON); //1/6

                    glColor3f(0.0f, 0.0f, 0.0f);
                    glVertex2f(  +4.0f, - 10.0f);
                    glVertex2f(   +4.0f,  - 11.0f);
                     glVertex2f(    +3.0f,  - 11.0f);
                    glVertex2f(   +3.0f,  - 10.0f);

                           glEnd();



		glBegin(GL_POLYGON); //1/7

                     glColor3f(0.0f, 0.0f, 0.0f);
                     glVertex2f(    +3.0f, -  10.0f);
                    glVertex2f(   +3.0f, -  11.0f);

                    glVertex2f(   +2.0f, -  11.0f);
                    glVertex2f(    +2.0,- 10.0f);

                      glEnd();

            glBegin(GL_POLYGON); //1/9

                                     glColor3f(0.0f, 0.0f, 0.0f);
                    glVertex2f(   +2.0f,  - 10.0f);
                    glVertex2f(    +2.0,- 11.0f);
                   glVertex2f(   +1.0f,  - 11.0f);

                     glVertex2f(+1.0f,-10.0f);

                                   glEnd();



            glBegin(GL_POLYGON); //1/10

                                     glColor3f(.0f, 0.0f, 0.0f);
                    glVertex2f(   +1.0f,  - 10.0f);
                    glVertex2f(    +1.0f,- 11.0f);
                   glVertex2f(  + 0.0f, -  11.0f);

                     glVertex2f( +0.0f,- 10.0f);

                                   glEnd();







	//-------------------------------------------------------------

	              glBegin(GL_POLYGON);   //1/111



                              glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(  +10.0f ,-10.0f);
                        glVertex2f(  +10.0f, -9.0f);

     glVertex2f(+9.0f,-9.0f);
                            glVertex2f(  +9.0,-10.0f);


                                  glEnd();




                          glBegin(GL_POLYGON);   //1/1



                              glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(  +9.0f ,-10.0f);
                        glVertex2f(  +9.0f, -9.0f);

     glVertex2f(+8.0f,-9.0f);
                            glVertex2f(  +8.0,-10.0f);


                                  glEnd();


	         glBegin(GL_POLYGON); //1/2

                glColor3f(1.0f, 1.0f, 0.0f);

              glVertex2f(  +8.0,-9.0f);
              glVertex2f(+8.0f,-10.0f);
             glVertex2f(  +7.0f ,-10.0f);
             glVertex2f(  +7.0f ,-9.0f);

	                     glEnd();


	         	glBegin(GL_POLYGON); //1/3


                       glColor3f(1.0f, 1.0f, 0.0f);
                        glVertex2f(  +7.0f ,-9.0f);
                        glVertex2f(  +7.0f ,-10.0f);

                        glVertex2f(    +6.0f, - 10.0f);
                        glVertex2f(   +6.0f,  - 9.0f);

                 glEnd();


	glBegin(GL_POLYGON); //1/4

glColor3f(1.0f, 1.0f, 0.0f);
                             glVertex2f(   +6.0f, -  9.0f);

                        glVertex2f(+6.0f, - 10.0f);

                         glVertex2f(+5.0f, -  10.0f);
                        glVertex2f(   +5.0f, -  9.0f);




                              glEnd();


	               glBegin(GL_POLYGON); //1/5

	                glColor3f(1.0f, 1.0f, 0.0f);

                    glVertex2f(+5.0f,  - 9.0f);
                    glVertex2f(+5.0f,-   10.0f);
                    glVertex2f(+4.0f,  -10.0f);
                    glVertex2f(+4.0f, -  9.0f);

                                        glEnd();




		glBegin(GL_POLYGON); //1/6

                    glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(+4.0f, - 9.0f);
                    glVertex2f(+4.0f,  - 10.0f);
                     glVertex2f(+3.0f, -  10.0f);
                    glVertex2f(   +3.0f,  - 9.0f);

                           glEnd();



		glBegin(GL_POLYGON); //1/7

                     glColor3f(1.0f, 1.0f, 0.0f);
                     glVertex2f(+3.0f,-   9.0f);
                    glVertex2f(+3.0f, -  10.0f);

                    glVertex2f(+2.0f,  - 10.0f);
                    glVertex2f(+2.0,- 9.0f);

                      glEnd();

            glBegin(GL_POLYGON); //1/9

                                     glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(   +2.0f,  - 9.0f);
                    glVertex2f(+2.0,- 10.0f);
                   glVertex2f( +1.0f,  - 10.0f);

                     glVertex2f(+1.0f,- 9.0f);

                                   glEnd();



            glBegin(GL_POLYGON); //1/10

                                     glColor3f(1.0f, 1.0f, 0.0f);
                    glVertex2f(   +1.0f,  - 9.0f);
                    glVertex2f(+1.0,- 10.0f);
                   glVertex2f(   +0.0f,  - 10.0f);

                     glVertex2f( +0.0f, -9.0f);

                                   glEnd();


//new row 9


                     glBegin(GL_POLYGON); //9/1

                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+11.0f ,-9.0f);
                            glVertex2f(+11.0f,-8.0f);
                          glVertex2f(+10.0f,-8.0f);
                          glVertex2f(+10.0f, -9.0f);

                               glEnd();


	                        glBegin(GL_POLYGON); //9/1

                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+10.0f ,-9.0f);
                            glVertex2f(+10.0f,-8.0f);
                          glVertex2f(+9.0f,-8.0f);
                          glVertex2f(+9.0f, -9.0f);

                               glEnd();









                              glBegin(GL_POLYGON); //2/2

                             glColor3f(1.0f, 1.0f, 0.0f);
                                       glVertex2f(+9.0f,- 9.0f);
                            glVertex2f(+9.0f,-8.0f);
                               glVertex2f(+8.0f ,-8.0f);
                               glVertex2f(+8.0f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/3

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f(+8.0f,-9.0f);
                               glVertex2f(+8.0f ,-8.0f);
                                    glVertex2f(+7.0f ,-8.0f);
                             glVertex2f(+7.0f,-9.0f);



                                   glEnd();







                              glBegin(GL_POLYGON); //2/4

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f(+7.0f,-9.0f);
                               glVertex2f(+7.0f ,-8.0f);
                                    glVertex2f(+6.0f ,-8.0f);
                             glVertex2f(+6.0f,-9.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //2/5

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f(+6.0f,-9.0f);
                               glVertex2f(+6.0f ,-8.0f);
                                    glVertex2f(+5.0f ,-8.0f);
                             glVertex2f(+5.0f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/6

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f(+5.0f,-9.0f);
                               glVertex2f(+5.0f ,-8.0f);
                                    glVertex2f(+4.0f ,-8.0f);
                             glVertex2f(+4.0f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/7

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f(+4.0f,-9.0f);
                               glVertex2f(+4.0f ,-8.0f);
                                    glVertex2f(+3.0f ,-8.0f);
                             glVertex2f(+3.0f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/8

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f(+3.0f,-9.0f);
                               glVertex2f(+3.0f ,-8.0f);
                                    glVertex2f(+2.0f ,-8.0f);
                             glVertex2f(+2.0f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/9

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f(+2.0f,-9.0f);
                               glVertex2f(+2.0f ,-8.0f);
                                    glVertex2f(+0.4f ,-8.0f);
                             glVertex2f(+0.4f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/10

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f(+0.6f,-9.0f);
                               glVertex2f(+0.6f ,-8.0f);
                                    glVertex2f(+0.0f ,-8.0f);
                             glVertex2f(+0.0f,-9.0f);



                                   glEnd();



                    /*          glBegin(GL_POLYGON); //2/10

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f(+1.0f,-9.0f);
                               glVertex2f(+1.0f ,-8.0f);
                                    glVertex2f(+0.5f ,-8.0f);
                             glVertex2f(+0.5f,-9.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //2/10

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f(+0.5f,-9.0f);
                               glVertex2f(+0.5f ,-8.0f);
                                    glVertex2f(+0.0f ,-8.0f);
                             glVertex2f(+0.0f,-9.0f);



                                   glEnd();

*/


                                  //row 8 started



 glBegin(GL_POLYGON);//3/1





                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+12.0f ,-8.0f);
                            glVertex2f(+12.0f,-7.0f);
                          glVertex2f(+11.0f,-7.0f);
                          glVertex2f(+11.0f, -8.0f);

                               glEnd();
 glBegin(GL_POLYGON);//3/1





                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+11.0f ,-8.0f);
                            glVertex2f(+11.0f,-7.0f);
                          glVertex2f(+10.0f,-7.0f);
                          glVertex2f(+10.0f,- 8.0f);

                            glEnd();

 glBegin(GL_POLYGON);//3/2





                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+10.0f ,-8.0f);
                            glVertex2f(+10.0f,-7.0f);
                          glVertex2f(+9.0f,-7.0f);
                          glVertex2f(+9.0f, -8.0f);

                               glEnd();









                              glBegin(GL_POLYGON); //3/3

                             glColor3f(0.0f, 0.0f, 0.0f);
                                       glVertex2f(+9.0f, -8.0f);
                            glVertex2f(+9.0f,-7.0f);
                               glVertex2f(+8.0f ,-7.0f);
                               glVertex2f(+8.0f,-8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/4

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f(+8.0f,-8.0f);
                               glVertex2f(+8.0f ,-7.0f);
                                    glVertex2f(+7.0f ,-7.0f);
                             glVertex2f(+7.0f,-8.0f);



                                   glEnd();







                              glBegin(GL_POLYGON); //3/5

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f(+7.0f,-8.0f);
                               glVertex2f(+7.0f ,-7.0f);
                                    glVertex2f(+6.0f ,-7.0f);
                             glVertex2f(+6.0f,-8.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/6

                             glColor3f(1.0f,1.0f, 0.0f);
                                     glVertex2f(+6.0f,-8.0f);
                               glVertex2f(+6.0f ,-7.0f);
                                    glVertex2f(+5.0f ,-7.0f);
                             glVertex2f(+5.0f,-8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/7

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f(+5.0f,-8.0f);
                               glVertex2f(+5.0f ,-7.0f);
                                    glVertex2f(+4.0f ,-7.0f);
                             glVertex2f(+4.0f,-8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/8

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f(+4.0f,-8.0f);
                               glVertex2f(+4.0f ,-7.0f);
                                    glVertex2f(+3.0f ,-7.0f);
                             glVertex2f(+3.0f,-8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/9

                             glColor3f(1.0f, 1.0f, 0.0f);
                                     glVertex2f(+3.0f,-8.0f);
                               glVertex2f(+3.0f ,-7.0f);
                                    glVertex2f(+2.0f ,-7.0f);
                             glVertex2f(+2.0f,-8.0f);



                                   glEnd();



                              glBegin(GL_POLYGON); //3/10

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f(+2.0f,-8.0f);
                               glVertex2f(+2.0f ,-7.0f);
                                    glVertex2f(+1.0f ,-7.0f);
                             glVertex2f(+1.0f,-8.0f);



                                   glEnd();


                              glBegin(GL_POLYGON); //3/11

                             glColor3f(0.0f, 0.0f, 0.0f);
                                     glVertex2f(+1.0f,-8.0f);
                               glVertex2f(+1.0f ,-7.0f);
                                    glVertex2f(+0.0f ,-7.0f);
                             glVertex2f(+0.0f,-8.0f);




                                   glEnd();


 //row 7 started

                               glBegin(GL_POLYGON);//7/14





                               glBegin(GL_POLYGON);//7/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+13.0f ,-7.0f);
                            glVertex2f(+13.0f,-6.0f);
                          glVertex2f(+12.0f,-6.0f);
                          glVertex2f(+12-.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/12


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+12.0f ,-7.0f);
                            glVertex2f(+12.0f,-6.0f);
                          glVertex2f(+11.0f,-6.0f);
                          glVertex2f(+11.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/11


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+11.0f ,-7.0f);
                            glVertex2f(+11.0f,-6.0f);
                          glVertex2f(+10.0f,-6.0f);
                          glVertex2f(+10.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+10.0f ,-7.0f);
                            glVertex2f(+10.0f,-6.0f);
                          glVertex2f(+9.0f,-6.0f);
                          glVertex2f(+9.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+9.0f ,-7.0f);
                            glVertex2f(+9.0f,-6.0f);
                          glVertex2f(+8.0f,-6.0f);
                          glVertex2f(+8.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+8.0f ,-7.0f);
                            glVertex2f(+8.0f,-6.0f);
                          glVertex2f(+7.0f,-6.0f);
                          glVertex2f(+7.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+7.0f ,-7.0f);
                            glVertex2f(+7.0f,-6.0f);
                          glVertex2f(+6.0f,-6.0f);
                          glVertex2f(+6.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/6


                               glColor3f(1.0f, 1.0f, -0.0f);
                                glVertex2f(+6.0f ,-7.0f);
                            glVertex2f(+6.0f,-6.0f);
                          glVertex2f(+5.0f,-6.0f);
                          glVertex2f(+5.0f, -7.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//4/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+5.0f ,-7.0f);
                            glVertex2f(+5.0f,-6.0f);
                          glVertex2f(+4.0f,-6.0f);
                          glVertex2f(+4.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+4.0f ,-7.0f);
                            glVertex2f(+4.0f,-6.0f);
                          glVertex2f(+3.0f,-6.0f);
                          glVertex2f(+3.0f,-7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/3


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+3.0f ,-7.0f);
                            glVertex2f(+3.0f,-6.0f);
                          glVertex2f(+2.0f,-6.0f);
                          glVertex2f(+2.0f, -7.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+2.0f ,-7.0f);
                            glVertex2f(+2.0f,-6.0f);
                          glVertex2f(+1.0f,-6.0f);
                          glVertex2f(+1.0f, -7.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//4/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+1.0f ,-7.0f);
                            glVertex2f(+1.0f,-6.0f);
                          glVertex2f(+0.0f,-6.0f);
                          glVertex2f(+0.0f, -7.0f);

                               glEnd();






                                      //row 4 ended



//row6 stared

                    glBegin(GL_POLYGON);//6/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+14.0f ,-6.0f);
                            glVertex2f(+14.0f,-5.0f);
                          glVertex2f(+13.0f,-5.0f);
                          glVertex2f(+13.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/13


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+13.0f ,-6.0f);
                            glVertex2f(+13.0f,-5.0f);
                          glVertex2f(+12.0f,-5.0f);
                          glVertex2f(+12-.0f,- 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/12


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+12.0f ,-6.0f);
                            glVertex2f(+12.0f,-5.0f);
                          glVertex2f(+11.0f,-5.0f);
                          glVertex2f(+11.0f,- 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+11.0f ,-6.0f);
                            glVertex2f(+11.0f,-5.0f);
                          glVertex2f(+10.0f,-5.0f);
                          glVertex2f(+10.0f,- 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+10.0f ,-6.0f);
                            glVertex2f(+10.0f,-5.0f);
                          glVertex2f(+9.0f,-5.0f);
                          glVertex2f(+9.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+9.0f ,-6.0f);
                            glVertex2f(+9.0f,-5.0f);
                          glVertex2f(+8.0f,-5.0f);
                          glVertex2f(+8.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+8.0f ,-6.0f);
                            glVertex2f(+8.0f,-5.0f);
                          glVertex2f(+7.0f,-5.0f);
                          glVertex2f(+7.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+7.0f ,-6.0f);
                            glVertex2f(+7.0f,-5.0f);
                          glVertex2f(+6.0f,-5.0f);
                          glVertex2f(+6.0f,- 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+6.0f ,-6.0f);
                            glVertex2f(+6.0f,-5.0f);
                          glVertex2f(+5.0f,-5.0f);
                          glVertex2f(+5.0f, -6.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//6/5


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+5.0f ,-6.0f);
                            glVertex2f(+5.0f,-5.0f);
                          glVertex2f(+4.0f,-5.0f);
                          glVertex2f(+4.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+4.0f ,-6.0f);
                            glVertex2f(+4.0f,-5.0f);
                          glVertex2f(+3.0f,-5.0f);
                          glVertex2f(+3.0f,- 6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/3


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+3.0f ,-6.0f);
                            glVertex2f(+3.0f,-5.0f);
                          glVertex2f(+2.0f,-5.0f);
                          glVertex2f(+2.0f, -6.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//6/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+2.0f ,-6.0f);
                            glVertex2f(+2.0f,-5.0f);
                          glVertex2f(+1.0f,-5.0f);
                          glVertex2f(+1.0f, -6.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//6/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+1.0f ,-6.0f);
                            glVertex2f(+1.0f,-5.0f);
                          glVertex2f(+0.0f,-5.0f);
                          glVertex2f(+0.0f, -6.0f);

                               glEnd();






                                                         //row6 ended

 //row5 stared






                               glBegin(GL_POLYGON);//5/15


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+15.0f ,-5.0f);
                            glVertex2f(+15.0f,-4.0f);
                          glVertex2f(+14.0f,-4.0f);
                          glVertex2f(+14.0f,-5.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//5/14


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+14.0f ,-5.0f);
                            glVertex2f(+14.0f,-4.0f);
                          glVertex2f(+13.0f,-4.0f);
                          glVertex2f(+13.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/13


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+13.0f ,-5.0f);
                            glVertex2f(+13.0f,-4.0f);
                          glVertex2f(+12.0f,-4.0f);
                          glVertex2f(+12-.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+12.0f ,-5.0f);
                            glVertex2f(+12.0f,-4.0f);
                          glVertex2f(+11.0f,-4.0f);
                          glVertex2f(+11.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+11.0f ,-5.0f);
                            glVertex2f(+11.0f,-4.0f);
                          glVertex2f(+10.0f,-4.0f);
                          glVertex2f(+10.0f, -5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+10.0f ,-5.0f);
                            glVertex2f(+10.0f,-4.0f);
                          glVertex2f(+9.0f,-4.0f);
                          glVertex2f(+9.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//5/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+9.0f ,-5.0f);
                            glVertex2f(+9.0f,-4.0f);
                          glVertex2f(+8.0f,-4.0f);
                          glVertex2f(+8.0f, -5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+8.0f ,-5.0f);
                            glVertex2f(+8.0f,-4.0f);
                          glVertex2f(+7.0f,-4.0f);
                          glVertex2f(+7.0f, -5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+7.0f ,-5.0f);
                            glVertex2f(+7.0f,-4.0f);
                          glVertex2f(+6.0f,-4.0f);
                          glVertex2f(+6.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+6.0f ,-5.0f);
                            glVertex2f(+6.0f,-4.0f);
                          glVertex2f(+5.0f,-4.0f);
                          glVertex2f(+5.0f,- 5.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//7/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+5.0f ,-5.0f);
                            glVertex2f(+5.0f,-4.0f);
                          glVertex2f(+4.0f,-4.0f);
                          glVertex2f(+4.0f, -5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/4


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+4.0f ,-5.0f);
                            glVertex2f(+4.0f,-4.0f);
                          glVertex2f(+3.0f,-4.0f);
                          glVertex2f(+3.0f, -5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+3.0f ,-5.0f);
                            glVertex2f(+3.0f,-4.0f);
                          glVertex2f(+2.0f,-4.0f);
                          glVertex2f(+2.0f,- 5.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//7/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+2.0f ,-5.0f);
                            glVertex2f(+2.0f,-4.0f);
                          glVertex2f(+1.0f,-4.0f);
                          glVertex2f(+1.0f,- 5.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//7/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+1.0f ,-5.0f);
                            glVertex2f(+1.0f,-4.0f);
                          glVertex2f(+0.0f,-4.0f);
                          glVertex2f(+0.0f,- 5.0f);

                               glEnd();


//row5 ended


//row 4started


                               glBegin(GL_POLYGON);//4/16


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+16.0f ,-4.0f);
                            glVertex2f(+16.0f,-3.0f);
                          glVertex2f(+15.0f,-3.0f);
                          glVertex2f(+15.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/15


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+15.0f ,-4.0f);
                            glVertex2f(+15.0f,-3.0f);
                          glVertex2f(+14.0f,-3.0f);
                          glVertex2f(+14.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/14


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+14.0f ,-4.0f);
                            glVertex2f(+14.0f,-3.0f);
                          glVertex2f(+13.0f,-3.0f);
                          glVertex2f(+13.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/13

                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+13.0f ,-4.0f);
                            glVertex2f(+13.0f,-3.0f);
                          glVertex2f(+12.0f,-3.0f);
                          glVertex2f(+12-.0f,- 4.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//4/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+12.0f ,-4.0f);
                            glVertex2f(+12.0f,-3.0f);
                          glVertex2f(+11.0f,-3.0f);
                          glVertex2f(+11.0f,- 4.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//4/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+11.0f ,-4.0f);
                            glVertex2f(+11.0f,-3.0f);
                          glVertex2f(+10.0f,-3.0f);
                          glVertex2f(+10.0f,- 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+10.0f ,-4.0f);
                            glVertex2f(+10.0f,-3.0f);
                          glVertex2f(+9.0f,-3.0f);
                          glVertex2f(+9.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//4/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+9.0f ,-4.0f);
                            glVertex2f(+9.0f,-3.0f);
                          glVertex2f(+8.0f,-3.0f);
                          glVertex2f(+8.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+8.0f ,-4.0f);
                            glVertex2f(+8.0f,-3.0f);
                          glVertex2f(+7.0f,-3.0f);
                          glVertex2f(+7.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+7.0f ,-4.0f);
                            glVertex2f(+7.0f,-3.0f);
                          glVertex2f(+6.0f,-3.0f);
                          glVertex2f(+6.0f,- 4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+6.0f ,-4.0f);
                            glVertex2f(+6.0f,-3.0f);
                          glVertex2f(+5.0f,-3.0f);
                          glVertex2f(+5.0f,- 4.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//8/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+5.0f ,-4.0f);
                            glVertex2f(+5.0f,-3.0f);
                          glVertex2f(+4.0f,-3.0f);
                          glVertex2f(+4.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+4.0f ,-4.0f);
                            glVertex2f(+4.0f,-3.0f);
                          glVertex2f(+3.0f,-3.0f);
                          glVertex2f(+3.0f,- 4.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//8/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+3.0f ,-4.0f);
                            glVertex2f(+3.0f,-3.0f);
                          glVertex2f(+2.0f,-3.0f);
                          glVertex2f(+2.0f, -4.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//8/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+2.0f ,-4.0f);
                            glVertex2f(+2.0f,-3.0f);
                          glVertex2f(+1.0f,-3.0f);
                          glVertex2f(+1.0f, -4.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//8/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+1.0f ,-4.0f);
                            glVertex2f(+1.0f,-3.0f);
                          glVertex2f(+0.0f,-3.0f);
                          glVertex2f(+0.0f, -4.0f);

                               glEnd();




                                   //row 4ened

//row 3 start








                               glBegin(GL_POLYGON);//3/16


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+16.0f ,-3.0f);
                            glVertex2f(+16.0f,-2.0f);
                          glVertex2f(+15.0f,-2.0f);
                          glVertex2f(+15.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/15


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+15.0f ,-3.0f);
                            glVertex2f(+15.0f,-2.0f);
                          glVertex2f(+14.0f,-2.0f);
                          glVertex2f(+14.0f,-3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+14.0f ,-3.0f);
                            glVertex2f(+14.0f,-2.0f);
                          glVertex2f(+13.0f,-2.0f);
                          glVertex2f(+13.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/13


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+13.0f ,-3.0f);
                            glVertex2f(+13.0f,-2.0f);
                          glVertex2f(+12.0f,-2.0f);
                          glVertex2f(+12-.0f,- 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+12.0f ,-3.0f);
                            glVertex2f(+12.0f,-2.0f);
                          glVertex2f(+11.0f,-2.0f);
                          glVertex2f(+11.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+11.0f ,-3.0f);
                            glVertex2f(+11.0f,-2.0f);
                          glVertex2f(+10.0f,-2.0f);
                          glVertex2f(+10.0f,- 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+10.0f ,-3.0f);
                            glVertex2f(+10.0f,-2.0f);
                          glVertex2f(+9.0f,-2.0f);
                          glVertex2f(+9.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+9.0f ,-3.0f);
                            glVertex2f(+9.0f,-2.0f);
                          glVertex2f(+8.0f,-2.0f);
                          glVertex2f(+8.0f,- 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+8.0f ,-3.0f);
                            glVertex2f(+8.0f,-2.0f);
                          glVertex2f(+7.0f,-2.0f);
                          glVertex2f(+7.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//9/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+7.0f ,-3.0f);
                            glVertex2f(+7.0f,-2.0f);
                          glVertex2f(+6.0f,-2.0f);
                          glVertex2f(+6.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+6.0f ,-3.0f);
                            glVertex2f(+6.0f,-2.0f);
                          glVertex2f(+5.0f,-2.0f);
                          glVertex2f(+5.0f,- 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+5.0f ,-3.0f);
                            glVertex2f(+5.0f,-2.0f);
                          glVertex2f(+4.0f,-2.0f);
                          glVertex2f(+4.0f,- 3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+4.0f ,-3.0f);
                            glVertex2f(+4.0f,-2.0f);
                          glVertex2f(+3.0f,-2.0f);
                          glVertex2f(+3.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+3.0f ,-3.0f);
                            glVertex2f(+3.0f,-2.0f);
                          glVertex2f(+2.0f,-2.0f);
                          glVertex2f(+2.0f, -3.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//3/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+2.0f ,-3.0f);
                            glVertex2f(+2.0f,-2.0f);
                          glVertex2f(+1.0f,-2.0f);
                          glVertex2f(+1.0f,- 3.0f);

                               glEnd();

                               glBegin(GL_POLYGON);//3/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+1.0f ,-3.0f);
                            glVertex2f(+1.0f,-2.0f);
                          glVertex2f(+0.0f,-2.0f);
                          glVertex2f(+0.0f, -3.0f);

                               glEnd();


//row 3 end

//roe 2 dstsrtfd
                     glBegin(GL_POLYGON);//2/17


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+16.0f ,-2.0f);
                            glVertex2f(+16.0f,-1.0f);
                          glVertex2f(+15.0f,-1.0f);
                          glVertex2f(+15.0f,- 2.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//11/16


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+15.0f ,-2.0f);
                            glVertex2f(+15.0f,-1.0f);
                          glVertex2f(+14.0f,-1.0f);
                          glVertex2f(+14.0f,- 2.0f);

                               glEnd();




                     glBegin(GL_POLYGON);//2/15


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+14.0f ,-2.0f);
                            glVertex2f(+14.0f,-1.0f);
                          glVertex2f(+13.0f,-1.0f);
                          glVertex2f(+13.0f, -2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/14


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+13.0f ,-2.0f);
                            glVertex2f(+13.0f,-1.0f);
                          glVertex2f(+12.0f,-1.0f);
                          glVertex2f(+12.0f,-2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/13


                               glColor3f(0.0f, 0.0f,- 0.0f);
                                glVertex2f(+12.0f ,-2.0f);
                            glVertex2f(+12.0f,-1.0f);
                          glVertex2f(+11.0f,-1.0f);
                          glVertex2f(+11.0f,- 2.0f);

                               glEnd();

                     glBegin(GL_POLYGON);//2/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+11.0f ,-2.0f);
                            glVertex2f(+11.0f,-1.0f);
                          glVertex2f(+10.0f,-1.0f);
                          glVertex2f(+10.0f, -2.0f);

                               glEnd();




                     glBegin(GL_POLYGON);//11/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+10.0f ,-2.0f);
                            glVertex2f(+10.0f,-1.0f);
                          glVertex2f(+9.0f,-1.0f);
                          glVertex2f(+9.0f,- 2.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//11/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+9.0f ,-2.0f);
                            glVertex2f(+9.0f,-1.0f);
                          glVertex2f(+8.0f,-1.0f);
                          glVertex2f(+8.0f,- 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+8.0f ,-2.0f);
                            glVertex2f(+8.0f,-1.0f);
                          glVertex2f(+7.0f,-1.0f);
                          glVertex2f(+7.0f,- 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+7.0f ,-2.0f);
                            glVertex2f(+7.0f,-1.0f);
                          glVertex2f(+6.0f,-1.0f);
                          glVertex2f(+6.0f, -2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+6.0f ,-2.0f);
                            glVertex2f(+6.0f,-1.0f);
                          glVertex2f(+5.0f,-1.0f);
                          glVertex2f(+5.0f,- 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+5.0f ,-2.0f);
                            glVertex2f(+5.0f,-1.0f);
                          glVertex2f(+4.0f,-1.0f);
                          glVertex2f(+4.0f,-2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+4.0f ,-2.0f);
                            glVertex2f(+4.0f,-1.0f);
                          glVertex2f(+3.0f,-1.0f);
                          glVertex2f(+3.0f,- 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+3.0f ,-2.0f);
                            glVertex2f(+3.0f,-1.0f);
                          glVertex2f(+2.0f,-1.0f);
                          glVertex2f(+2.0f,- 2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/2


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+2.0f ,-2.0f);
                            glVertex2f(+2.0f,-1.0f);
                          glVertex2f(+1.0f,-1.0f);
                          glVertex2f(+1.0f, -2.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+1.0f ,-2.0f);
                            glVertex2f(+1.0f,-1.0f);
                          glVertex2f(+0.0f,-1.0f);
                          glVertex2f(+0.0f,- 2.0f);

                               glEnd();







//start row 1




                     glBegin(GL_POLYGON);//1/1


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+16.0f ,-1.0f);
                            glVertex2f(+16.0f,-0.0f);
                          glVertex2f(+15.0f,-0.0f);
                          glVertex2f(+15.0f, -1.0f);

                               glEnd();



                     glBegin(GL_POLYGON);//1/2


                               glColor3f(1.0f, 1.0f, 0.0f);
                                glVertex2f(+15.0f ,-1.0f);
                            glVertex2f(+15.0f,-0.0f);
                          glVertex2f(+14.0f,-0.0f);
                          glVertex2f(+14.0f, -1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//1/3


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+14.0f ,-1.0f);
                            glVertex2f(+14.0f,-0.0f);
                          glVertex2f(+13.0f,-0.0f);
                          glVertex2f(+13.0f,- 1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//1/4


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+13.0f ,-1.0f);
                            glVertex2f(+13.0f,-0.0f);
                          glVertex2f(+12.0f,-0.0f);
                          glVertex2f(+12.0f, -1.0f);

                               glEnd();


                     glBegin(GL_POLYGON);//11/5


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+12.0f ,-1.0f);
                            glVertex2f(+12.0f,-0.0f);
                          glVertex2f(+11.0f,-0.0f);
                          glVertex2f(+11.0f,- 1.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//11/6


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+11.0f ,-1.0f);
                            glVertex2f(+11.0f,-0.0f);
                          glVertex2f(+10.0f,-0.0f);
                          glVertex2f(+10.0f, -1.0f);

                               glEnd();



                               glBegin(GL_POLYGON);//11/7


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+10.0f ,-1.0f);
                            glVertex2f(+10.0f,-0.0f);
                          glVertex2f(+9.0f,-0.0f);
                          glVertex2f(+9.0f,-1.0f);

                               glEnd();


                               glBegin(GL_POLYGON);//11/8


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+9.0f ,-1.0f);
                            glVertex2f(+9.0f,-0.0f);
                          glVertex2f(+8.0f,-0.0f);
                          glVertex2f(+8.0f,- 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/9


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+8.0f ,-1.0f);
                            glVertex2f(+8.0f,-0.0f);
                          glVertex2f(+7.0f,-0.0f);
                          glVertex2f(+7.0f,- 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/10


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+7.0f ,-1.0f);
                            glVertex2f(+7.0f,-0.0f);
                          glVertex2f(+6.0f,-0.0f);
                          glVertex2f(+6.0f,- 1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/11


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+6.0f ,-1.0f);
                            glVertex2f(+6.0f,-0.0f);
                          glVertex2f(+5.0f,-0.0f);
                          glVertex2f(+5.0f, -1.0f);

                               glEnd();




                               glBegin(GL_POLYGON);//11/12


                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+5.0f ,-1.0f);
                            glVertex2f(+5.0f,-0.0f);
                          glVertex2f(+4.0f,-0.0f);
                          glVertex2f(+4.0f,- 1.0f);

                               glEnd();

glBegin(GL_POLYGON);//11/13



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+4.0f ,-1.0f);
                            glVertex2f(+4.0f,-0.0f);
                          glVertex2f(+3.0f,-0.0f);
                          glVertex2f(+3.0f, -1.0f);

                               glEnd();

                                glBegin(GL_POLYGON);//11/14



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+3.0f ,-1.0f);
                            glVertex2f(+3.0f,-0.0f);
                          glVertex2f(+2.0f,-0.0f);
                          glVertex2f(+2.0f, -1.0f);

                               glEnd();

                                glBegin(GL_POLYGON);//11/15



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+2.0f ,-1.0f);
                            glVertex2f(+2.0f,-0.0f);
                          glVertex2f(+1.0f,-0.0f);
                          glVertex2f(+1.0f,- 1.0f);

                               glEnd();


                                glBegin(GL_POLYGON);//11/16



                               glColor3f(0.0f, 0.0f, 0.0f);
                                glVertex2f(+1.0f ,-1.0f);
                            glVertex2f(+1.0f,-0.0f);
                          glVertex2f(+0.0f,-0.0f);
                          glVertex2f(+0.0f, -1.0f);

                               glEnd();
















glFlush();

 }



              int main(int argc, char** argv){
	           glutInit(&argc, argv);
	              glutInitWindowSize(1200, 1200);        // Initialize GLUT
	              glutCreateWindow("Vertex, Primitive & Color");
	            // Create window with the given title

	            gluOrtho2D(-25,25,-25,25);   // Set the window's initial width & height
	             glutInitWindowPosition(50, 50); // Position the window's initial top+left corner
	           glutDisplayFunc(display);       // Register callback handler for window re+paint event
	             initGL();                       // Our own OpenGL initialization
	            glutMainLoop();                 // Enter the event+processing loop
	                       return 0;




                                                }

