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
    int c,pos=0;
    int i=1;
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
        c++;
    }
    //inserting node at given loc
    cout<<"enter the pos"<<endl;
    cin>>pos;
   
    if(pos>c)
    {
        cout<<"invalid respnse"<<endl;
    }
    else
    {  
        while(pos!=4)
        {

        
     newnode=(struct node*)malloc(sizeof(struct node));//creating a node
        cout<<"enter the data at nrew node"<<endl;
        cin>>newnode->data;
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;

        }
        newnode->next=temp->next;
        temp->next=newnode;
        pos++;
       
    }
    }
     //displaying the list
        temp=head;
       while(temp!=0)
      {
          cout<<temp->data;
          temp=temp->next;
      }
    
     return 0;
}