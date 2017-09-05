#include <simplecpp>
using namespace std;
void tree(int h,float width,float height,float x,float y){
   static int i=1;
   if(h == 0){
      Text t1(x-5,y,i);
      t1.imprint();i++;
      return;
   }
   Line lLine(x,y,x-width/4,y-height/2);lLine.imprint();
   Line rLine(x,y,x+width/4,y-height/2);rLine.imprint();
   tree(h-1,width/2,height/2,x-width/4,y-height/2);
   tree(h-1,width/2,height/2,x+width/4,y-height/2);
   Text t(x-5,y,i);i++;t.imprint();
}
main_program{
   initCanvas("tree",550,550);   
   tree(5,500,500,250,500);
   getClick();
}
