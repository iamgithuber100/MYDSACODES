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
        newnode->next=0;
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

 }
 void beg()
 {     
       newnode=(struct node*)malloc(sizeof(struct node));//creating a node
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=head;
        newnode->pre=0;
        head=newnode;

 }
   //inserting at end
   void end()
   {
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=0;
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->pre=temp;
         
  

   }
    //inserting at position
    void atpos()
    {  int pos;
    int i=1;
        cout<<"enter the position"<<endl;
        cin>>pos;
        if(pos>c)
        {
            cout<<"invalid resonse";
        }
        else{
              newnode=(struct node*)malloc(sizeof(struct node));//creating a node
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=0;
        newnode->pre=0;
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
      prenode=temp;
      newnode->next=temp->next;
      newnode->next=temp->next;
      temp=temp->next;
      temp->pre=newnode;
      newnode->pre=prenode;
      prenode->next=newnode;


    }
    }
    void delatbeg()
    {
        temp=head;
        head=temp->next;
        head->pre=0;
        temp->next=0;
    }
    void delatend()
    {
        temp=head;
        while(temp->next!=0)
        {
            prenode=temp;
            temp=temp->next;
        }
        prenode->next=0;
        temp->pre=0;

    }
    void delatpos()
    {  int pos;
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
        currnode=temp->next;
        currnode->pre=temp;
        nextnode->pre=0;

    }
    void reverse()
    {  cout<<"be ready for reverse"<<endl;
        prenode=0;
        currnode=nextnode=head;
        while(nextnode!=0)
        {
            nextnode=nextnode->next;
            currnode->next=prenode;
            currnode->pre=nextnode;
            prenode=currnode;
            currnode=nextnode;

        }
        head=prenode;
    }
  //displaying the list 
  void display(){
      temp=head;
       while(temp!=0)
      {
          cout<<temp->data;
          temp=temp->next;
      }
  }
  int main()
  {
    cout<<"lets begin"<<endl;
    create();
     reverse();
    display();
    return 0;
  }