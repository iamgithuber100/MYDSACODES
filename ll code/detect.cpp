#include<iostream>
#include<map>
using namespace std;
struct node
{
    int data;
    struct node*next;
    struct node*random;
};
 struct node*head,*newnode,*temp,*prenode,*nextnode,*p,*currnode,*dummy,*newnode1;
    int choice =1;
    int c=0;
    
 void create()
 {    head=0;
    while(choice!=0)
    {  
        newnode=(struct node*)malloc(sizeof(struct node));//creating a node
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;

        }
        else
        {

            temp->next=newnode;
            temp=newnode;
        }
        cout<<"1 and 0"<<endl;
        cin>>choice;
        c++;
      
    }

 }
 bool deectloop()
 {
    if(head==NULL)
    {
        return false;
    }
    map<node*,bool>visted;//use hua hai mapping concept ka
    temp=head;
     while(temp!=NULL)
     {
        if(visted[temp]==true)
        {
            return true;
        }
        visted[temp]=true;
        temp=temp->next;
     }
 }
 node*  floyddetectloop()
 {  if(head==NULL)
      return NULL;
    node* slow=head;
    node* fast=head;
    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast !=NULL)
        {
        fast=fast->next;

        }
        slow=slow->next;
        if(slow==fast)
        {  cout<<"cycle present"<<slow->data<<endl;
            return slow; 
        }
    }
    return NULL;
    
 }
   node* getstartingnode()
{
    node* intersection=floyddetectloop();
    if(intersection==NULL)
       return NULL ;
    node *slow=head;
    while(slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    cout<<"strats"<<slow->data<<endl;
    return slow ;
}
 int main()
 {
    cout<<"lets begin"<<endl;
    create();
   node*b= floyddetectloop();
   if(b!=0)
   {
    cout<<"cycle is present"<<endl;
   }
    if(getstartingnode()!=NULL)
      cout<<"starting at"<<getstartingnode()->data<<endl;   
 }