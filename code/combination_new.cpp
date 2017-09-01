#include <bits/stdc++.h>
using namespace std;

void print(int a[], int n) {
   for(int i = 0; i < n; i++)
      cout << a[i] << " ";
   cout << endl;
}

bool isPalindrome(string &a) {
   for (int i = 0; i < a.length() / 2; i++) {
      if(a[i] != a[a.length() - 1 - i])
         return false;
   }
   return true;
}

bool checkPartition(vector<string> &a) {
   for(int i = 0; i < a.size(); i++) {
      if(!isPalindrome(a[i]))
         return false;
   }
   return true;
}

void combination(string &inp, int a[], int n, int r) {

   if (r > n)
      return;
   int i;
   if(r == 1)
      i = 0;
   else
      i = a[r-2]+1;

   for ( ; i < n; i++) {
      a[r-1] = i;
      vector<string> part;
      part.push_back(inp.substr(0, a[0]+1));
      for(int j = 0; j < r - 1; j++) {
         part.push_back(inp.substr(a[j]+1, a[j+1]-a[j]));
      }
      part.push_back(inp.substr(a[r-1]+1));
      if (checkPartition(part)) {
         for(int j=0;j<part.size();j++)
            cout << part[j] << " ";
         cout << endl;
      }
      combination(inp, a, n, r + 1);
   }

}

int main() {
   string inp ="geeks";
   int n = inp.size();
   int a[n];
   combination(inp, a, n-1, 1);
}
