#include <iostream> 
#include <cstdlib>
using namespace std;
int main(){
   char a1='a',a2='a',a3='b',a4='a',a5='c',a6='a',a7='d',a8='a',a9='b',
        a10='r',a11='a';
   char i;            // this program is for sequence 'abr' but same
                      // thing can be applied to any sequence (no of if(...) will be equal to 
                      // number of terms in sequence)
   
   cin>>i;
   while(true){
     if(a1==i){
        cin>>i;
         if(a2==i){
             cin>>i;
            // cout<<i<<endl;
            if(i==a3){
               break;
            }
               continue;
         }
      }
        cin>>i;
        //cout<<i<<endl;
   }
}
