#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>

int r;
int x = 0, y;
int pk;

void init()
{
    // Yellow background (RGB 1.0, 1.0, 0.0)
    glClearColor(1.0, 1.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-200.0, 200.0, -200.0, 200.0, -1.0, 1.0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Black circle color
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_POINTS);

    x = 0;
    y = r;
    pk = 1 - r;

    while (x <= y)
    {
        glVertex2i( x,  y);
        glVertex2i(-x,  y);
        glVertex2i( x, -y);
        glVertex2i(-x, -y);
        glVertex2i( y,  x);
        glVertex2i(-y,  x);
        glVertex2i( y, -x);
        glVertex2i(-y, -x);

        x++;

        if (pk < 0)
        {
            pk = pk + 2*x + 1;
        }
        else
        {
            y--;
            pk = pk + 2*(x - y) + 1;
        }
    }

    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    printf("Enter radius: ");
    scanf("%d", &r);

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Midpoint Circle Algorithm");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
