#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> a;
   int n = 10;
   for (int i = 0; i < n; i++) {
      a.push_back(rand() % 100);
   }
   random_shuffle(a.begin(), a.end());
   int maxSoFar = a[0], minSoFar = a[0];
   for (int i = 1; i < n; i++) {
      maxSoFar = max(maxSoFar, a[i]);
      minSoFar = min(minSoFar, a[i]);
   }
   for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
   }
   cout << endl;
   cout << minSoFar << " " << maxSoFar << endl;
}
