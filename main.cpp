#include<iostream>
using namespace std;
#include"stack.h"
int main()
{
  stack s;
  stack *top=new stack;
  top=NULL;
  s.push(4,&top);
  s.push(5,&top);
  s.push(6,&top);
  s.push(7,&top);
  s.push(8,&top);
  s.peak(top);
  s.pop(&top);
  s.pop(&top);
  s.pop(&top);
  s.pop(&top);
  s.peak(top);
  s.pop(&top);
  s.pop(&top);
  s.pop(&top);
  system("pause");
}