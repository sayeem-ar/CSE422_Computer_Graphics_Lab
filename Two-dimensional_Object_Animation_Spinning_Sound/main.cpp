#include <windows.h>
#include <mmsystem.h>    // For PlaySound
#include <GL/glut.h>
#include <stdlib.h>

static GLfloat spin = 0.0f; // Rotation angle
static float tx = 0.0f, ty = 0.0f; // Translation

// Display function
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
        glTranslatef(tx, ty, 0);        // Move rectangle
        glRotatef(spin, 0.0, 0.0, 1.0); // Rotate rectangle
        glColor3f(1.0, 1.0, 1.0);       // White rectangle
        glRectf(-25.0, -25.0, 25.0, 25.0);
    glPopMatrix();

    glFlush();
}

// Rotate functions
void spinDisplay_left(void) {
    spin += 10.0f;
    glutPostRedisplay();
}

void spinDisplay_right(void) {
    spin -= 10.0f;
    glutPostRedisplay();
}

// Initialize OpenGL
void init(void) {
    glClearColor(1.0, 0.0, 0.0, 0.0); // Red background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}

// Keyboard rotation
void my_keyboard(unsigned char key, int x, int y) {
    switch(key) {
        case 'l': spinDisplay_left(); break;  // Rotate left
        case 'r': spinDisplay_right(); break; // Rotate right
        case 's': glutIdleFunc(NULL); break;  // Stop rotation
    }
}

// Arrow keys translation with sound
void spe_key(int key, int x, int y) {
    switch(key) {
        case GLUT_KEY_UP:
            ty += 5;
            PlaySound(TEXT("Horn.wav"), NULL, SND_ASYNC | SND_FILENAME);
            break;
        case GLUT_KEY_DOWN:
            ty -= 5;
            PlaySound(TEXT("Horn.wav"), NULL, SND_ASYNC | SND_FILENAME);
            break;
        case GLUT_KEY_RIGHT:
            tx += 5;
            PlaySound(TEXT("Horn.wav"), NULL, SND_ASYNC | SND_FILENAME);
            break;
        case GLUT_KEY_LEFT:
            tx -= 5;
            PlaySound(TEXT("Horn.wav"), NULL, SND_ASYNC | SND_FILENAME);
            break;
    }
    glutPostRedisplay();
}

// Mouse rotation
void my_mouse(int button, int state, int x, int y) {
    if(state == GLUT_DOWN) {
        if(button == GLUT_LEFT_BUTTON) glutIdleFunc(spinDisplay_left);
        if(button == GLUT_RIGHT_BUTTON || button == GLUT_MIDDLE_BUTTON) glutIdleFunc(spinDisplay_right);
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("2D Object Animation with Sound");

    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(my_keyboard);
    glutSpecialFunc(spe_key);
    glutMouseFunc(my_mouse);

    glutMainLoop();
    return 0;
}
