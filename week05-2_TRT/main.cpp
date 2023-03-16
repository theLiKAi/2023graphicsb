#include <GL/glut.h>
float angle = 0;
void display()
{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		glPushMatrix();
            glScalef(0.5,0.2,0.2);
            glutSolidCube(1);
		glRotatef(angle,0,0,1);
		glTranslatef(0.8,0,0);
		glPopMatrix();

        glutSwapBuffers();
		angle++;
}
int main(int argc,char *argv[])
    {
        glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE| GLUT_DEPTH);
    glutCreateWindow("week05");
    glutDisplayFunc(display);
	glutIdleFunc(display);
    glutMainLoop();
    }


