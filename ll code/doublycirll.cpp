#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*next,*pre;
};
 struct node*head,*temp,*newnode,*prenode,*nextnode,*currnode;
  int c=0;
 void create()
 {    
 head=0;
  
    int choice=1;
    while(choice!=0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));//creating a node
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=head;
        newnode->pre=0;
          if(head==0)
        {
            head=temp=newnode;

        }
        else
        {

            temp->next=newnode;
            newnode->pre=temp;
            temp=newnode;
        }
        cout<<"1 and 0"<<endl;
        cin>>choice;
        c++;
       
    }
    head->pre=temp;
 } 
  void beg()
  {newnode=(struct node*)malloc(sizeof(struct node));//creating a node
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        temp=head;
        newnode->next=temp;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        newnode->pre=temp;
        temp->next=newnode;
        head=newnode;

  }
   void end()
  {newnode=(struct node*)malloc(sizeof(struct node));//creating a node
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        newnode->pre=temp;
        newnode->next=head;
        head->pre=newnode;
  }
   void delatbeg()
   {
    temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;

    }
    prenode=head->next;
    prenode->pre=temp;
    temp->next=prenode;
    head->next=0;
    head=prenode;
   }
   void delatend()
   {
    temp=head;
    while(temp->next!=head)
    {   prenode=temp;
        temp=temp->next;

    }
    prenode->next=head;
    head->pre=prenode;
    temp->pre=0;
   
   }
   void atpos()
   { int i=1;
   int pos;
    cout<<"enter the poisition"<<endl;
    cin>>pos;
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
   prenode=nextnode->next;
   temp->next=prenode;
   prenode->pre=temp;
   nextnode->next=0;
   nextnode->pre=0;
   free(nextnode);
   }
   void shorting()
   { int i,swap;
    temp=head;
    prenode=head->next;
    while(temp->next!=0)
    {  for(i=0;i<c;i++)
        {
            for(int j=0;j<c-1-i;j++)
            {
              if(prenode->next!=0)
              {
                if(temp->data>prenode->data)
                {
                     swap=prenode->data;
                     prenode->data=temp->data;
                     temp->data=swap;
                }
                prenode=prenode->next;
                temp=temp->next;
              }
            }
    }
   }
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
        shorting();
        display();
    }