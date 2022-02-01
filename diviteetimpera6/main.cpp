#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#define pi 3.141577889
using namespace std;

void Koch(int x1, int y1, float alfa, int xn, int yn, int n)

{
    int d=sqrt((x1-xn)*(x1-xn)+ (y1-yn)*(y1-yn))/3;
    int x2=x1+cos(alfa)*d;
    int y2=y1+sin(alfa)*d;
    int x3=x2+cos(alfa+pi/3)*d;
    int y3=y2+sin(alfa+pi/3)*d;
    int x4 = x2 + d*cos(alfa);
    int y4 = y2 + d*sin(alfa);
    int x5 = xn;
    int y5 = yn;

    if (n==1){
        line(x1,y1,x2,y2);
         line(x2,y2,x3,y3);
          line(x3,y3,x4,y4);
           line(x4,y4,x5,y5);
    }
n--;


	Koch(x1,y1, alfa, x2,y2,n);
	Koch(x2,y2, alfa+pi/3, x3, x3,n);
	Koch(x3,y3, alfa-pi/3, x4, x4,n);
	Koch(x4,y4, alfa, x5,y5,n);






}



int main()

{

    int gd,gm;

   gd=gm=0;
   initgraph(&gd,&gm,"");
   setcolor(RED);
   setfillstyle(1,WHITE);


    Koch(0,200, 0, 600, 200, 3);

    int x;
    cin >> x;

    return 0;

}
