#include <simplecpp>
main_program{
   initCanvas();
   int const originx=30,originy=30,side=20;
   int x1=originx,y=originy,x2=originx+side,a=side;
   Rectangle r1(x1,y,side,side),r2(x2,y,side,side);
   r1.setColor(COLOR("red"));
   r2.setColor(COLOR("blue"));
   r1.setFill(true);
   r2.setFill(true);
   repeat(8){
      repeat(4){
         r1.imprint();
         r2.imprint();
         r1.move(2*side,0);
         r2.move(2*side,0);
      }
      x1+=a;
      a=-a;
      x2+=a;
      y+=side;
      r1.moveTo(x1,y);
      r2.moveTo(x2,y);
   }
   r1.hide();
   r2.hide();
   getClick();
}
