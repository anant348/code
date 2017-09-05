#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void reverse(char buff[], int i, int j) {
   int l = j-i+1;
   for(int k = 0; k < l/2; k++) {
      swap(buff[i+k], buff[j-k]);
   }
}

int main() {
   char buff[100];
   cin.getline(buff,100);
   int l = strlen(buff);
   int start = 0, end = 0;
   bool startFlag = false;
   for(int i = 0; i < l; i++) {
      if(buff[i] != ' '){
         if(startFlag == false){
            start = i;
            startFlag = true;
         }
         else if(i == l-1)
            reverse(buff, start, l-1);
      }

      else {
         if(startFlag == true) {
            end = i-1;
            startFlag = false;
            reverse(buff, start, end);
         }
      }

   }
   cout << buff;
}
