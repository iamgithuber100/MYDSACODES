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
       //inserting the node at begnning
      cout<<"enter the node at begnning"<<endl;
      newnode=(struct node*)malloc(sizeof(struct node));
      cin>>newnode->data;
      newnode->next=head;
      head=newnode;
      temp=head;
      while(temp!=0)
      {
          cout<<temp->data;
          temp=temp->next;
      }


    return 0;
}
