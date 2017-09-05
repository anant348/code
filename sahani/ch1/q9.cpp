//:#include <new>
using namespace std;

void fun(int a, int b){
   if(a < 0 && b < 0)
      throw 1;
   else if(a == 0 && b == 0)
      throw 2;

}

int main(){
   //int& *x;
   int a = 5,b = 7,n = 1000000000;
   int *x = new int [10000000000000000];
   /*do{
      cin >> a >> b;
      try{
         fun(a, b);
         break;
      }
      catch(int x){
         if(x == 1)
            cout << "both are less than 0" << endl;
         else
            cout << "both are zero" << endl;
         continue;
      }
   }while(true);*/
   //cout << "main\n";
}
