#include <bits/stdc++.h>
using namespace std;

void _reverse(vector<int> &a, int start) {
   int l = a.size() - start;
   for (int i = 0; i < l/2; i++) {
      swap(a[start + i],a[a.size()- 1 - i]);
   }
}

bool nextPermutation(vector<int> &a) {
   int dip, i;
   for (i = a.size() - 1; i > 0; i--) {
      if (a[i-1] < a[i]) {
         dip = i - 1;
         break;
      }
   }
   if (i == 0)
      return false;
   for (i = a.size() - 1; i > dip; i--) {
      if (a[i] > a[dip]) {
         swap(a[i], a[dip]);
         break;
      }
   }
   _reverse(a, dip + 1);
   return true;
}

void print(vector<int> &a) {
   for (int i = 0; i < a.size(); i++){
      cout << a[i] << " ";
   }
   cout << endl;
}

int main() {
      vector<int> a;
      int n = 10;
      for(int i = 0; i < n; i++)
         a.push_back(i);
      nextPermutation(a);
      print(a);
}
