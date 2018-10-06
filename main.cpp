#include<iostream>
#include<cstdio>
using namespace std;
#include"stack.h"
int main()
{
  stack s;
  stack *top=new stack;
  top=NULL;
  char prefix[9],postfix[9];
  int i=0,j=0;
  cout<<"Enter prefix expression (9 characters)"<<endl;
  gets(prefix);
  while(i<9)
  {
    int prio1 = s.priority(prefix[i]);
    if(prio1 == 0)
    {
      postfix[j]=prefix[i];
      j++;
    }
    else if(prio1 > 0)
    {
      if(s.peak(top) == 'a')
      {
        s.push(prefix[i] , &top);
      }
      else
      {
        int prio2= s.priority(s.peak(top));
        if(prio2 >= prio1)
        {
          while(s.priority(s.peak(top)) >= prio1)
          {
            postfix[j]=s.pop(&top);
            j++;

          }
        }
         s.push(prefix[i] , &top);
      }
    }
    i++;
  }
  while(j<=i)
  {
    postfix[j]=s.pop(&top);
    j++;
  }
  //system("cls");
  cout<<"Post fix : ";
  for(i=0;i<j;i++)
  {
    cout<<postfix[i]<<" ";
  }
  cout<<endl<<endl;
  system("pause");
}