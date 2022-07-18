#include<iostream>
#include<graphics.h>
#include<cstdlib>
#include<conio.h>
using namespace std;

int main(){
	int x,y,x0,y0,x1,y1,p,dx,dy,xend;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	cout<<"Enter x and y co-ordinate of 1st point: ";
	cin>>x0>>y0;
	cout<<"Enter x and y co-ordinate of 2nd point: ";
	cin>>x1>>y1;
	
	dx=abs(x1-x0);
	dy=abs(y1-y0);
	p=(2*dy-dx);
	if(x1>x0){
		x=x0;
		y=y0;
		xend=x1;
	}
	else{
		x=x1;
		y=y1;
		xend=x0;
	}
	putpixel(x,y,WHITE);
	
	while(x<xend){
		x++;
		if(p<0){
			p=(p+(2*dy));
		}
		else{
			y++;
			p=(p+(2*dy)-(2*dx));
		}
		putpixel(x,y,WHITE);
		delay(100);
	}
	getch();
	closegraph();

	
	return 0;
	
}
