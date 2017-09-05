#include <bits/stdc++.h>
using namespace std;

int main(int argc,  char *argv[]) {
   double a,b;
   char op;
   stringstream(argv[1]) >> a;
   stringstream(argv[3]) >> b;
   if(argv[2][0] == '+')
      cout << a + b;
   else if(argv[2][0] == '-')
      cout << a-b;
}

