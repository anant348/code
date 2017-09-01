#include<iostream>
using namespace std;

int count=0;
struct node
{
   int value;
   node *next;
};

node * create(node *end)
{
   node *temp=new node;count++;
   cout<<"enter value:-";
   cin>>temp->value;
   if(end==NULL)
   {end=temp;
      end->next=NULL;
   }
   else
   {
      end->next=temp;
      end=temp;
      end->next=NULL;
   }
   return end;

}

void display(node *start)
{
   while(start!=NULL)
   {
      cout<<start->value<<" ";
      start=start->next;
   }
   cout<<endl;
}

node * createn(node *end,node **start)
{
   int n;
   cout<<"enter number of nodes to be created:-";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      node *temp=new node;count++;
      cout<<"enter value:-";
      cin>>temp->value;
      if(end==NULL)
      {
         end=temp;
         end->next=NULL;
         *start=end;
      }
      else
      {end->next=temp;
         end=temp;end->next=NULL;
      }
   }
   return end;
}
void insertpos(node *front,node **front1,node *end,node **end1)
{
   int n,pos=1;
   cout<<"ENTER postion:-";cin>>n;
   if(n>count+1 || n<1)
   {cout<<"position out of range\n ";
      return;}
   else
   {
      node *temp=new node;count++;
      cout<<"enter value:-";cin>>temp->value;
      if(n==1)
      {

         temp->next=front;
         *front1=temp;return;
      }
      else if(n==count+1)
      {end->next=temp;
         temp->next=NULL;
         *end1=temp;return;

      }
      else{
         while(true){
            if(n-1==pos)
            {temp->next=front->next;
               front->next=temp;return;
            }
            front=front->next;pos++;
         }
      }
   }


}
void deletepos(node *front,node **front1,node *end,node **end1)
{
   int n,pos=1;
   cout<<"enter position:-";cin>>n;
   if(n<1||n>count)
   {cout<<"position out of range\n";return;}
   else
   {

      if(n==1)
      {node *temp=front;
         front=front->next;
         delete temp;*front1=front;}
      else if(n==count)
      {

      }
      else
      {   while(true){
                        if(pos==n-1)
                        {
                           node *temp=front->next;
                           if(n==count)
                           {*end1=front;delete temp;}
                           else{
                              front->next=temp->next;
                              delete temp;
                           }
                           break;
                        }
                        front=front->next;pos++;
                     }
      }
   }
   count--;

}
void insertvalue()
{
   int n;
   cout<<"enter value:-";
   cin>>n;

}
void selection(node *front)
{
   while(front->next!=NULL)
   {
      node *temp=front->next;
      while(temp!=NULL)
      {
         if(temp->value<front->value)
         {
            int tempvalue=temp->value;temp->value=front->value;front->value=tempvalue;
         }
         temp=temp->next;
      }
      front=front->next;
   }
}

void bubble(node *front)
{   node *end=NULL;
   while(front!=end)
   {
      node *ptr=front;
      while(true)
      {
         if(ptr->value>ptr->next->value)
         {int tempvalue=ptr->value;ptr->value=ptr->next->value;ptr->next->value=tempvalue;}
         if(ptr->next->next==NULL)
            end=ptr->next;

         if(ptr->next==end)
         {end=ptr;break;}
         ptr=ptr->next;
      }
   }
}

   node * reverse(node *front,node **end)
{   if(front==NULL || front->next==NULL)
   return front;
   node *ptr1=front,*ptr2=front->next,*ptr3=front->next->next;
   ptr1->next=NULL;*end=ptr1;
   while(true)
   {
      ptr2->next=ptr1;ptr1=ptr2;ptr2=ptr3;
      if(ptr3==NULL)
         break;
      ptr3=ptr3->next;
   }
   return ptr1;
}

void menu()
{
   cout<<"PRESS 0 to exit\nPRESS 1 to create node\nPRESS 2 to create by location\nPRESS 3 to create by value";
   cout<<"\nPRESS 4 to delete by postion\npress 5 to delete by value\npress 6 to display\npress 7 to menu\npress 8 to create n nodes\n";
   cout<<"press 9 to know number of nodes\npress 10 to sort by selection\npress 11 to sort by bubble\npress 12 to sort by insertion\n";
   cout<<"press 14 to reverse a linked list\n";
}
int main()
{
   node *front=NULL,*end=NULL;
   menu();
   do{
      int choice;
      cin>>choice;
      if(choice==0)
         break;
      switch(choice)
      {
         case 7:menu();break;
         case 1:
                end=create(end);
                if(front==NULL)
                   front=end;
                break;
         case 6:display(front);break;
         case 9:cout<<"number of nodes="<<count<<endl;break;
         case 8:end=createn(end,&front);break;
         case 2:insertpos(front,&front,end,&end);break;
         case 4:deletepos(front,&front,end,&end);break;
         case 10:selection(front);break;
         case 11:bubble(front);break;
         case 14:front=reverse(front,&end);break;
      }

   }while(true);
}
