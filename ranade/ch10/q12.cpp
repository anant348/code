#include <simplecpp>
using namespace std;
void draw(int n,float l,float a,float f){
   if(n==1 || n==2)return;
   right(a);
   forward(l);
   left(a);
   draw(n-1,l*f,a*f,f);
   right(a);forward(-l);left(2*a);
   forward(l);
   right(a);
   draw(n-2,l*f,a*f,f);
   left(a);
   forward(-l);
   right(a);
}
int main(){
   turtleSim();
   right(90);
   penUp();
   forward(-200);
   penDown();
   draw(6,100,60,.7);
   getClick();
}
