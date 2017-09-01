#include<iostream>
using namespace std;

void merge_sort(int array[],int n)
{
    if(n==1)
        return;
    int a[n/2],b[n-n/2];
    for(int i=0;i<n/2;i++)
        a[i]=array[i];
    for(int i=n/2;i<n;i++)
        b[i-n/2]=array[i];
    merge_sort(a,n/2);
    merge_sort(b,n-n/2);
    int i=0,j=0,k=0;
    while(k<n)
    {
        if(i>=n/2)
            array[k++]=b[j++];
        else if(j>=n-n/2)
            array[k++]=a[i++];
        else{
        if(a[i]<b[j])
            array[k++]=a[i++];
        else
            array[k++]=b[j++];
        }
    }

}
int main()
{int a[100000];
for(int i=0;i<100000;i++)
{
    a[i]=100000-i;
}
merge_sort(a,100000);
for(int i=74000;i<75000;i++)
{
    cout<<a[i]<<endl;
}
}

