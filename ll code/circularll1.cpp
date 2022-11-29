#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
   struct node*head,*temp,*newnode,*prenode,*nextnode,*currnode;
 void create()
 {    head=0;
      int choice=1;
    while(choice!=0)
    {  
        newnode=(struct node*)malloc(sizeof(struct node));//creating a node
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=head;
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
     { 
        newnode=(struct node*)malloc(sizeof(struct node));
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        temp=head;
        newnode->next=temp;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        head=newnode;
        temp->next=head;


     }
     void atend()
     { 
        newnode=(struct node*)malloc(sizeof(struct node));
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
     }
     void atpos()
     {  int pos;
         int i=1;
        newnode=(struct node*)malloc(sizeof(struct node));
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        temp=head;
        cout<<"enter the pos"<<endl;
        cin>>pos;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
     }
     void delatbeg()
     {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        nextnode=head->next;
        head->next=0;
        head=nextnode;
        temp->next=head;
     }
      
     void delatend()
     {
        temp=head;
        while(temp->next!=head)
        {     prenode=temp;
            temp=temp->next;
        }
        prenode->next=head;
        temp->next=0;
        free(temp);
     }
    void delatpos()
    {
        int pos;
       int i=1;
        cout<<"at pos"<<endl;
        temp=head;
        cout<<"enter the pos"<<endl;
        cin>>pos;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        nextnode->next=0;
        free(nextnode);
    }
    void reverse()
    {
        prenode=0;
        temp=currnode=nextnode=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        prenode=temp;
         nextnode=nextnode->next;
        currnode->next=prenode;
        
        prenode=0;
        while(nextnode!=head)
        {   
            prenode=currnode;
            currnode=nextnode;
            nextnode=nextnode->next;
            currnode->next=prenode;
           
        }
         temp=head;
    }
    void display()
    {
          
     temp=head;
     while(temp->next!=head)
     {    
        cout<<temp->data<<endl;
        temp=temp->next;
     }
     cout<<temp->data;
    }
    int main()
    {
        cout<<"lets begin"<<endl;
        create();
        reverse();
        display();
    }