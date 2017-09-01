#include<iostream>
#include<cmath>
#include<graphics.h>
using namespace std;
void koch(int n,float x1,float y1,float x2,float y2){
   if(n==0) {line(x1,y1,x2,y2);return;}
   koch(n-1,x1,y1,(2*x1+x2)/3,(2*y1+y2)/3);
   float m=(y2-y1)/(x2-x1);m=-1/m;
   m=atan(m);
   float r=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))/3;
   r=r*sqrt(3)/2;
   if(m>=0){
   if(x2-x1>0) r=-r;
     }
   else{
   if(x2-x1<0) r=-r;
   }
   float x=(x1+x2)/2+r*cos(m),y=(y1+y2)/2+r*sin(m);
//   float y=(y1+y2)/2+r*sin(-m);
   koch(n-1,(2*x1+x2)/3,(2*y1+y2)/3,x,y);
   koch(n-1,x,y,(2*x2+x1)/3,(2*y2+y1)/3);
   koch(n-1,(2*x2+x1)/3,(2*y2+y1)/3,x2,y2);
   //c;
}



int main(){
    int gd=0,gm=0,c,i,j;char e=32;float k=0;
    initgraph(&gm,&gd,"");
    for(int i=0;i<8;i++)
    {cleardevice();
    koch(3,10,300,650,400);
    delay(3000);
}
delay(100000);
}
