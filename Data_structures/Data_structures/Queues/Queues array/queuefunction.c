//program written by Omkar Reddy kathi


#include <stdio.h>
#include <stdlib.h>
#include "header.c"

void initialise(q_record *a,int c)
{a=(q_record*)malloc(sizeof(q_record));
a->front=-1;
a->rear=-1;
a->capacity=c;
a->queue=(element_type*)malloc(sizeof(element_type)*a->capacity);
}

int is_q_full(q_record *a)
{
if (a->rear==a->capacity-1)
  return 1;
else
  return 0;
}

int is_q_empty(q_record* a)
{if (a->front==-1)
    {
    return 1;
    }
 else
    {
     return 0;
    }
}



void enqueue(q_record*a,element_type c)
{if (!is_q_full(a))
{
if (a->front==-1)
   a->front++;
a->rear++;
a->queue[a->rear]=c;
}
}

element_type dequeue(q_record* a)
{element_type c;
if (!is_q_empty(a))
  {c=a->queue[a->front];
   a->front++;
   if (a->front=a->rear+1)
     {a->front=-1;
      a->rear=-1;
     }
  return c;
  }
  printf("\nEmpty Nothing to dequeue\n"); 
  return -1;
}

void display(q_record *a)
{int i;
if (!is_q_empty)
  {for (i=a->front;i<=a->rear;i++)
    printf("%d",a->queue[i]);
  printf("\n");
  }
}






