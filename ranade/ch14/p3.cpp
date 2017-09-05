#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> count(30, 0);
   int n;
   cin >> n;
   vector<double> marks(n);
   for (int i = 0; i < n; i++) {
      cin >> marks[i];
      double mar = marks[i];
      if (mar < .25) {
         count[mar/.05]++;
      }
      else if (mar < .75) {
         count[mar/.025 - 5]++;
      }
      else if (mar < 1) {
         count[mar/.05 + 10]++;
      }
   }
   for (int i = 0; i < 30; i++) {
      double start, ending;
      if (i < 5){
         start = i*.05;
         ending = i*.05 + .05;
      }
      else if (i < 25) {
         start = .25 + (i-5)*.025;
         ending = .25 + (i-5)*.025 + .025;
      }
      else {
         start = .75 + (i-25)*.05;
         ending = .75 + (i-25)*.05 + .05;
      }
      cout << "{[" << start << ", " << ending << "), " << count[i] << "}\n";
   }
}
