#include <bits/stdc++.h>
using namespace std;
int finder(int a[],int startOfA,int lengthOfA,int b[],
      int startOfB,int lengthOfB,int k){
   if(lengthOfA==0)
      return b[startOfB+k-1];
   if(lengthOfB==0)
      return a[startOfA+k-1];
   if(k < lengthOfA/2 + lengthOfB/2 + 2){
      if(a[startOfA+lengthOfA/2] < b[startOfB+lengthOfB/2])
         lengthOfB = lengthOfB/2;
      else
         lengthOfA = lengthOfA/2;
   }
   else{
      if(a[startOfA+lengthOfA/2] < b[startOfB+lengthOfB/2]){
         startOfA=startOfA+lengthOfA/2+1;
         k = k - lengthOfA/2 -1;
         lengthOfA=lengthOfA-lengthOfA/2 -1;
      }
      else{
         startOfB=startOfB+lengthOfB/2+1;
         k = k - lengthOfB/2-1;
         lengthOfB=lengthOfB-lengthOfB/2-1; 
      }
   }
   return finder(a,startOfA,lengthOfA,b,startOfB,lengthOfB,k);
}
int main(){
   srand(0);
   int a[10],b[10];
   for(int i=0;i<10;i++){
      a[i] = rand()%10;
   }
   for(int i=0;i<10;i++){
      b[i] = rand()%10;
   }
   sort(a,a+10);sort(b,b+10);
   for(int i=0;i<10;i++)
      cout << a[i]<<" ";
   cout << endl;
   for(int i=0;i<10;i++)
      cout << b[i]<<" ";
   cout << endl;
   for(int i = 1;i<21;i++){
      cout << finder(a,0,10,b,0,10,i) << " ";
   }
   cout << endl;
}





