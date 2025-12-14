#include <GL/glut.h>
#include <stdlib.h>

float p = -10.0f; // Object starting x-position

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Update object position
    if (p <= 10.0f)
        p += 0.005f;
    else
        p = -10.0f;

    // Draw moving rectangle
    glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 1.0f); // White color
        glVertex2f(p, 3);
        glVertex2f(p + 3, 3);
        glVertex2f(p + 3, -3);
        glVertex2f(p, -3);
    glEnd();

    glutPostRedisplay(); // Redraw continuously
    glFlush();
}

void init() {
    glClearColor(1.0f, 0.0f, 0.0f, 0.0f); // Red background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10, 10, -10, 10, -10, 10); // 2D coordinate system
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("2D Moving Object");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
