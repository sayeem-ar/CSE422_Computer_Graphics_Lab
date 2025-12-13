#include <GL/glut.h>
#include <math.h>

void init() {
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-15.0, 15.0, -15.0, 15.0, -1.0, 1.0);
}

// Full circle / oval
void drawCircle(float rx, float ry, float cx, float cy, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for(int i = 0; i <= segments; i++) {
        float angle = 2.0f * 3.1416f * i / segments;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

// Half circle
void drawHalfCircle(float rx, float ry, float cx, float cy, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for(int i = 0; i <= segments; i++) {
        float angle = 3.1416f * i / segments; // half circle: 0 to PI
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

// Hexagon
void drawHexagon(float r, float cx, float cy) {
    glBegin(GL_POLYGON);
    for(int i = 0; i < 6; i++) {
        float angle = 2.0f * 3.1416f * i / 6;
        float x = r * cosf(angle);
        float y = r * sinf(angle);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Uncomment **only one** shape at a time:

    // 1. Full Circle (radius 3)
      glColor3f(1.0, 0.0, 0.0); // Red
      drawCircle(3, 3, 0, 0, 100);

    // 2. Oval (rx=3, ry=8)
    // glColor3f(0.0, 1.0, 0.0); // Green
    // drawCircle(3, 8, 0, 0, 100);

    // 3. Half Circle (radius 5)
    // glColor3f(0.0, 0.0, 1.0); // Blue
    // drawHalfCircle(5, 5, 0, 0, 50);

    // 4. Hexagon (radius 5)
    // glColor3f(1.0, 1.0, 0.0); // Yellow
    // drawHexagon(5, 0, 0);

    glFlush();
    glutSwapBuffers();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Draw One Shape at a Time");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
