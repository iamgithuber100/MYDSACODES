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
    //delete from begnning
    void frombeg()
    {    cout<<"delete from beg"<<endl;                
        temp=head;
        head=temp->next;
        free(temp);
        display();
    }
    //delete from end
    void fromend()
    {  cout<<"deleted at end"<<endl;
        struct node*prenode;
        temp=head;
        while(temp->next!=0)
        {
            prenode=temp;
            temp=temp->next;
        }
        prenode->next=0;
        free(temp);
        display();
    }
      //delete from loc
     void fromloc()
     {  cout<<"deleted at loc"<<endl;
         int pos;
        int i=1;
         temp=head;
        struct node*nextnode;
        cout<<"enter the pos"<<endl;
        cin>>pos;
       
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        nextnode=temp->next;
        temp->next=newnode->next;
        free(nextnode);
         display();
     }

      

   int main()
   {   cout<<"lets begin"<<endl;
       create();
       frombeg();
       fromend();
      fromloc();
   }

