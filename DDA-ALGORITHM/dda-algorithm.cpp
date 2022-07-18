#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
using namespace std;


int main(){
	int gd=DETECT, gm;
	initgraph (&gd, &gm,"");
//	initwindow(800,800);
	float x0,y0,x1,y1,x,y,dx,dy,steps;
	cout<<"Enter value of x0 and y0: ";
	cin>>x0>>y0;
	cout<<"Enter value of x1 and y1: ";
	cin>>x1>>y1;
	
	dx=x1-x0;
	dy=y1-y0;
	
	if(dx>dy){
		steps=abs(dx);
	}
	else{
		steps=abs(dy);
	}
	
	float Xincrement=dx/steps;
	float Yincrement=dy/steps;
	
	x=x1;
	y=y1;
	putpixel (round(x),round(y),WHITE);
	for(int i=1; i<=steps; i++){
		x=x+Xincrement;
		y=y+Yincrement;
		putpixel (round(x),round(y),WHITE);
		delay(100);
	}
	getch();
	closegraph();
	return 0;
}


