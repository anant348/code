#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
   int nMatched=0;
   char charRead;
   while(true){
      cin >> charRead;
      if(nMatched == 0){
         if(charRead == 'a') nMatched=1;
      }
      else if(nMatched == 1){
         if(charRead == 'b') nMatched = 2;
         else if(charRead == 'a') nMatched == 1;
         else nMatched = 0; 
      }
      else if(nMatched == 2){
         if(charRead == 'r') nMatched = 3;
         else if (charRead == 'a') nMatched = 1;
         else nMatched = 0; 
      }
      else if(nMatched == 3){
         if(charRead == 'a') nMatched = 4;
         else nMatched = 0;
      }
      else if(nMatched == 4){
         if(charRead == 'a') nMatched = 1;
         else if(charRead == 'b') nMatched = 2;
         else if(charRead == 'c') nMatched = 5;
         else nMatched = 0;
      }
      else if(nMatched == 5){
         if(charRead == 'a') nMatched = 6;
         else nMatched = 0;
      }
      else if(nMatched == 6){
         if(charRead == 'd') nMatched = 7;
         else if(charRead == 'b') nMatched = 2;
         else if(charRead == 'a') nMatched = 1;
         else nMatched = 0;
      }
      else if(nMatched == 7){
         if(charRead == 'a') nMatched = 8;
         else nMatched = 0;
      }
      else if(nMatched == 8){
         if(charRead == 'b') nMatched = 9;
         else if(charRead == 'a') nMatched = 1;
         else nMatched = 0;
      }
      else if(nMatched == 9){
         if(charRead == 'r') nMatched = 10;
         else if(charRead == 'a') nMatched = 1;
         else nMatched = 0;
      }
      else {
         if(charRead == 'a') break;
         else nMatched = 0;
      }
   }
}
