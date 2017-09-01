#include<graphics.h>
#include<stdio.h>
#include<math.h>
void square(float x,float y,float l){
rectangle(x,y,x+l,y+l);
}
void ser(int n,float x,float y,float l){
if(n==0)
return ;
square(x+l/3,y+l/3,l/3);
ser(n-1,x,y,l/3);ser(n-1,x+l/3,y,l/3);ser(n-1,x+2*l/3,y,l/3);
ser(n-1,x,y+l/3,l/3);ser(n-1,x,y+2*l/3,l/3);ser(n-1,x+2*l/3,y+l/3,l/3);ser(n-1,x+2*l/3,y+2*l/3,l/3);
ser(n-1,x+l/3,y+2*l/3,l/3);
}
int main(){
    int gd=0,gm=0,c,i,j;char e=32;float k=0;
    initgraph(&gm,&gd,"");
    cleardevice();//setbkcolor(7);setcolor(0);
    ser(7,0,0,500);
    delay(100000);
}
