#include <simplecpp>
void triangle(float l){
	repeat(3){
		forward(l);
		left(120);
	}
}
void serpenski(int n,float l){
	if(n==0)
      return;
  else{  
    triangle(l)
    serpenski(n-1,l/2)
    forward(l/2)
    serpenski(n-1,l/2)
    left(120)
    penUp()
    forward(l/2)
    right(120)
    penDown()
    serpenski(n-1,l/2)
    left(60)
    forward(-l/2)
    right(60)
    
}
main_program{
	turtleSim();
     serpenski(3,200);
}