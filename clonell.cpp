#include<iostream>
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
    void display()
    {
      cout<<"the original list"<<endl;    
     temp=head;
     while(temp!=0)
     {    
        cout<<temp->data<<endl;
       
        temp=temp->next;
     }
    }
      
    
    void clone()
    {
        temp=head;
        prenode=nextnode=temp->next;
        while(nextnode->next!=0)
        {
            if(nextnode->data%2==0)
            {
                nextnode->random=temp;
                nextnode=nextnode->next;

            }
            else{
                temp->random=nextnode;
                temp=nextnode;
                nextnode=nextnode->next;
            }
        }
        temp->random=nextnode;
        nextnode->random=prenode;
    }
    void displayclone()
    {  int c=5;
        temp=head;
        while(c!=0)
        {
            cout<<temp->data<<endl;
            temp=temp->random;
            c--;
        }
    }
    int main()
    {
        cout<<"lets begin"<<endl;
        create();
        clone();
        display();
        displayclone();
    }