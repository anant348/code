#include <simplecpp>
#define unit 100   // 1 unit = 100px

void scale_marker(double originx,double originy,double gapx,double gapy){
  Circle c(0,0,5);
  double x=0,y=0,stepx=(gapx*unit),stepy=(gapy*unit);
  repeat(5){
     x+=stepx;
     y+=stepy;
     c.moveTo(originx+x,originy);
     c.imprint(originx-x);
     c.moveTo(originx-x,originy);
     c.imprint();
     c.moveTo(originx,originy+y);
     c.imprint();
     c.moveTo(originx,originy-y);
     c.imprint();
  }
} 

main_program{
  initCanvas("sine curve",700,700);
  double const originx=20,originy=350;
  Line l1(originx,0,originx,700);Line l2(0,originy,700,originy);
  scale_marker(originx,originy,1.5714,.25);
  double const step=1;  
  double x=originx,y=originy;
  Circle c(originx,originy,1);
  c.penDown();
  repeat(630){
    y=originy-sin(2*((x-originx)/unit))*unit; // graph of sin(2x)
    c.moveTo(x,y);
    x+=step;
  }
  getClick();
}