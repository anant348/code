#include <simplecpp>
int main(){
   int n,N1=1,N2=0,N,temp=0;
   while(cin>>n){
      int check=n+temp*10;
      if(check>25||check<10)
         N = N1;
      else{
         N = N1 + N2; 
      }
      N2 = N1;
      N1 = N;
      temp = n;
   }
   cout << N <<endl;
}
