#include<iostream>
using namespace std;

int  main()
{

    struct node
    {
        int data;
        struct node*next;

    };
    struct node*head,*newnode,*temp;
    head=0;
    int choice =1;
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
    //inserting node at end
     cout<<"enter the node at end"<<endl;
      newnode=(struct node*)malloc(sizeof(struct node));
      cin>>newnode->data;
      newnode->next=0;
      temp=head;
      while(temp->next!=0)
      {
        temp=temp->next;
      }
      temp->next=newnode;
      //displaying the list 
      temp=head;
       while(temp!=0)
      {
          cout<<temp->data;
          temp=temp->next;
      }
      return 0;
}
