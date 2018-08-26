#include<iostream>
using namespace std;
class stack
{
  public:
  void push(int val,stack **top)
  {
    stack *ptr=new stack;
    ptr->value=val;
    if(*top==NULL)
    {
      ptr->next=NULL;
      *top=ptr;
    } 
    else
    {
      ptr->next=*top;
      *top=ptr;
    }
  }

  void pop(stack **top)
  {
    if(*top==NULL)
    {
      cout<<"Stack Underflow!!"<<endl;
    }
    else
    {
      stack *curr=*top;
      *top=curr->next;
      cout<<curr->value<<endl;
      curr=NULL;
      delete[]curr;
    }
  }
  void peak(stack *top)
  {
    if(top==NULL)
    {
      cout<<"Stack Underflow!!"<<endl;
    }
    else
    {
      cout<<top->value<<endl;
    }
  }

  private:
  int value;
  stack *next;
};