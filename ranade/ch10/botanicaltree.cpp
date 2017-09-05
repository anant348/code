#include <simplecpp>
void tree(int n,float l,float a,float f){
   if(n==0)return;
   forward(l);
   left(a);
   tree(n-1,l*f,a,f);
   right(a);
   forward(l/2);
   right(a);
   tree(n-1,l*f,a,f);
   left(a);
   forward(-3*l/2);
}
int main(){
   turtleSim();
   left(90);
   penUp();
   forward(-250);
   penDown();
   tree(8,70,25,.8);
   getClick();
}
