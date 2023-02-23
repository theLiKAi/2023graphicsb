#include <GL/glut.h>
void display()
{
    glColor3f(0,246/255.0,0);
    glBegin(GL_POLYGON);
    glVertex2f((52-100)/100.0,-(35-100)/100.0);
    glVertex2f((135-100)/100.0,-(15-100)/100.0);
    glVertex2f((147-100)/100.0,-(27-100)/100.0);
    glVertex2f((55-100)/100.0,-(46-100)/100.0);
    glEnd();
     glColor3f(0,64/255.0,128/255.0);
    glBegin(GL_POLYGON);
    glVertex2f((111-100)/100.0,-(35-100)/100.0);
    glVertex2f((108-100)/100.0,-(176-100)/100.0);
    glVertex2f((96-100)/100.0,-(176-100)/100.0);
    glVertex2f((90-100)/100.0,-(42-100)/100.0);
    glEnd();
     glColor3f(255/255.0,128/255.0,128/255.0);
    glBegin(GL_POLYGON);
    glVertex2f((107-100)/100.0,-(106-100)/100.0);
    glVertex2f((144-100)/100.0,-(92-100)/100.0);
    glVertex2f((157-100)/100.0,-(102-100)/100.0);
    glVertex2f((110-100)/100.0,-(115-100)/100.0);
    glEnd();
     glColor3f(255/255.0,128/255.0,0);
    glBegin(GL_POLYGON);
    glVertex2f((172-100)/100.0,-(165-100)/100.0);
    glVertex2f((191-100)/100.0,-(181-100)/100.0);
    glVertex2f((27-100)/100.0,-(199-100)/100.0);
    glVertex2f((9-100)/100.0,-(189-100)/100.0);
    glEnd();
     glColor3f(252/255.0,208/255.0,3/255.0);
    glBegin(GL_POLYGON);
    glVertex2f((53-100)/100.0,-(91-100)/100.0);
    glVertex2f((67-100)/100.0,-(96-100)/100.0);
    glVertex2f((66-100)/100.0,-(181-100)/100.0);
    glVertex2f((57-100)/100.0,-(182-100)/100.0);
    glEnd();



        glutSwapBuffers();
}
int main(int argc,char *argv[])
    {
        glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE| GLUT_DEPTH);
    glutCreateWindow("week02");
    glutDisplayFunc(display);
    glutMainLoop();
    }
