#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int n=100000,a[n],max[n],temp[n];
	for(int i=0;i<n;i++)
		a[i]=rand()%10;
	int k=0,maxlength,templength;
	for(int i=0;i<n;i++){
		if(i==0)
			max[k++]=a[i];
		else
			if(max[k-1]<a[i])
		    	max[k++]=a[i];
	}
	maxlength=k;
	for(int j=1;j<n;j++){
    k=0;
    for(int i=j;i<n;i++)
	{
		if(i==j)
			temp[k++]=a[i];
		else{
		       if(temp[k-1]<a[i])
		    	temp[k++]=a[i];

	        }
    }

    if(k>maxlength){
    	for(int x=0;x<k;x++)
    		max[x]=temp[x];
        maxlength=k;
     }

    }
    cout<<maxlength;
    cout<<endl;
}
