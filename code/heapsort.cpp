#include <bits/stdc++.h>
using namespace std;
int heaplength;
void swap(int &a,int &b){
	int temp=a;a=b;b=a;
}
void heapify(int a[],int i){
	int largest;
	if(2*i<=heaplength && a[2*i]>a[i]){
        largest=2*i;
	}
	else largest=i;
	if(2*i+1<=heaplength && a[2*i+1]>a[largest])
		largest=2*i+1;
	if(largest!=i){
		swap(a[i],a[largest]);
		heapify(a,largest);
	}
}
void form(int a[]){
	for(int i=heaplength/2;i>=1;i--)
		heapify(a,i);
}
void heapsort(int a[]){
	form(a);
	for(int i=heaplength;i>=2;i--){
		swap(a[1],a[heaplength]);
        heaplength--;
		heapify(a,1);
	}
}
int main(){
	int n=100000,a[n+1];heaplength=n;
	for(int i=1;i<=n;i++)
	   a[i]=rand()%1000;
	heapsort(a);
	for(int i=1;i<100;i++)
	   cout<<a[i]<<endl;    
}
