#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int coun=0;
int binary_search(int start,int end,int array[],int key){
        
        if(end<start)
           return 0;
        if(array[(start+end)/2]==key)
           return 1;
        
        if(array[(start+end)/2]>key)
        	end=(start+end)/2-1;
        else
        	start=(start+end)/2+1;
        coun++;
        return binary_search(start,end,array,key);           

}
bool Bsearch(int x, int A[], int start, int size){

  if(size == 1) return (A[start] == x);
  int half = size/2;                 // 0 < half < size, because size>1.
coun++;  
if(x < A[start+half]) 
    return Bsearch(x, A, start, half);           // recurse on first half
  else 
    return Bsearch(x, A, start+half, size-half); // recurse on second half.
}

int main()
{
	int a[100000],start=0,end=99999,key;
	for(int i=0;i<100000;i++)
		a[i]=i;
    cout<<"enter number to be searched:-";
	cin>>key;
	coun++;
	/*if(binary_search(start,end,a,key)==1)
		cout<<"found\n";
	else
		cout<<"not found\n";
	cout<<"\ncount="<<coun<<endl;
	*/cout<<Bsearch(key,a,0,100000)<<endl;
     cout<<"\ncount="<<coun<<endl;
}
