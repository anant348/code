
#include<iostream>
#include<cmath>
#include<graphics.h>
using namespace std;
void koch(int n,float xl,float yl,float xr,float yr){
   float x1,y1,x2,y2,x3,y3,xc,yc;
   if(n==1) {line(xl,yl,xr,yr);return;}
   x1=(2*xl+xr)/3;
   y1=(2*yl+yr)/3;
   x2=(xl+2*xr)/3;
   y2=(yl+2*yr)/3;
   xc=(xl+xr)/2;
   yc=(yl+yr)/2;
   x3=xc+sqrt(3)*(y2-yc);
   y3=yc+sqrt(3)*(xc-x2);

   koch(n-1,xl,yl,x1,y1);
   koch(n-1,x1,y1,x3,y3);
   koch(n-1,x3,y3,x2,y2);
   koch(n-1,x2,y2,xr,yr);
   //c;
}



int main(){
    int gd=0,gm=0,c,i,j;char e=32;float k=0;
    initgraph(&gm,&gd,"");
    for(int i=1;i<8;i++)
    {cleardevice();
    koch(4,10,300,650,50);
    delay(3000);
}
delay(100000);
}
