#include <simplecpp>
void hilbert(int level,int l,int angle){
   if(level==0)return;
   left(angle);
   hilbert(level-1,l,-angle);
   forward(l);
   right(angle);
   hilbert(level-1,l,angle);
   forward(l);
   hilbert(level-1,l,angle);
   right(angle);
   forward(l);
   hilbert(level-1,l,-angle);
   left(angle);
}
int main(){
   turtleSim();
   left(90);
   penUp();
   forward(-200);
   penDown();
   right(90);
   hilbert(6,10,90);
   getClick();
}
