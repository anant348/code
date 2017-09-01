#include<iostream>
using namespace std;
int a[3][3];
bool check(){
    int temp;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++)
           sum+=a[i][j];
        if(i==0)
            temp=sum;
        if(sum!=temp)
            return false;
    }
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++)
            sum+=a[i][j];
        if(sum!=temp)
            return false;

    }
    int sum=0;
    for(int i=0;i<3;i++)
        sum+=a[i][i];
    if(sum!=temp)
        return false;
    sum=0;
    for(int i=0;i<3;i++)
        sum+=a[i][2-i];
    if(sum==temp)
        return true;
    else
        return false;
}
bool check1(int row,int column){
   for(int i=0;i<row;i++)
    for(int j=0;j<3;j++)
        if(a[i][j]==a[row][column])
          return false;
   int i=row;
   for(int j=0;j<column;j++)
    if(a[i][j]==a[row][column])
     return false;
   return true;
}
void fillrow(int row,int column){
    if(row==3){
        if(check()){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++)
                    cout<<a[i][j]<<" ";
                cout<<endl;
            }
            cout<<endl;
        }
    }
    else if(column==3){
        fillrow(row+1,0);
    }
    else{
        for(int i=1;i<=9;i++)
            {a[row][column]=i;
            if(check1(row,column))
            fillrow(row,column+1);
            }
    }

}
int main(){
fillrow(0,0);

}
