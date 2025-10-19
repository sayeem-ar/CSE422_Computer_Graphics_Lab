#include<windows.h>
#include<GL/glut.h>

void poly(float a, float b, float c, float d, float e, float f, float g, float h)
{
    glBegin(GL_POLYGON);
        glVertex2f(a, b);
        glVertex2f(c, d);
        glVertex2f(e, f);
        glVertex2f(g, h);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glVertex2f(1.0, 0.0);
    glVertex2f(-1.0, 0.0);

    glVertex2f(0.0, 1.0);
    glVertex2f(0.0, -1.0);
    glEnd();

/*
    poly(0.0, 0.0, 0.25, 0.0, 0.25, 0.25, 0.0, 0.25);
    poly(0.25, 0.25, 0.5, 0.25, 0.5, 0.5, 0.25, 0.5);
    poly(0.0, 0.5, 0.25, 0.5, 0.25, 0.75, 0.0, 0.75);
    poly(0.5, 0.0, 0.75, 0.0, 0.75, 0.25, 0.5, 0.25);
    poly(0.5, 0.5, 0.75, 0.5, 0.75, 0.75, 0.5, 0.75); //3/2
    poly(0.75, 0.25, 1.0, 0.25, 1.0, 0.5, 0.75, 0.5);
*/

/*
    // Top Right Block      // x++ & y++
    for(float x = 0.0; x<1.0; x+=0.25)
    {
        for(float y=0.0; y<1.0; y+=0.25)
        {
            float sum = x+y;
            if(sum == 0.0 || sum == 0.5 || sum == 1.0 || sum == 1.5)
            {
                poly(x, y, x+0.25, y, x+0.25, y+0.25, x, y+0.25);
            }
        }
    }

    // Bottom Left Block    // x-- & y--
    for(float x = 0.0; x>-1.0; x-=0.25)
    {
        for(float y=0.0; y>-1.0; y-=0.25)
        {
            float sum = x+y;
            if(sum == 0.0 || sum == -0.5 || sum == -1.0 || sum == -1.5)
            {
                poly(x, y, x-0.25, y, x-0.25, y-0.25, x, y-0.25);
            }
        }
    }
    // Bottom Right Block   // x++ & y--
    for(float x = 0.0; x<1.0; x+=0.25)
    {
        for(float y=0.0; y>-1.0; y-=0.25)
        {
            float sum = x+y;
            if(sum == -0.25 || sum == 0.25 || sum == -0.75 || sum == 0.75)
            {
                poly(x, y, x+0.25, y, x+0.25, y-0.25, x, y-0.25);
            }
        }
    }

    // Top Left Block       // x-- & y++
    for(float x = 0.0; x>-1.0; x-=0.25)
    {
        for(float y=0.0; y<1.0; y+=0.25)
        {
            float sum = x+y;
            if(sum == -0.25 || sum == 0.25 || sum == -0.75 || sum == 0.75)
            {
                poly(x, y, x-0.25, y, x-0.25, y+0.25, x, y+0.25);
            }
        }
    }
*/


    for(float x=-1; x<=1; x+=0.25)
    {
        for(float y=-1; y<=1; y+=0.25)
        {
            float sum = x+y;

            // Top Right || 1st Coordinate
            if(x>=0 and y>=0)
            {
                if(sum == 0.0 || sum == 0.5 || sum == 1.0 || sum == 1.5)
                {
                    poly(x, y, x+0.25, y, x+0.25, y+0.25, x, y+0.25);
                }
            }
            // Bottom Left || 3rd Coordinate
            if(x<=0 and y<=0)
            {
                if(sum == 0.0 || sum == -0.5 || sum == -1.0 || sum == -1.5)
                {
                    poly(x, y, x-0.25, y, x-0.25, y-0.25, x, y-0.25);
                }
            }
            // BottomRight || 4th Coordinate
            if(x>=0 and y<=0)
            {
                if(sum == -0.25 || sum == 0.25 || sum == -0.75 || sum == 0.75)
                {
                    poly(x, y, x+0.25, y, x+0.25, y-0.25, x, y-0.25);
                }
            }
            // Top Left || 2nd Coordinate
            if(x<=0 and y>=0)
            {
                if(sum == -0.25 || sum == 0.25 || sum == -0.75 || sum == 0.75)
                {
                    poly(x, y, x-0.25, y, x-0.25, y+0.25, x, y+0.25);
                }
            }
        }
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Chessboard");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

// ----------------------CHAT GPT-----------------------------

// Normal Chess Board
/*
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    int size = 50; // Size of each tile

    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            if ((row + col) % 2 == 0)
                glColor3f(0.0, 0.0, 0.0); // Black
            else
                glColor3f(1.0, 1.0, 1.0); // White

            // Draw square
            int x = col * size;
            int y = row * size;

            glBegin(GL_QUADS);
                glVertex2i(x, y);
                glVertex2i(x + size, y);
                glVertex2i(x + size, y + size);
                glVertex2i(x, y + size);
            glEnd();
        }
    }

    glFlush();
}

void init() {
    glClearColor(0.7, 0.7, 0.7, 1.0); // Background color
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 400.0, 0.0, 400.0); // Coordinate system
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Chessboard");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
*/
