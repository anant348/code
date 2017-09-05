#include <bits/stdc++.h>
using namespace std;
int f1(int n){
   if(n==0 || n==1 || n==2)
      return 1;
   else
      return f1(n-1)+f1(n-2)+f1(n-3);
}
int f2(int n){
   if(n==0 || n==1 || n==2) return 1;
   int a=1,b=1,c=1,d;
   for(int i=1;i<=n-2;i++){
      d = a+b+c;
      a=b;
      b=c;
      c=d;
   }
   return d;
}
int main(){
   int n;
   cin>>n;
   cout << f1(n) << " " << f2(n) <<endl;
}
