#include<iostream>
using namespace std;
void merge(int a[],int u[],int v[],int ulength,int vlength){
	for(int i=0,j=0,k=0;k<ulength+vlength;k++){
		if(i<ulength && j<vlength){
			if(u[i]<v[j])
				a[k]=u[i++];
			else
				a[k]=v[j++];
		}
		else if(i<ulength){
			a[k]=u[i++];
		}
		else{
			a[k]=v[j++];
		}
	}
}
    
void mergesort(int a[],int n){
     if(n==1)
       return;
    int ulength=n/2,vlength=n-n/2,u[ulength],v[vlength],k=0;
    for(int i=0;i<ulength;i++)
    	zxu[i]=a[k++];
    for(int i=0;i<vlength;i++)
    	v[i]=a[k++];
    mergesort(u,ulength);
    mergesort(v,vlength);
    merge(a,u,v,ulength,vlength);       
}

int main(){
    int n=100000,a[n];
  for(int i=0;i<n;i++)
    a[i]=n-i;
  mergesort(a,n);
  for(int i=0;i<100;i++)
    cout<<a[i]<<endl;
}
