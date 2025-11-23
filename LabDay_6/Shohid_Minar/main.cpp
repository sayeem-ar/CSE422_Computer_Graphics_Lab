#include <GL/glut.h>
#include <stdio.h>

int r, cx, cy;
int xarr[1000], yarr[1000];
int pk, i;

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}

/* ───────────── Sahid Minar Columns ───────────── */
void sahid_minar()
{
    glColor3f(1,1,1);
    glLineWidth(8);

    glBegin(GL_LINES);

    /* Left big pillar */
    glVertex2f(10, 10);
    glVertex2f(10, 80);

    glVertex2f(50, 10);
    glVertex2f(50, 80);

    /* Middle tallest pillar */
    glVertex2f(70, 10);
    glVertex2f(70, 120);

    glVertex2f(170, 10);
    glVertex2f(170, 120);

    /* Right pillar */
    glVertex2f(190, 10);
    glVertex2f(190, 80);

    glVertex2f(230, 10);
    glVertex2f(230, 80);

    /* Ground line */
/*
    glVertex2f(0,10);
    glVertex2f(230,10);
*/
    glEnd();
}

/* ───────────── Midpoint Circle Algorithm ───────────── */
void circle()
{
    glClear(GL_COLOR_BUFFER_BIT);

    sahid_minar();   // draw minar first

    pk = 1 - r;
    xarr[0] = 0;
    yarr[0] = r;

    for(i = 0;; i++)
    {
        if(pk >= 0)
        {
            xarr[i+1] = xarr[i] + 1;
            yarr[i+1] = yarr[i] - 1;
            pk = pk - (2 * yarr[i+1]) + (2 * xarr[i+1]) + 1;
        }
        else
        {
            xarr[i+1] = xarr[i] + 1;
            yarr[i+1] = yarr[i];
            pk = pk + (2 * xarr[i+1]) + 1;
        }

        if(xarr[i] >= yarr[i])
            break;
    }

    glColor3f(1.0,0.0,0.0);  // red circle

    for(i = 0;; i++)
    {
        glBegin(GL_POINTS);

        glVertex2i( xarr[i] + cx,  yarr[i] + cy );
        glVertex2i( yarr[i] + cx,  xarr[i] + cy );
        glVertex2i(-xarr[i] + cx,  yarr[i] + cy );
        glVertex2i( yarr[i] + cx, -xarr[i] + cy );
        glVertex2i(-xarr[i] + cx, -yarr[i] + cy );
        glVertex2i(-yarr[i] + cx, -xarr[i] + cy );
        glVertex2i( xarr[i] + cx, -yarr[i] + cy );
        glVertex2i(-yarr[i] + cx,  xarr[i] + cy );

        glEnd();

        if(xarr[i] >= yarr[i])
            break;
    }

    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    printf("Enter radius: ");
    scanf("%d", &r);

    printf("Enter circle center (x,y): ");
    scanf("%d %d", &cx, &cy);

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(600,600);
    glutCreateWindow("Sahid Minar with Circle");
    init();
    glutDisplayFunc(circle);
    glutMainLoop();
    return 0;
}
