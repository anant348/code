#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int *a,int *b){
  int temp=*a;*a=*b;*b=temp;
}

int partition(int a[],int pivot,int i,int j){
  int temp=a[pivot],n=j+2;
  while(i<=j){
  	if(a[i]>=temp){
  		for( ;j>=i;j--){
  			if(a[j]<temp){
  				swap(&a[i],&a[j]);
  				j--;i++;break;
  			}
  		}
  	}
  	 else i++;
  }
  swap(&a[i],&a[n-1]);
  return i;
}

int main(){
    int n=10;
	int a[n];
	for(int i=0;i<n;i++)
		a[i]=rand()%50;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
    cout<<endl;
    swap(&a[n/2],&a[n-1]);
    int p=partition(a,n-1,0,n-2);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"partition= "<<p<<endl;
    
}
