#include <bits/stdc++.h>
using namespace std;

void last_arrayBuilder(int last[],int ASCII_LIMIT,char subString[]){
   for(int i = 0; i < ASCII_LIMIT; i++){
      last[i] = -1;
   }
   int l_subString = strlen(subString);
   for(int i = 0; i < l_subString; i++){
      last[subString[i]] = i;
   }
}

int find_subString(char string[], char subString[]){
   int ASCII_LIMIT = 130;
   int last[ASCII_LIMIT];
   last_arrayBuilder(last,ASCII_LIMIT,subString);
   int l_string = strlen(string), l_subString = strlen(subString);
   for(int i = l_subString-1,j = l_subString-1; i < l_string; ){
      if(string[i] == subString[j]){
         if(j == 0) return i;
         i--;j--;
      }
      else{
         if(last[string[i]] < j)
            i = i + l_subString - last[string[i]] - 1;
         else
            i = i + l_subString - j;
         j = l_subString - 1 ;
      }
   }
   return -1;
}
int main(){
   char string[100],subString[100];
   cin >> string >> subString;
   cout << find_subString(string,subString) << endl;
}
