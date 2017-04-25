 //Memanggil Library
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <GL/glut.h>

//Membuat Method
void mydisplaytugas(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUAD_STRIP);
    glColor3f(1, 0, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.25f, 0.5f);
    glVertex2f(-0.5f, 0.75f);
    glVertex2f(0.0f, 0.25f);

    glColor3f(0, 1, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.25f, -0.75f);
    glVertex2f(-0.75f, 0.0f);
    glVertex2f(0.0f, -0.25f);

    glColor3f(0, 0, 1);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.5f, 0.75f);
    glVertex2f(0.25f, 0.25f);
    glVertex2f(0.5f, -0.75f); // vertex 4

    glEnd();
    glFlush();
}

//Program Utama
int main(int argc, char** argv){
    glutCreateWindow("simple");
    glutDisplayFunc(mydisplaytugas);
    glutMainLoop();
}

