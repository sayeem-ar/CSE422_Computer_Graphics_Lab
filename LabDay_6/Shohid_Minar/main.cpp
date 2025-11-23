#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>


int pk, i, r, cx, cy;
int x[1000], y[1000];

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

void rectangle1(int a, int b, int c, int d, int e, int f, int g, int h)
{
    glColor3f(1,1,1);
    glLineWidth(4);
    glBegin(GL_LINES);
        //glVertex2i(a,b);
        //glVertex2i(c,d);

        glVertex2i(c,d);
        glVertex2i(e,f);

        glVertex2i(e,f);
        glVertex2i(g,h);

        glVertex2i(g,h);
        glVertex2i(a,b);
    glEnd();
}



void circle()
{
    glClear (GL_COLOR_BUFFER_BIT);

    //rectangle();

     pk = 1-r;
    x[0] = 0;
    y[0] = r;

    for(i=0;;i++)
    {
        if(pk >= 0)
        {
            x[i+1] = x[i] + 1;
            y[i+1] = y[i] - 1;
            pk = pk - (2*y[i+1]) + (2*x[i+1]) + 1;
        }
        else
        {
            x[i+1] = x[i] + 1;
            y[i+1] = y[i];
            pk=pk+ (2*x[i+1]) + 1;
        }

        if((x[i] >= y[i]))
        {
            break;
        }

    }

    for(i=0;;i++)
    {
        glColor3f(1.0,0.0, 0.0);
        glLineWidth(5);
        glBegin(GL_LINES);

        glVertex2i(cx,cy);
        glVertex2i(x[i]+cx, y[i]+cy);

        glVertex2i(cx,cy);
        glVertex2i(y[i]+cx, x[i]+cy);
        glVertex2i(cx,cy);
        glVertex2i(-x[i]+cx, y[i]+cy);
        glVertex2i(cx,cy);
        glVertex2i(y[i]+cx, -x[i]+cy);
        glVertex2i(cx,cy);
        glVertex2i(-x[i]+cx, -y[i]+cy);
        glVertex2i(cx,cy);
        glVertex2i(-y[i]+cx, -x[i]+cy);
        glVertex2i(cx,cy);
        glVertex2i(x[i]+cx, -y[i]+cy);
        glVertex2i(cx,cy);
        glVertex2i(-y[i]+cx, x[i]+cy);

        glEnd();
        if((x[i] >= y[i]))
        {
            break;
        }
    }


    rectangle1(10,10,50,10,50,120,10,120);
    rectangle1(70,10,170,10,170,150,70,150);
    rectangle1(190,10,230,10,230,120,190,120);



    glutSwapBuffers();
}

int main(int argc,char **argv){

    printf("Enter the value of radius: ");
    scanf("%d", &r);
    printf("Enter the center(x,y): ");
    scanf("%d%d", &cx, &cy);
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Mid Point Circle Algorithm");
    init();
    glutDisplayFunc( circle );
    glutMainLoop();
    return 0;
}
