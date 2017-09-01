#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;*a=*b;*b=temp;
}
int main()
{
	int n;
	cin>>n;
	int a[n],r=n-1;
	for(int i=0;i<n;i++)
		{a[i]=rand()%100;cout<<a[i]<<" ";}
	int temp=a[r];
	cout<<endl<<temp<<endl;
	int i=0,j=n-2;
	while(i<j){
		if(a[i]>=temp){
			while(j>i){
				if(a[j]<temp){swap(&a[i],&a[j]);j--;break;}
				j--;
			}
		}
		else
			i++;
    }
    if(i==j){
    	if(a[i]<temp)
    		i++;
    }
    swap(&a[i],&a[r]);
    cout<<"partition index :"<<i<<endl;
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
	

}