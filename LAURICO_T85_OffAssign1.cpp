#include <iostream>
#include <glut.h>

using namespace std;

void display();
void reshape(int,int);

void init()
{
	//set background to black
	glClearColor(1.0,0.2,0.0,0.0);
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); //display modes
	
	glutInitWindowPosition(200,100); //window postion
	glutInitWindowSize(500,500); //window size
	glutCreateWindow ("LAURICO_M1A2"); //create the initialized window with name
	
	glutDisplayFunc(display); //initialize display function
	glutReshapeFunc(reshape); //initialize reshape function
	
	init();
	glutMainLoop();//loop at the functions

}

void display()
{
	

	
	glClear(GL_COLOR_BUFFER_BIT);//clear color
	
	glLoadIdentity();//clear transforms

	
	 glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -16.0f);
	glVertex2f(11.0f, -12.0f);
	glVertex2f(8.0f, -9.0f);
	glVertex2f(9.0f, -8.0f);
	glVertex2f(5.0f, -5.0f);
	glVertex2f(11.0f, -8.0f);
	glVertex2f(10.0f, -9.0f);
	glVertex2f(13.0f, -11.0f);
	glVertex2f(13.0f, -9.0f);

	glVertex2f(16.0f, 0.0f);
	glVertex2f(13.0f, 9.0f);
	glVertex2f(13.0f, 11.0f);
	glVertex2f(10.0f, 9.0f);
	glVertex2f(11.0f, 8.0f);
	glVertex2f(5.0f, 5.0f);
	glVertex2f(9.0f, 8.0f);
	glVertex2f(8.0f, 9.0f);
	glVertex2f(11.0f, 12.0f);

	glVertex2f(0.0f, 16.0f);
	glVertex2f(-11.0f, 12.0f);
	glVertex2f(-8.0f, 9.0f);
	glVertex2f(-9.0f, 8.0f);
	glVertex2f(-5.0f, 5.0f);
	glVertex2f(-11.0f, 8.0f);
	glVertex2f(-10.0f, 9.0f);
	glVertex2f(-13.0f, 11.0f);
	glVertex2f(-13.0f, 9.0f);

	glVertex2f(-16.0f, .0f);
	glVertex2f(-13.0f, -9.0f);
	glVertex2f(-13.0f, -11.0f);
	glVertex2f(-10.0f, -9.0f);
	glVertex2f(-11.0f, -8.0f);
	glVertex2f(-5.0f, -5.0f);
	glVertex2f(-9.0f, -8.0f);
	glVertex2f(-8.0f, -9.0f);
	glVertex2f(-11.0f, -12.0f);
	glEnd();
	glLineWidth(3);

	  glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.6f, 0.0f);
	glVertex2f(0.0f, -16.0f);
	glVertex2f(11.0f, -12.0f);
	glVertex2f(8.0f, -9.0f);
	glVertex2f(9.0f, -8.0f);
	glVertex2f(5.0f, -5.0f);
	glVertex2f(0.0f, 0.0f);
	glEnd();
  
	  glBegin(GL_POLYGON);
	glVertex2f(16.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(5.0f, -5.0f);
	glVertex2f(11.0f, -8.0f);
	glVertex2f(10.0f, -9.0f);
	glVertex2f(13.0f, -11.0f);
	glVertex2f(13.0f, -9.0f);
	glEnd();

	  glBegin(GL_POLYGON);
	glVertex2f(16.0f, 0.0f);
	glVertex2f(13.0f, 9.0f);
	glVertex2f(13.0f, 11.0f);
	glVertex2f(10.0f, 9.0f);
	glVertex2f(11.0f, 8.0f);
	glVertex2f(5.0f, 5.0f);
	glVertex2f(0.0f, 0.0f);
	glEnd();
  
  	glBegin(GL_POLYGON);
	glVertex2f(0.0f, 16.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(5.0f, 5.0f);
	glVertex2f(9.0f, 8.0f);
	glVertex2f(8.0f, 9.0f);
	glVertex2f(11.0f, 12.0f);
	glEnd();

  	glBegin(GL_POLYGON);
	glVertex2f(0.0f, 16.0f);
	glVertex2f(-11.0f, 12.0f);
	glVertex2f(-8.0f, 9.0f);
	glVertex2f(-9.0f, 8.0f);
	glVertex2f(-5.0f, 5.0f);
	glVertex2f(0.0f, 0.0f);
	glEnd();
  
  	glBegin(GL_POLYGON);
	glVertex2f(-16.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-5.0f, 5.0f);
	glVertex2f(-11.0f, 8.0f);
	glVertex2f(-10.0f, 9.0f);
	glVertex2f(-13.0f, 11.0f);
	glVertex2f(-13.0f, 9.0f);
	glEnd();

	  glBegin(GL_POLYGON);
	glVertex2f(-16.0f, .0f);
	glVertex2f(-13.0f, -9.0f);
	glVertex2f(-13.0f, -11.0f);
	glVertex2f(-10.0f, -9.0f);
	glVertex2f(-11.0f, -8.0f);
	glVertex2f(-5.0f, -5.0f);
	glVertex2f(0.0f, 0.0f);
	glEnd();
  
  	glBegin(GL_POLYGON);
	glVertex2f(0.0f, -16.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-5.0f, -5.0f);
	glVertex2f(-9.0f, -8.0f);
	glVertex2f(-8.0f, -9.0f);
	glVertex2f(-11.0f, -12.0f);
	glEnd();

   

	
	glutSwapBuffers(); //Send the scene to the screen
}

void reshape(int w, int h)
{
	glViewport(0,0,(GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	//size of the world
	gluOrtho2D(-10,10,-10,10);
	glMatrixMode(GL_MODELVIEW);
}
