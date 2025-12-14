// File Name: bresenham_forward.cpp
#include <stdio.h>
#include <GL/glut.h>

float x1, y1, x2, y2, p;
int dx, dy;
float i, j;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1.0, 0.0); // Green color
    glBegin(GL_POINTS);

    dx = (int)(x2 - x1);
    dy = (int)(y2 - y1);

    i = x1;
    j = y1;
    p = (2 * dy) - dx;

    while (i <= x2)
    {
        glVertex3f(i / 100, j / 100, 0.0); // scale to 0-1
        if (p >= 0)
        {
            i = i + 1;
            j = j + 1;
            p = p + (2 * dy) - (2 * dx);
        }
        else
        {
            i = i + 1;
            p = p + (2 * dy);
        }
    }

    glEnd();
    glFlush();
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0); // Black background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    printf("N.B: (0<=x<100) and (0<=y<100)");
    printf("\nEnter first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Bresenham Line Drawing");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
