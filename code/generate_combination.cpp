#include <iostream>
using namespace std;
void combination(int a[],int n,int r) {
   if(r == n+1) return;
   for(int i = a[r-1]+1; i <= n;i++) {
      a[r] = i;
      for(int i = 1;i<=r;i++)
         cout << a[i] << " ";
      cout <<endl;
      combination(a,n,r+1);
   }
}
int main() {
   int n;
   cin >> n;
   int a[n+1];
   a[0] = 0;
   combination(a,n,1);
}
