#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
 struct node*head,*newnode,*temp,*nextnode,*pre,*next1,*tail,*prenode;
    
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
            tail=head=temp=newnode;

        }
        else
        {

            tail->next=newnode;
            tail=newnode;
        }
        cout<<"1 and 0"<<endl;
        cin>>choice;
    }
 }
 void even()
 {
    temp=head;
    if(temp->data%2==0)
    {
        temp=temp->next;
        while(temp->next!=NULL)
        {
            if(temp->data%2==0)
            {
                prenode->next=temp->next;
                temp->next=0;
                temp->next=head;
                head=temp;
                temp=prenode->next;
            }
            else
            {
                prenode=temp;
                temp=temp->next;
            }
        }
        prenode->next=0;
        temp->next=head;
        head=temp;
    }
    else{
        temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data%2==0)
        {
            
        
                prenode->next=temp->next;
                temp->next=0;
                temp->next=head;head=temp;
                temp=prenode->next;
            
        }
        else{
            prenode=temp;
            temp=temp->next;
        }
    }
    }
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
        even();
        display();
    }