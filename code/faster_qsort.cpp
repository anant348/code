#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int *a,int *b){
  int temp=*a;*a=*b;*b=temp;
}
int partition(int a[],int p,int r){
  int pivot=a[r];
  int i=p,j=r-1;
  while(i<j){
    if(a[i]>=pivot){
      while(j>i){
        if(a[j]<pivot){swap(&a[i],&a[j]);j--;break;}
        j--;
      }
    }
    else
      i++;
    }
    if(i==j){
      if(a[i]<pivot)
        i++;
    }
    swap(&a[i],&a[r]);
    return i;
}

void qsort(int a[],int p,int r){
  if(r-p+1==0 || r-p+1==1)
   return;
  int i=partition(a,p,r);
  qsort(a,p,i-1);qsort(a,i+1,r);
}
int main()
{
int s[100000];char a[100];

for(int i=0;i<100000;i++)
s[i]=100000-i;
/*for(int i=1;i<100000;i++)
for(int j=0;j<100000-i;j++)
{if(s[j]>s[j+1])
{int temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
}
}*/
qsort(s,0,99999);
//sort(s,s+100000);
for(int l=0;l<100;l++)
cout<<s[l]<<endl;

}
