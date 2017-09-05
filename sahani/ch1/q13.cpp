#include <bits/stdc++.h>
using namespace std;

template <class T>
void makeArray(T* &x, int size) {
   x = new T [size];  
}

template <class T>
void changeLength(T* &x, int old, int newL) {
   T *newArr = new T [newL];
   int range = min(old, newL);
   for(int i = 0; i < range; i++)
      newArr[i] = x[i];
   delete [] x;
   x = newArr;
}

int main() {
   int *a;
   makeArray(a, 10);
   for(int i = 0; i < 10; i++)
      cout << (a[i] = rand() % 100) << " ";
   cout << endl;
   changeLength(a, 10, 5);
   for(int i = 0; i < 5; i++)
      cout << a[i] << " ";
   cout << endl;
}
