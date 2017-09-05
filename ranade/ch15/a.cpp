#include <iostream>
using namespace std;
class A {
   virtual void f(){
      cout << "a\n";
   }
};
class B:public A{
   virtual void f(){
      cout << "b\n";
   }
   public:
   void fun(){
      f();
   }
};
void f(int n){
   if(n==10)return;
   static int a = 0;
   a++;
   cout << a << endl;
   f(++n);
}
int main() {
   static int a=5;
   cout << a;
   f(1);
}

