#include <bits/stdc++.h>
using namespace std;

int main() {
   int n = 10;
   queue<int> a;
   for (int i = n; i > 1; i--) {
      a.push(i);
      int fron = a.front();
      a.pop();
      a.push(fron);
   }
   a.push(1);
   vector<int> ans;
   while (!a.empty()) {
      ans.push_back(a.front());
      a.pop();
   }
   for (vector<int>::reverse_iterator m = ans.rbegin(); m != ans.rend(); m++) {
      cout << *m << " ";
   }
}
