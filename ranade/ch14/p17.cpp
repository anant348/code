#include <bits/stdc++.h>
using namespace std;

vector<int> operator*(vector<int> &a, vector<int> &b) {
   vector<int> ans(a.size() + b.size() - 1, 0);
   for (int i = 0; i < a.size(); i++) {
      for (int j = 0; j < b.size(); j++) {
         ans[i+j] += a[i]*b[j];
      }
   }
   return ans;
}
vector<int> operator+(int c, vector<int> const &a) {
      vector<int> r(a);
      r[0] += c;
      return r;
}



vector<int> composition(vector<int> &a, vector<int> &b) {
   int degree = a.size() - 1;
   vector<int> ans(1,0);
   for (int i = degree; i >= 0; i--) {
      ans = a[i] + ans*b;
   }
   return ans;
}
void print(vector<int> const &a) {
   for (int i = 0; i < a.size(); i++) {
      cout << i  << "---" << a[i] << endl;
   }
}
int main() {
   vector<int>a,b;
   int n=100;
   for(int i=0;i<n;i++){
      a.push_back(rand()%100+1);
      b.push_back(rand()%100+1);
   }

   composition(a,b);
}
