#include <bits/stdc++.h>
using namespace std;
bool check(int piles[],int n){
   int flag=0;
   for(int i=0;i<n;i++)
      if(piles[i]!=0){flag++;break;}
   if(flag==0) return false;
   for(int i=0;i<n;i++){
      for(int j=1;j<=piles[i];j++){
         piles[i]-=j;
         int result = check(piles,n);
         piles[i]+=j;
         if(!result)
         {
            piles[n]=i;
            piles[n+1]=j;
            piles[n+2]=-1;
            return true;
         }
         for(int k=0;k<n;k++){
            if(k!=i && piles[k]>=j){
               piles[i]-=j;
               piles[k]-=j;
               int result = check(piles,n);
               piles[i]+=j;
               piles[k]+=j;
               if(!result){
                  piles[n] = i;
                  piles[n+1] = j;
                  piles[n+2] = k;
                  return true;
               }
            }   
         }
      }
   }
   return false;
}
int main(){
   int n;cin>>n;
   int piles[n+3];
   for(int i=0;i<n;i++)
   { 
      cin >> piles[i];
   }
   cout<<endl;
   if(check(piles,n)){
      if(piles[n+2]<0)
         cout << "pick " << piles[n+1] << " from " << piles[n]+1 <<endl;
      else
         cout << "pick " << piles[n+1] << " from " 
            << piles[n]+1 << " and "<< piles[n+2]+1 << endl;
   }
   else
      cout << "lose\n";
}

