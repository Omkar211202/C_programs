# include <stdio.h>
# include "stackheader.h"
# include"stdlib.h"

void initialise_array(stack*a)
{
if(a)
{a->array=(element_type*)malloc(sizeof(element_type)*a->capacity);
}
}


void push(stack*a,element_type b)
{
if (!is_full(a))
   {a->top=a->top+1;
   a->array[a->top]=b;
   }
else
  printf("\nTHE STACK IS FULL,NO MORE INSERTION\n");
  
}


element_type pop(stack*a)
{
if (!is_empty(a))
   return a->array[a->top--];
else
   printf("\nTHE STACK IS EMPTY,NO MORE POPPING\n");
   return-1;
}


int is_empty(stack*a)
{if (a->top==top_empty)
   return 1;
 else
   return 0;
}


int is_full(stack*a)
{
if (a->top==a->capacity-1)
   return 1;
else 
   return 0;
}



element_type top(stack*a)
{
if (!is_empty(a))
   return a->array[a->top];
else
   printf("\nTHE STACK IS EMPTY,NOTHING TO POP\n");
   return -1;
}


void makeempty(stack*a)
{
if (a)
  a->top=top_empty;
}

void dispose(stack*a)
{
free(a);
}
