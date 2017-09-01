#include<iostream>
//#include<algorithm>
#include<cstdlib>
using namespace std;
void swap(int &a,int &b){
  int temp=a;a=b;b=temp;
}
/*
int partition(int a[],int i,int j){
  int temp=a[j],k=j;
  j--;
  while(i<=j){
    if(a[i]>=temp){
       while(j>=i){
          if(a[j]<temp){
              swap(a[i],a[j]);i++;j--;break;
          }
          j--;
       }
    }
    else i++;
  }
  swap(a[i],a[k]);
  return i;
}
*/
int partition_(int a[],int i,int j){
  int pivot = a[j], k = j;
  j--;
  while (i <= j) {
   if (a[i] >= pivot && a[j] < pivot) {
      swap(a[i], a[j]);
   }
   if (a[i] < pivot)
      i++;
   if (a[j] >= pivot)
      j--;

  }
  swap(a[i],a[k]);
  return i;
}
void qsort(int a[],int i,int j){
 if(j-i+1<=1)
    return;
 int k=partition_(a,i,j);
 qsort(a,i,k-1);
 qsort(a,k+1,j);
}
int main(){

  for(int k = 100000;k<=100000;k++){
     int a[k];

     for(int i=0;i<k;i++)
        a[i]=1;
        qsort(a,0,k-1);
  }
  //for(int i=0;i<n;i++)
    //cout<<a[i]<<endl;
}
