#include<iostream>
using namespace std;

bool bsearch(int a[],int n,int key)
{
    int front=0,end=n-1;
    while(true)
    {
        if(end<front)
            return false;
        else if(a[(front+end)/2]==key)
           return true;
        else if(a[(front+end)/2]>key)
            end=(front+end)/2-1;
        else
            front=(front+end)/2+1;
    }
}
int main()
{
    int q[10]={1,6,6,8,10,13,17,19,20,21};
    if(bsearch(q,10,0))
        cout<<"found";
    else
        cout<<"not found";
}
