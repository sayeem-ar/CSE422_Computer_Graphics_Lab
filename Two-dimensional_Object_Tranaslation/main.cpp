#include <GL/glut.h>

float tx = 0.0f; // Translation in x
float ty = 0.0f; // Translation in y

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0); // Black background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100, 100, -100, 100, -1, 1); // 2D coordinate system
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0, 0.0); // Red rectangle
    glPushMatrix();
        glTranslatef(tx, ty, 0);       // Apply translation
        glRectf(-25, -25, 25, 25);     // Draw rectangle
    glPopMatrix();

    glutSwapBuffers();
}

void specialKeys(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_UP:    ty += 5; break;
        case GLUT_KEY_DOWN:  ty -= 5; break;
        case GLUT_KEY_RIGHT: tx += 5; break;
        case GLUT_KEY_LEFT:  tx -= 5; break;
    }
    glutPostRedisplay(); // Redraw after moving
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("2D Object Translation");
    init();
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);
    glutMainLoop();
    return 0;
}
