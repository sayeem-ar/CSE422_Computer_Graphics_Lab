#include <GL/glut.h>


void init()
{
    glClearColor(1.0, 1.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100, 100, -100, 100, -1, 1);
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-60, -10);
    glVertex2f(60, -10);
    glVertex2f(60, 10);
    glVertex2f(-60, 10);
    glEnd();

    // left wgile
    glColor3b(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-30, -10);
    glVertex2f(-30, -15);
    glVertex2f(-20, -15);
    glVertex2f(-20, -10);
    glEnd();

    //right
    glColor3b(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(20, -15);
    glVertex2f(30, -15);
    glVertex2f(30, -10);
    glVertex2f(20, -10);
    glEnd();

    glColor3b(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(-10, 40);
    glVertex2f(-20, 10);
    glVertex2f(20, 10);
    glVertex2f(10, 40);
    glEnd();

    glColor3b(1.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(60, 10);
    glVertex2f(55, 10);
    glVertex2f(55, 5);
    glVertex2f(60, 5);
    glEnd();

    glColor3b(1.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(-60, 10);
    glVertex2f(-60, 5);
    glVertex2f(-60, 10);
    glVertex2f(-60, -5);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Simple Car");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
