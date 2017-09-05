#include <bits/stdc++.h>
using namespace std;
int main(){
  char input[100],subString[100];
  cin >> input >> subString;
  for(int i = 0; input[i] != '\0'; i++){
     if(subString[0] == input[i]){
        int k;
        for(k = 1; input[i+k] != '\0' && subString[k] != '\0'; k++ ){
           if(subString[k] != input[i+k]) break;
        }
        if(subString[k] == '\0'){
           cout << "string found at index: " << i <<endl;
           break; 
        }
        else if(input[i+k] == '\0') break;
     }
  }
}
