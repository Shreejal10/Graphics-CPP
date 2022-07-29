#include<graphics.h>
#include<iostream>
using namespace std;

void symmetry(int x, int y, int h, int k){
	putpixel(x+h,y+k,WHITE);
	putpixel(-x+h,y+k,WHITE);
	putpixel(x+h,-y+k,WHITE);
	putpixel(-x+h,-y+k,WHITE);
	putpixel(y+h,x+k,WHITE);
	putpixel(-y+h,x+k,WHITE);
	putpixel(y+h,-x+k,WHITE);
	putpixel(-y+h,-x+k,WHITE);
	delay(50);
}

void draw_circle(int h, int k, int r){
	int x=0;
	int y=r;
	int p=1-r;
	while(x<y){
		symmetry(x,y,h,k);
		x++;
		if(p<0){
			p=p+(2*x)+1;
		}
		else{
			p=p+(2*x)-(2*y)+1;
			y--;
		}
		symmetry(x,y,h,k);
		delay(50);
	}	
}



int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	int h,k,r;
	cout<<"Enter center of circle: ";
	cin>>h>>k;
	cout<<"Enter radius of circle: ";
	cin>>r;
	draw_circle(h,k,r);
	getch();
	closegraph();
	return 0;
}
