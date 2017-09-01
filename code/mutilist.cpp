#include<iostream>
using namespace std;

struct student{
  char name[20];
  int marks;
  student *next;
};
struct college{
	char name[20];
	college *next;
	student *nextstu;
};
struct subject{
	char name[20];
	college *nextcol;
	subject *next;
};
subject *substart,*subend;
college *colstart=NULL,*colend=NULL;
student *stustart=NULL,*stuend=NULL;
void create(){
   char ch='a';

   do{
       subject *subtemp=new subject;
   	   cout<<"enter subject:-";cin>>subtemp->name;
   	   if(substart==NULL){
   		substart=subtemp;subend=subtemp;
   	   }
   	   else{
   		subend->next=subtemp;
        subend=subtemp;
   	   }
        college *colstart=NULL,*colend=NULL;

   	   do{
            college *coltemp=new college;
            cout<<"\nenter college:-";cin>>coltemp->name;
            if(colstart==NULL){
   		       subend->nextcol=coltemp;
             colstart=coltemp;colend=coltemp;
   	        }
   	        else{
   		      colend->next=coltemp;
              colend=coltemp;
   	        }
   	            student *stustart=NULL,*stuend=NULL;
   	            do{
                  student *stutemp=new student;
                  cout<<"\nenter student name:-";cin>>stutemp->name;
                  cout<<"enter marks:-";cin>>stutemp->marks;
                  if(stustart==NULL){
   		             colend->nextstu=stutemp;
                   stustart=stutemp;stuend=stutemp;
   	                }
   	              else{
   		             stuend->next=stutemp;
                      stuend=stutemp;
   	                }
   	                cin>>ch;
   	            }while(ch!='n');
   	        cin>>ch;
   	   }while(ch!='n');

      cin>>ch;
   }while(ch!='n');
}
void find(){
  while(substart!=NULL){
    int max=-2;
    colstart=substart->nextcol;
    while(colstart!=NULL){
      stustart=colstart->nextstu;
      while(stustart!=NULL){
        if(stustart->marks>max)
          max=stustart->marks;
        stustart=stustart->next;
      }
      colstart=colstart->next;
    }
    cout<<substart->name<<" "<<max<<endl;
    max=-1;
    substart=substart->next;
  }
}
int main(){
    cout<<"enter data:-\n";
    create();
    find();


}
