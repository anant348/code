#include <bits/stdc++.h>
using namespace std;
int c=0,we[]={9,13,153,50,15,68,27,39,23,52,11,32,24,48,73,42,43,22,7,18,4,30},price[]={150,35,200,160,60,45,60,40,30,10,70,30,15,10,40,70,75,80,20,12,50,10},maxweight=400;

int ks(int c,int i,int n){
   if(i >= n)
      return 0;
   else if(we[i] > c)
      return ks(c,i+1,n);
   else
      return max(ks(c,i+1,n),price[i]+ks(c-we[i],i+1,n));
}
void check(int a[],int r){
   int prices=0,sum=0;
   for(int i=0;i<=r-1;i++){
    sum+=we[a[i]];
    if(sum>maxweight)
        return ;
    prices+=price[a[i]];
   }
   if(prices>c)
    c=prices;
   //return true;
}
void combination(int a[],int r,int max,int n){
   if(r==max+1){

    return;
   }
   else if(r==1){
    for(int i=0;i<n;i++){
        a[r-1]=i;
        //for(int i=0;i<=r-1;i++) cout<<a[i]<<" ";
        //cout<<endl;
        (check(a,r));
        combination(a,r+1,max,n);
   }
   }
   else{
    for(int i=a[r-2]+1;i<n;i++){
    a[r-1]=i;
   // for(int i=0;i<=r-1;i++) cout<<a[i]<<" ";
     //   cout<<endl;
     (check(a,r));
    combination(a,r+1,max,n);
    }
   }
}


int main()
{   int n=22;

    int a[n];

    combination(a,1,n,n);cout << c;
    cout << ks(maxweight,0,n);
}
