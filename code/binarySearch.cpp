#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
/*bool Bsearch(int x, int A[], int start, int size){
// x : target value to search
// range to search: A[start..start+size-1]
// precondition: size > 0;
// 
  if(size == 1) return (A[start] == x);
  int half = size/2;                 // 0 < half < size, because size>1.
  if(x < A[start+half]) 
    return Bsearch(x, A, start, half);           // recurse on first half
  else 
    return Bsearch(x, A, start+half, size-half); // recurse on second half.
}

int main(){
  const int size=10;
  int A[size]={-1, 2, 2, 3, 10, 15, 15, 25, 28, 30};
  for(int i=0; i<size; i++) cout << A[i] << " ";
  cout << endl;

  for(int x=-10; x<=40; x++)
    cout << x << ": " << Bsearch(x, A, 0, size) <<endl;
}*/
bool bsearch(int a[],int low,int high,int key){
  
  while(low<high){
    int mid=(low+high)/2;
    if(key>a[mid])
      low=mid+1;
    else
      high=mid;
  }
  return a[low]==key;
}
bool bsearch1(int a[],int low,int high,int key){
  int mid=(low+high)/2;
  if(low==high)
    return a[mid]==key;
  if(key>a[mid])
    return bsearch1(a,mid+1,high,key);
  else
    return bsearch1(a,low,mid,key);
}
bool bsearch2(int a[],int start,int size,int key){
  if(size==1)
    return a[start]==key;
  int half=size/2; 
  if(a[start+half]>key)
    return bsearch2(a,start,half,key);
  else
    return bsearch2(a,start+half,size-half,key);
}
int main(){
  int a[10];
  for(int i=0;i<10;i++){
    a[i]=rand()%10;
  }
  sort(a,a+10);
  for(int i=0;i<10;i++)
    cout<<a[i]<<" ";
  cout<<endl;
  for(int x=-1;x<11;x++){
    cout<<x<<" "<<bsearch2(a,0,10,x)<<"\n";
  }

}  
