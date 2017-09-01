#include <bits/stdc++.h>
using namespace std;
#define n 10 
#define r 4
int dp[n+1][r+1];
int main(){
   for(int i = 0; i<=n ;i++){
      for(int j=0;j<=min(i,r);j++){
         if(i==j || j==0)
            dp[i][j]=1;
         else
            dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
      }
   }
   cout << dp[n][r] <<endl;
}
