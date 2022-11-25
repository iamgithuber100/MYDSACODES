#include<iostream>
using namespace std;

int main(){
    struct node
    {
        int data;
        struct node*next;

    };
    struct node*head,*newnode,*temp;
    int choice=1;
       while(choice!=0)
    {
        newnode= (struct node*)malloc(sizeof(struct node));
        cout<<"enetr the value"<<endl;
        cin>>newnode->data;
        if(head==0)
        {
            head=temp=newnode;

        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        
        cout<<"enter the value of  0 and 1 "<<endl;
        cin>>choice;
        
    }
     
     temp=head;
     while(temp!=0)
     {    
        cout<<temp->data<<endl;
        temp=temp->next;
     }
}
     
     
     
     
     
    