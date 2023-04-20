 #include <GL/glut.h>
#include "glm.h"
#include <opencv/highgui.h>
#include <opencv/cv.h>
#include <GL/glut.h>
int myTexture(char * filename)
{
    IplImage * img = cvLoadImage(filename);
    cvCvtColor(img,img, CV_BGR2RGB);
    glEnable(GL_TEXTURE_2D);
    GLuint id;
    glGenTextures(1, &id);
    glBindTexture(GL_TEXTURE_2D, id);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
    return id;
}
GLMmodel * pmodel = NULL;
GLMmodel * phand =NULL;
    void display()
    {
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        if(pmodel ==NULL){
                          pmodel = glmReadOBJ("Gundam.obj");
                          glmUnitize(pmodel);
                          glmFacetNormals(pmodel);
                          glmVertexNormals(pmodel,90);
        if(phand == NULL)
        {
            phand =glmReadOBJ("lefthand.obj");
            glmUnitize(phand);
            glmFacetNormals(phand);

        }


    }

    glmDraw(pmodel,GLM_SMOOTH|GLM_MATERIAL|GLM_TEXTURE);
        glutSwapBuffers();


          }

         int main(int argc, char *argv[])

        {

                glutInit(&argc, argv);

                glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);


                glutCreateWindow("week10");

                myTexture("Diffuse.jpg");
                glEnable(GL_DEPTH_TEST);
                glutDisplayFunc(display);
    glutIdleFunc(display);

                glutMainLoop();

         }
