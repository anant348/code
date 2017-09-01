#include <bits/stdc++.h>
using namespace std;
int maxIndex(int a[], int n) {
   int maxInd = 0;
   for(int i = 1; i < n; i++){
      if(a[maxInd] < a[i])
         maxInd = i;
   }
   return maxInd;
}
void selectionSort(int a[], int n) {
   for (int i = n; i > 1; i--) {
      swap(a[maxIndex(a, i)], a[i-1]);
   }
}
void print(int a[], int n) {
   for(int i=0;i<n;i++)
      cout << a[i] << " ";
   cout << endl;
}
int main() {
   int n = 100000;
   int a[n];
   for(int i=0;i<n;i++) {
      a[i] = rand();
   }
   selectionSort(a,n);
   print(a,10);
}
