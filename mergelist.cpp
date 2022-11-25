node* themid(node* head)
{
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
node* merge(node* left,node* right)
{if(left==NULL)
  return right;
  if(right==NULL)
      return left;
 //creating dummy node
  node* ans=new node(-1);
 node* temp=ans;
  while(left!=NULL && right!=NULL)
  {
    if(left->data<right->data)
    {
        temp->next=left;
        temp=left;
        left=left->next;
    }
    else
    {
        temp->next=right;
        temp=right;
        right=right->next;
    }
  }
    while(left!=NULL)
    {
          temp->next=left;
        temp=left;
        left=left->next;
    }
     while(right!=NULL)
    {
          temp->next=right;
        temp=right;
        right=right->next;
     }
      ans=ans->next;
     return ans;
    }
    


node* mergeSort(node *head) {
    if(head!=NULL && head->next!=NULL)
    {
        return head;
    }    
    //breaks the list two half 
    node* mid=themid(head);
    node* right=mid->next;
    node* left=head;
    mid->next=NULL;
    //sorting the two list by recussive calls
    left=mergeSort(left);
    right=mergeSort(right);
    //meging the two list
    node* result=merge(left,right);
        return result;
    
}
