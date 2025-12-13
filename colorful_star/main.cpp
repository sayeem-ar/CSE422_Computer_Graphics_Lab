#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // White star
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.53, 0.42, 0.0);
        glVertex3f(0.56, 0.34, 0.0);
        glVertex3f(0.59, 0.42, 0.0);
        glVertex3f(0.67, 0.45, 0.0);
        glVertex3f(0.59, 0.48, 0.0);
        glVertex3f(0.56, 0.56, 0.0);
        glVertex3f(0.53, 0.48, 0.0);
        glVertex3f(0.45, 0.45, 0.0);
    glEnd();

    // Red star
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.31, 0.42, 0.0);
        glVertex3f(0.34, 0.34, 0.0);
        glVertex3f(0.37, 0.42, 0.0);
        glVertex3f(0.45, 0.45, 0.0);
        glVertex3f(0.37, 0.48, 0.0);
        glVertex3f(0.34, 0.56, 0.0);
        glVertex3f(0.31, 0.48, 0.0);
        glVertex3f(0.23, 0.45, 0.0);
    glEnd();

    // Green star
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.42, 0.53, 0.0);
        glVertex3f(0.45, 0.45, 0.0);
        glVertex3f(0.48, 0.53, 0.0);
        glVertex3f(0.56, 0.56, 0.0);
        glVertex3f(0.48, 0.59, 0.0);
        glVertex3f(0.45, 0.67, 0.0);
        glVertex3f(0.42, 0.59, 0.0);
        glVertex3f(0.34, 0.56, 0.0);
    glEnd();

    // Blue star
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.42, 0.31, 0.0);
        glVertex3f(0.45, 0.23, 0.0);
        glVertex3f(0.48, 0.31, 0.0);
        glVertex3f(0.56, 0.34, 0.0);
        glVertex3f(0.48, 0.37, 0.0);
        glVertex3f(0.45, 0.45, 0.0);
        glVertex3f(0.42, 0.37, 0.0);
        glVertex3f(0.34, 0.34, 0.0);
    glEnd();

    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Colorful Star");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}