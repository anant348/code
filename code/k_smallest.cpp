#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
void swap(int *a,int *b){
  int temp=*a;*a=*b;*b=temp;
}

int partition(int a[],int low,int high){
  int temp=a[(low+high)/2],i=low,j=high-1;
  swap(&a[(low+high)/2],&a[high]);
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
  swap(&a[i],&a[high]);
  return i;
}
int finder(int a[],int k,int low,int high){
	int p=partition(a,low,high);
	if(p==k)
		return p;
	if(p>k)
	    return finder(a,k,low,p-1);
	else
	    return finder(a,k,p+1,high);
}
int main(){
	long long int n=100000,k;
	int a[n];
	//cout<<"enter value of k:-";
	k=1;
	for(int i=0;i<n;i++)
	a[i]=rand();
	cout<<a[k-1];
	//for(int i=0;i<n;i++)
		//cout<<a[i]<<" ";
	//cout<<endl;
	//cout<<a[finder(a,k-1,0,n-1)];
	sort(a,a+n);
	cout<<endl<<a[k-1]<<endl;
    //for(int i=0;i<n;i++)
	//	cout<<a[i]<<" ";
	cout<<endl;


}
