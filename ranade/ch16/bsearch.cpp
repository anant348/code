#include <bits/stdc++.h>
using namespace std;
bool bSearch(int a[],int key,int start,int size){
   if(size == 1) return a[start]==key;
   int half=size/2;
   if(a[start+half]>key)
      bSearch(a,key,start,half);
   else
      bSearch(a,key,start+half,size-half);
}
bool bSearchByLoop(int a[],int key,int start,int size){
   if(size == 0)return false;
   int low = start,high = start+size-1;
   while(size>1){
      int half = size/2;
      if(a[start+size]>key)
         size = half;
      else{
         size = size - half;
         start+=half;
      }
   }
   return a[start]==key;
}

int main(){
   int a[100];
   while(true){
      for(int i=0;i<100;i++)
         a[i]=rand();
      sort(a,a+100);
      int temp;
      if(bSearch(a,temp=rand(),0,100)!=bSearchByLoop(a,rand(),0,100)){
         for(int i=0;i<100;i++)cout<<a[i]<<" ";
         cout<<endl<<temp<<"  key"<<endl;
      }
   }
}
