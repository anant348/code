#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &a) {
   for (int i = 1; i < a.size(); i++) {
      for (int j = i; j > 0 && a[j] < a[j-1]; j--) {
            swap(a[j],a[j-1]);

      }
   }
}
int main() {
   vector<int> a(10000);
   for (int i = 0; i < a.size(); i++) {
      a[i] = rand();
   }
   insertionSort(a);
   for(int i=0;i<20;i++)
      cout << a[i] << " ";
   cout<<endl;
}
