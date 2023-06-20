#include "./bandera3d.h"
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/freeglut.h>
#include <math.h>
#include <stdlib.h>


void dibujar_bandera3d();
void rotar_bandera_3d(unsigned char tecla, int x, int y);

double rotate_y = 0;
double rotate_x = 0;


void inicializar_bandera3d(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
}

void dibujar_bandera3d() {

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();

    gluPerspective(65, 1, 0.1, 100);

    glMatrixMode(GL_MODELVIEW);

    glTranslatef(0, 0, -5);
    // Rotar cuando el usuario cambie “rotate_x” y “rotate_y”
    glRotatef(rotate_x, 1.0, 0.0, 0.0);
    glRotatef(rotate_y, 0.0, 1.0, 0.0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(2.2, -0.4, -0.3); 
    glVertex3f(2.2, 0.4, -0.3); 
    glVertex3f(-1.5, 0.4, -0.3); 
    glVertex3f(-1.5, -0.4, -0.3); 

    glEnd();

    
    glBegin(GL_POLYGON);

    glVertex3f(2.2, -0.4, 0.0);
    glVertex3f(2.2, 0.4, 0.0);
    glVertex3f(-1.5, 0.4, 0.0);
    glVertex3f(-1.5, -0.4, 0.0);
    glEnd();

    
    glBegin(GL_POLYGON);

    glVertex3f(2.2, -0.4, -0.3);
    glVertex3f(2.2, 0.4, -0.3);
    glVertex3f(2.2, 0.4, 0.0);
    glVertex3f(2.2, -0.4, 0.0);
    glEnd();

    
    glBegin(GL_POLYGON);

    glVertex3f(-1.5, -0.4, 0.0);
    glVertex3f(-1.5, 0.4, 0.0);
    glVertex3f(-1.5, 0.4, -0.3);
    glVertex3f(-1.5, -0.4, -0.3);
    glEnd();

    
    glBegin(GL_POLYGON);

    glVertex3f(2.2, 0.4, 0.0);
    glVertex3f(2.2, 0.4, -0.3);
    glVertex3f(-1.5, 0.4, -0.3);
    glVertex3f(-1.5, 0.4, 0.0);
    glEnd();

    
    glBegin(GL_POLYGON);

    glVertex3f(2.2, -0.4, -0.3);
    glVertex3f(2.2, -0.4, 0.0);
    glVertex3f(-1.5, -0.4, 0.0);
    glVertex3f(-1.5, -0.4, -0.3);
    glEnd();

    //bandera parte de arriba azul
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(2.2, 0.401, -0.3); 
    glVertex3f(2.2, 1.2, -0.3); 
    glVertex3f(-1.5, 1.2, -0.3); 
    glVertex3f(-1.5, 0.401, -0.3);

    glEnd();

  
    glBegin(GL_POLYGON);

    glVertex3f(2.2, 0.401, 0.0);
    glVertex3f(2.2, 1.2, 0.0);
    glVertex3f(-1.5, 1.2, 0.0);
    glVertex3f(-1.5, 0.401, 0.0);
    glEnd();
    
    
    glBegin(GL_POLYGON);

    glVertex3f(2.2, 0.401, -0.3);
    glVertex3f(2.2, 1.2, -0.3);
    glVertex3f(2.2, 1.2, 0.0);
    glVertex3f(2.2, 0.401, 0.0);
    glEnd();

    
    glBegin(GL_POLYGON);

    glVertex3f(-1.5, 0.401, 0.0);
    glVertex3f(-1.5, 1.2, 0.0);
    glVertex3f(-1.5, 1.2, -0.3);
    glVertex3f(-1.5, 0.401, -0.3);
    glEnd();

    
    glBegin(GL_POLYGON);

    glVertex3f(2.2, 1.2, 0.0);
    glVertex3f(2.2, 1.2, -0.3);
    glVertex3f(-1.5, 1.2, -0.3);
    glVertex3f(-1.5, 1.2, 0.0);
    glEnd();

    
    glBegin(GL_POLYGON);

    glVertex3f(2.2, 0.401, -0.3);
    glVertex3f(2.2, 0.401, 0.0);
    glVertex3f(-1.5, 0.401, 0.0);
    glVertex3f(-1.5, 0.401, -0.3);
    glEnd();


    //parter azul abajo
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(2.2, -1.2, -0.3); 
    glVertex3f(2.2, -0.401, -0.3); 
    glVertex3f(-1.5, -0.401, -0.3); 
    glVertex3f(-1.5, -1.2, -0.3); 

    glEnd();


    glBegin(GL_POLYGON);
    glVertex3f(2.2, -1.2, 0.0);
    glVertex3f(2.2, -0.401, 0.0);
    glVertex3f(-1.5, -0.401, 0.0);
    glVertex3f(-1.5, -1.2, 0.0);
    glEnd();

    
    glBegin(GL_POLYGON);
    glVertex3f(2.2, -1.2, -0.3);
    glVertex3f(2.2, -0.401, -0.3);
    glVertex3f(2.2, -0.401, 0.0);
    glVertex3f(2.2, -1.2, 0.0);
    glEnd();

    
    glBegin(GL_POLYGON);
    glVertex3f(-1.5, -1.2, 0.0);
    glVertex3f(-1.5, -0.401, 0.0);
    glVertex3f(-1.5, -0.401, -0.3);
    glVertex3f(-1.5, -1.2, -0.3);
    glEnd();

    
    glBegin(GL_POLYGON);
    glVertex3f(2.2, -0.401, 0.0);
    glVertex3f(2.2, -0.401, -0.3);
    glVertex3f(-1.5, -0.401, -0.3);
    glVertex3f(-1.5, -0.401, 0.0);
    glEnd();

    
    glBegin(GL_POLYGON);
    glVertex3f(2.2, -1.2, -0.3);
    glVertex3f(2.2, -1.2, 0.0);
    glVertex3f(-1.5, -1.2, 0.0);
    glVertex3f(-1.5, -1.2, -0.3);
    glEnd();


    glColor3f(1.0, 1.0, 0.0);
    //creamo el cilindro
    float radius = 0.2f;
    float height = 1.2f;
    int sides = 50;
    float angle = 0.0;
    float angleIncrement = 2.0 * M_PI / sides;

    glBegin(GL_QUAD_STRIP);
    for (int i = 0; i <= sides; i++) {
        float x = radius * cos(angle);
        float z = radius * sin(angle);

        glVertex3f(x - 1.7f, height, z - 0.18f);
        glVertex3f(x - 1.7f, -3, z - 0.18f);

        angle += angleIncrement;
    }
    glEnd();


    glBegin(GL_TRIANGLE_FAN);

    for (int i = 0; i <= sides; i++) {
        float x = radius * cos(angle);
        float z = radius * sin(angle);

        glVertex3f(x - 1.7f, -3, z - 0.18f);

        angle -= angleIncrement;
    }
    glEnd();
    // creamos el circulo
    radius = 0.25;
    int slices = 50;
    int stacks = 50;
    float phi, theta;
    float x, y, z;
    float deltaPhi = 2.0 * M_PI / slices;
    float deltaTheta = M_PI / stacks;

    for (int i = 0; i < stacks; i++) {
        phi = i * deltaTheta;

        glBegin(GL_QUAD_STRIP);
        for (int j = 0; j <= slices; j++) {
            theta = j * deltaPhi;

            x = radius * sin(phi) * cos(theta);
            y = radius * sin(phi) * sin(theta);
            z = radius * cos(phi);

            glVertex3f(x - 1.7f, y + 1.45f, z - 0.18f);

            x = radius * sin(phi + deltaTheta) * cos(theta);
            y = radius * sin(phi + deltaTheta) * sin(theta);
            z = radius * cos(phi + deltaTheta);

            glVertex3f(x - 1.7f, y + 1.45f, z - 0.18f);
        }
        glEnd();
    }
    glFlush();
    glutSwapBuffers();

}

void rotar_bandera_3d(unsigned char tecla, int x, int y) {

        if (tecla == 'd')
        rotate_y += 5;

        
    else if (tecla == 'a')
        rotate_y -= 5;

    else if (tecla == 'w')
        rotate_x += 5;

    else if (tecla == 's')
        rotate_x -= 5;

    
    glutPostRedisplay();

}


