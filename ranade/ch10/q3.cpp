#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long long int gcd(long long int a,long long int b){
   if(a%b==0)
      return b;
   else
      return gcd(b,a%b);
}
void solve(long long int a,long long int &x,long long int b,long long int &y,long long int c){
  static int i;
  i++;
   if(a==1){
     y=1;
     x=c-b;
     cout<<" "<<i;
     return;
  }
  if(a==0){
     x=1;
     y=c/b;
     cout<<"yec\n";
     return;
    
  }
  if(b==1){ 
     x=1;
     y=c-a;
     cout<<" "<<i;
     return;
  }
  if(b==0){
     y=1;
     x=c/a;
     //cout<<" "<<i;
     return;
  }
  if(abs(a)>abs(b)){
     if(b<0){
        if(a>0){
           solve(a+b,x,b,y,c);
           y=y+x;
        }
        else{
           solve(a-b,x,b,y,c);
           y=y-x;
        }
     }
     else{
        if(a>0){
           solve(a-b,x,b,y,c);
           y=y-x;
        }
        else{
           solve(a+b,x,b,y,c);
           y+=x;
        }
     }
  }
  else{
     if(a<0){
        if(b>0){
           solve(a,x,a+b,y,c);
           x+=y;
        }
        else{
           solve(a,x,b-a,y,c);
           x=x-y;
        }
     }
     else{
       if(b>0){
          solve(a,x,b-a,y,c);
          x=x-y;
       }
       else{
          solve(a,x,b+a,y,c);
          x+=y;
       }
     }
  }
}  
int main(){
   long long int a,b,c;
   while(cin>>a>>b>>c){
      cout << a <<" "<<b<<" "<<c; 
      if(c%gcd(a,b)==0){
         long long int x,y;
         solve(a,x,b,y,c);
         cout<<":: "<<x<<" "<<y<<" "<<a*x+b*y;
         if((a*x+b*y)!=c)
         { cout<<" no";exit(0);}
      }
      else
         cout<<" no solution";
      cout<<endl;
   }
}
