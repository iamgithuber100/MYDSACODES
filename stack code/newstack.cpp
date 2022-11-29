#include<iostream>
using namespace std;
struct stack
{
    int top;
    int size;
    int *arr;
};
int isempty(stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push(stack *ptr,int val)
{
   if(ptr->top==ptr->size-1)
    {
        cout<<"overflow"<<endl;
    }
    else
    {    ptr->top++;
        ptr->arr[ptr->top]=val;
       
    }

  
  
}
int  pop(stack *ptr)
{
    if(ptr->top==-1)
    {
        cout<<"empy=ty"<<endl;
    }
    else
    {
        int val=ptr->arr[ptr->top];
       
        ptr->top--;
         return val;
    }
}
int peek(stack *sp,int position)
{
    int aarayindex=sp->top-position+1;
     if(aarayindex<0)
     {
        cout<<"invalid response"<<endl;
        return -1;
     }
     else
     {
        return sp->arr[aarayindex]; 
     }
}



int main(){
struct stack *sp=(struct stack*) malloc(sizeof(struct stack));
sp->size=10;
sp->top=-1;
sp->arr=(int *)malloc(sp->size * sizeof(int));
cout<<isempty(sp)<<endl;
cout<<isfull(sp)<<endl;
int val;
cout<<"enetr the data"<<endl;
for(int i=0;i<10;i++)
{ 
    cin>>val;
    push(sp,val);
}

for(int i=0;i<sp->size;i++)
{
    cout<<"the elemnt is removed"<<pop(sp)<<endl;
}
for(int j=1;j<=sp->top+1;j++)
{
    cout<<"the elemnt at position"<<j<<peek(sp,j)<<endl;
}

    return 0;
}