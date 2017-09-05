#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
   cout << a << " " << b << endl;
   if(a%b==0) return b;
   else return gcd(b,a%b);
}
int main(){
   int a,b;
   cin>>a>>b;
   gcd(a,b);
}
