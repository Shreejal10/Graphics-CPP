#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;

void display(int xc,int yc,int x,int y)
{
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc+x,yc+y,WHITE); // plot points by using 4 point symmetry
}
void ellipse(int xc,int yc,int rx, int ry)
{
    float x,y;
    float d1,d2,dx,dy;
    x = 0;                  // take start position as (0,ry)
    y = ry;                 // finding decision parameter d1
    d1 = pow(ry,2) - (pow(rx,2) * ry) + (0.25 * pow(rx,2));
    dx = 2 * pow(ry,2) * x;
    dy = 2 * pow(rx,2) * y;
    do                         // region one
    {
        display(xc,yc,x,y);
        if(d1<0)
        {
            x++;
            dx = dx + (2 * (pow(ry,2)));
            d1 = d1 + dx +(pow(ry,2));
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * (pow(ry,2)));
            dy = dy - (2 * (pow(rx,2)));
            d1 = d1 + dx - dy + (pow(ry,2));
        }
    }while(dx<dy);      // change over condition for region-2
    do                       // region two
    {
        display(xc,yc,x,y);
        if(d2>0)
        {
            x = x;
            y--;
            dy = dy - (2 * (pow(rx,2)));
            d2 = d2 - dy + pow(rx,2);
        }
        else
        {
            x++;
            y--;
            dy = dy - (2 * (pow(rx,2)));
            dx = dx + (2 * (pow(ry,2)));
            d2 = d2 +dx - dy + pow(rx,2);
        }
    }while(y>0);
}

int main(){
	int gd = DETECT,gm;           
    initgraph(&gd,&gm," ");
    float xc,yc,rx,ry;
    
    cout<<"Enter the center points: ";
    cin>>xc>>yc;
    cout<<"Enter the X Radius and Y Radius: ";
    cin>>rx>>ry;
    
    ellipse(xc,yc,rx,ry);
    getch();
    closegraph();
}
