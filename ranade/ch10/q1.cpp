#include <bits/stdc++.h>
using namespace std;
int  factorial(int n,int value){
   if(n == 0) {return value;}
   value*=n;
   return factorial(n-1,value);
}
int main(){
  cout << factorial(5,1);
}
