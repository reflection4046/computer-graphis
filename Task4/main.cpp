#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

int xk, yk, r;


void plot(int x, int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x + xk, y + yk);
    glEnd();
}


void myInit (void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);
    glColor3ub (128, 128, 128);
    glPointSize(3.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 300);
}

void midPointCircleAlgo()
{
    int x = 0;
    int y = r;
    float decision = 5/4 - r;
    plot(x, y);

    while (y > x)
    {
        if (decision < 0)
        {
            x++;
            decision += 2*x+1;
        }
        else
        {
            y--;
            x++;
            decision += 2*(x-y)+1;
        }
        plot(x, y);
        plot(x, -y);
        plot(-x, y);
        plot(-x, -y);
        plot(y, x);
        plot(-y, x);
        plot(y, -x);
        plot(-y, -x);
    }



}


void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (128, 128, 128);
    midPointCircleAlgo();
    glFlush ();
}

int main(int argc, char** argv)
{
    printf("center of circle:\n");
    printf("x: ");
    scanf("%d",&xk);
    printf("y:  ");
    scanf("%d",&yk);
    printf("adius of circle: ");
    scanf("%d",&r);
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 300);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("");
    myInit ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
