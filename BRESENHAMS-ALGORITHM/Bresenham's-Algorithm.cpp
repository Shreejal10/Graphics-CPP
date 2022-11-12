#include<iostream>
#include<graphics.h>
#include<cstdlib>
#include<conio.h>
using namespace std;

int main(){
	int x,y,x1,y1,x2,y2,p,dx,dy,xend;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	cout<<"Enter x and y co-ordinate of 1st point: ";
	cin>>x1>>y1;
	cout<<"Enter x and y co-ordinate of 2nd point: ";
	cin>>x2>>y2;
	
	dx=(x2-x1);
	dy=(y2-y1);
	x=x1;
	y=y1;
	if(abs(dx) >= abs(dy)){
        putpixel(x,y,GREEN);    //this putpixel is for very first pixel of the line
        int p = (2 * abs(dy)) - abs(dx);

        for(int i = 0; i < abs(dx) ; i++){
        	x = x + 1;
            if(p < 0){
            	p = p + (2 * abs(dy));
			}   
            else{
                y = y + 1;
                p = p + (2 * abs(dy)) - (2 * abs(dx));
            }
            putpixel(x,y,GREEN);
            delay(10);
        }
        delay(30);
    }
    else{
        //this is the case when slope is greater than or equal to 1  i.e: m>=1
        putpixel(x,y,GREEN);    //this putpixel is for very first pixel of the line
        int p = (2 * abs(dx)) - abs(dy);

        for(int i = 0; i < abs(dy) ; i++){
            y = y + 1;
            if(p < 0){
            	p = p + (2 * abs(dx));
			}   
            else{
                x = x + 1;
                p = p + (2 * abs(dx)) - (2 *abs(dy));
            }

            putpixel(x,y,GREEN);    // display pixel at coordinate (x, y)
            delay(10);
        }

        delay(30);
    }
	getch();
	closegraph();
	return 0;
}
