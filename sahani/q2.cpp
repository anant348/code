#include <bits/c++.h>
using namespace std;
template <class T>
int count(T a[],T value,int n){
   int count = 0;
   for(int i=0; i<n; i++){
      if(a[i] == value)
         count++;
   }
   return count;
}
