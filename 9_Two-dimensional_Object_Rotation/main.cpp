#include <GL/glut.h>

GLfloat spin = 0.0f; // Rotation angle

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0); // Black background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100, 100, -100, 100, -1, 1); // 2D coordinate system
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
        glColor3f(1.0, 0.0, 0.0);          // Red rectangle
        glRotatef(spin, 0.0, 0.0, 1.0);    // Rotate about Z-axis
        glRectf(-25, -25, 25, 25);
    glPopMatrix();

    glutSwapBuffers();
}

// Rotate left
void spinLeft() {
    spin += 10.0f;
    glutPostRedisplay();
}

// Rotate right
void spinRight() {
    spin -= 10.0f;
    glutPostRedisplay();
}

// Keyboard control
void keyboard(unsigned char key, int x, int y) {
    switch(key) {
        case 'l': spinLeft(); break;  // Press 'l' to rotate left
        case 'r': spinRight(); break; // Press 'r' to rotate right
        case 's': glutIdleFunc(NULL); break; // Stop rotation
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("2D Object Rotation");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
