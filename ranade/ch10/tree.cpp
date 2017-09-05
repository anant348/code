#include <simplecpp>
void tree(int height,float edgeLength,float angle,float factor){
   if(height == 0) return;
   left(angle);
   forward(edgeLength);
   right(angle);
   tree(height-1,edgeLength*factor,angle*factor,factor);
   left(angle);
   forward(-edgeLength);
   right(2*angle);
   forward(edgeLength);
   left(angle);
   tree(height-1,edgeLength*factor,angle*factor,factor);
   right(angle);
   forward(-edgeLength);
   left(angle);
}
main_program{
  turtleSim();
  left(90);
  tree(5,120,70,.6);
  getClick();

}
