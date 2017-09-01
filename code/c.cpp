#include<bits/stdc++.h>
using namespace std;
/*struct vector{
  int a,b;
  vector(float c,float d){a=c;b=d;}
  vector(){a=b=0;}
  vector sum()
  {   //vector v(4,5);
      return vector(4,5);

  }
};
int main(){
  vector v(1,2),v1;
  v1=v.sum();
  cout<<v1.a;
}*/
void swap(int &a,int &b){
  int temp=a;a=b;b=temp;
}

void isort(int a[],int n,int length){
for(int k=0;k<length;k++)
for(int i=k;i<n;i+=length){
    for(int j=i;j>k && a[j]<a[j-length];j-=length)
        swap(a[j],a[j-length]);
}
}
void shellsort(int a[],int n){
  int v=2;
  while(n/v!=0){
    isort(a,n,n/v);
    v*=2;
  }

}
int main(){
  int n=100000,a[n];
  for(int i=0;i<n;i++)
    a[i]=n-i;
  shellsort(a,n);
  //sort(a,a+n);
  for(int i=0;i<100;i++)
    cout<<a[i]<<endl;
}
