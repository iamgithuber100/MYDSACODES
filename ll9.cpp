#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
 struct node*head,*newnode,*temp,*tail,*prenode;
    
    int choice =1;
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
    }
    
   
 }
 void atbeg()
 {  temp=head;
    while(temp->next!=NULL)
    {
        prenode=temp;
        temp=temp->next;
    }
    prenode->next=NULL;
    temp->next=head;
    head=temp;
 }
 void addone()
 {
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->data=temp->data+1;
 }
    void display()
    {
          
     temp=head;
     while(temp!=0)
     {    
        cout<<temp->data<<endl;
        temp=temp->next;
     }
    }
    int main()
    {
        cout<<"lets begins"<<endl;
        create();
        addone();
        display();
    }
