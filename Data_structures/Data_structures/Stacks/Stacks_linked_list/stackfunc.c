//program written by:Omkar Reddy K
//linked list implementation of stack

#include<stdio.h>
#include <stdlib.h>
#include"header.h"


stack* create_stack()
{stack* a;
a=(stack*)malloc(sizeof(stack));
if (a!=NULL)
   {a->next=NULL;
   return a;
   }
else
   {printf("\nOut of Space");
   return NULL;
    }
}

int is_stack_empty(stack* s)
{
if (s->next==NULL)
   return 1;
else
   return 0;
}

void push(element_type x,stack* s)
{
stack* temp;
temp=(stack*)malloc(sizeof(stack));
temp->ele=x;
temp->next=s->next;
s->next=temp;
}

element_type pop(stack* s)
{
if (!is_stack_empty(s))
{element_type c=s->next->ele;
s->next=s->next->next;
return c;
}
else
  printf("\nThe list is empty bro!!NO popping");
}

void dispose(stack* s)
{
makeempty(s);
free(s);
}

void makeempty(stack* s)
{stack* a;
while (s!=NULL)
  {
  a=s;
   s=s->next;
   free(a);
  }
}

element_type top(stack* s)
{
if (!is_stack_empty(s))
  return s->next->ele;
else
  {printf("\nThe stack is empty,dont try to access anything\n");
   return 0;
  }
}

