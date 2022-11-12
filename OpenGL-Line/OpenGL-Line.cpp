#include<windows.h>
#include<GL/glut.h>
void DrawLine(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(8);
	glBegin(GL_LINES);
	glVertex2d(400, 700);
	glVertex2d(100, 50);
	glEnd();
	glFlush();
}
void Initial(){
	glClearColor(0.0, 1.0, 1.0, 0.0);
	glColor3f(0,1,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 600, 0, 800);
}
int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Draw a Line");
	Initial();
	glutDisplayFunc(DrawLine);
	glutMainLoop();
	return 0;
}
