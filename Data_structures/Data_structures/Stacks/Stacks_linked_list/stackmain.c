//program written by:Omkar Reddy K
//linked list implementation of stack

#include<stdio.h>
#include"header.h"

void main()
{
stack* a;
a=create_stack();
int b=is_stack_empty(a);
printf("\nThe stack is empty,if 0,else 1 if not empty.The answer is%d\n",b);
push(4,a);
element_type e=top(a);
printf("\nThe top is%d\n",e);
push(8,a);
element_type d=pop(a);
printf("\nThe popped element is%d\n",d);
makeempty(a);

}
