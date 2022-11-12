#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
using namespace std;
void xshear(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
	int shx=2;
	cout<<"Before shearing of rectangle"<<endl;
             setcolor(3);
             line(x1,y1,x2,y2);
             line(x1,y1,x3,y3);
             line(x3,y3,x4,y4);
             line(x2,y2,x4,y4);
             cout<<"After shearing of rectangle"<<endl;
             x1=x1+shx*y1;
             x2=x2+shx*y2;
             x3=x3+shx*y3;
             x4=x4+shx*y4;
             setcolor(13);
             line(x1,y1,x2,y2);
             line(x1,y1,x3,y3);
             line(x3,y3,x4,y4);
             line(x2,y2,x4,y4);
	getch();
	closegraph();
}
void yshear(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
	int shx=2;
	cout<<"Before shearing of rectangle"<<endl;
             setcolor(3);
             line(x1,y1,x2,y2);
             line(x1,y1,x3,y3);
             line(x3,y3,x4,y4);
             line(x2,y2,x4,y4);
             cout<<"After shearing of rectangle"<<endl;
             y1=y1+shx*x1;
             y2=y2+shx*x2;
             y3=y3+shx*x3;
             y4=y4+shx*x4;
             setcolor(13);
             line(x1,y1,x2,y2);
             line(x1,y1,x3,y3);
             line(x3,y3,x4,y4);
             line(x2,y2,x4,y4);
	getch();
	closegraph();
}
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int x1=50,y1=50,x2=150,y2=50,x3=50,y3=100,x4=150,y4=100;
	char choice;
	cout<<"X-direction or Y-direction? (x/y): ";
	cin>>choice;
	switch(choice){
		case 'x':
			xshear(x1,y1,x2,y2,x3,y3,x4,y4);
			break;
		case 'y':
			yshear(x1,y1,x2,y2,x3,y3,x4,y4);
			break;
		default:
			cout<<"Invalid input";
	}
    return 0;
}
