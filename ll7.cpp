#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
 struct node*head,*newnode,*temp;
    
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
    void display()
    {
          
     temp=head;
     while(temp!=0)
     {    
        cout<<temp->data<<endl;
        temp=temp->next;
     }
    }
    void reverse()
    {
        struct node*prenode,*curnode,*nextnode;
        prenode=0;
        nextnode=curnode=head;
        while(nextnode!=0)
        { //updation of next node
        nextnode=nextnode->next;
        //current node jis bhi node node ko point kar raha tha waha par previous 
        //node add store kar rahe hai
        curnode->next=prenode;
        //updation all the [pointer]
        prenode=curnode;
        curnode=nextnode;
        }
        head=prenode;
    }
    int main()
    {
        cout<<"lets begin"<<endl;
        create();
        reverse();
        display();
    }