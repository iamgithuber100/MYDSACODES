#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
 struct node*head,*newnode,*temp,*prenode,*nextnode,*p,*currnode,*dummy,*newnode1;
    
    int choice =1;
    int c=0;
      void reverse()
    {
        prenode=0;
        currnode=nextnode=head;
        while(nextnode!=0)
        {
            nextnode=nextnode->next;
            currnode->next=prenode;
            prenode=currnode;
            currnode=nextnode;
        }
        head=prenode;
        cout<<"lets display revese list"<<endl;
        display();
        
    }
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
        reverse();
    }
 }
    void display()
    {
      int a[10],i;    
     temp=head;
     while(temp!=0)
     {    
        cout<<temp->data<<endl;
       
        temp=temp->next;
     }
    }
    void remove()
    {   prenode=temp=head;
        temp=temp->next;
        while(temp->next!=0)
        {
            if(prenode->data==temp->data)
            {nextnode=temp->next;
            temp->next=0;
            prenode->next=nextnode;
            temp=nextnode;
            }
            else{
                temp=temp->next;
                prenode=prenode->next;
            }
        }
    }
    void shorted()
    {   int swap,i,j;
        temp=head;
        nextnode=temp->next;
        for(i=0;i<c;i++)
        {

         
        
           for(j=0;j<c-1-i;j++)
           {

           while(temp->next!=0)
           {
            if(temp->data>nextnode->data)
            {
                swap=nextnode->data;
                nextnode->data=temp->data;
                temp->data=swap;
            }
            else{
                nextnode=nextnode->next;
                temp=temp->next;
            }
           }
           }
        }

        
    }
    void removeunsorted()
    {
         temp=head;
         while(temp->next!=0)
         {
            nextnode=temp->next;
            prenode=temp;
            while(nextnode->next!=0)
            {
                if(temp->data==nextnode->data)
                {
                    p=nextnode->next;
                    nextnode->next=0;
                    prenode->next=p;
                    nextnode=p;
                }
                else{
                    nextnode=nextnode->next;
                    prenode=prenode->next;
                }
            }
          
            temp=temp->next;
         }
           if(nextnode->next==0)
            {
                prenode->next=0;
            }

    }
  
    void addtwonumber(node*l1,node*l2)
    {  

        dummy=new node();
        temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry)
        {
            int sum=0;
            if(l1!=0)
            {
                sum=sum+l1->data;
                l1=l1->next;
            }
            if(l2!=0)
            {
                sum=sum+l2->data;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
           newnode=(struct node*)malloc(sizeof(struct node));  
           newnode->data=sum%10;
           temp->next=newnode;
           temp=temp->next;

        }
        

    }

             int main()
             {
                cout<<"lets begin"<<endl;
                create();
                cout<<"calling second time"<<endl;
                create();
                
               
     
             }
        
    