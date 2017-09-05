#include <bits/stdc++.h>
using namespace std;
int bSearch(int a[],int key,int start,int size){
   if(size <= 0) return -1;
   while(size>1){
      int half = size/2;
      if(a[start+half] > key) size = half;
      else{
         size -= half;
         start+=half;
      }
   }
   if(a[start]==key) return start;
   else return -1;  
}
int find(int a[],int start,int size){
   while(size>1){
      int half = size/2;
      if(a[start+half] < a[start]) size = half;
      else if(a[start+half] > a[start+size-1]){
         start = start+half;
         size-=half;
      }
      else return start+size-1;
   }
   return start;
}
int modBSearch(int a[],int key,int start,int size){
   if(size<=0) return -1;
   int p = find(a,start,size);
   int result = bSearch(a,key,start,p-start+1);
   if(result == -1){
      if(p+1<=start+size-1)
        result = bSearch(a,key,p+1,start+size-p-1);
   }
   return result;
}
int main(){
   int a[] = {27,29,35,42,5,15};
   for(int i=0;i<6;i++)
    cout << modBSearch(a,41,0,6) << endl;
}
