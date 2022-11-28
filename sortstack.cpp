#include <bits/stdc++.h> 
void insertsorted(stack<int> &stack,int x)
{
    if(stack.empty() || (!stack.empty() && stack.top()< x))
    {
        stack.push(x);
        return;
    }
    int n=stack.top();
    stack.pop();
    // reccusive calls
    insertsorted(stack,x);
    stack.push(n);
}

void sortStack(stack<int> &stack)
{ 
     if(stack.empty())
        {
            return ;
        }
        //top elemnt ko raklo
        int num =stack.top();
        stack.pop();
        //recussive calls karke sort karke
        sortStack(stack);
        //ab top elemnt insert karo
        insertsorted(stack,num);
}