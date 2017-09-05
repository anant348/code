#include <simplecpp>
void tree(float length,float angle,float f){
   cout<<"tree or not?\n";
   int a;cin>>a;
   if(a==0) return;
   cout << "binary or not ?\n";
   cin>>a;
   if(a==1){
      left(angle);
      forward(length);
      right(angle);
      tree(length*f,angle*f,f);
      left(angle);
      forward(-length);
      right(2*angle);
      forward(length);
      left(angle);
      tree(length*f,angle*f,f);
      right(angle);
      forward(-length);
      left(angle);
   }
   else{
      cout<<"left or right ?\n";
      cin>>a;
      if(a==1){
         left(angle);
         forward(length);
         right(angle);
         tree(length*f,angle*f,f);
         left(angle);
         forward(-length);
         right(angle);
      }
      else{
         right(angle);
         forward(length);
         left(angle);
         tree(length*f,angle*f,f);
         right(angle);
         forward(-length);
         left(angle);

      }
   }
}
main_program{
   turtleSim();
   left(90);
   penUp();
   forward(-100);
   penDown();
   tree(25,60,1);
   getClick();
}
