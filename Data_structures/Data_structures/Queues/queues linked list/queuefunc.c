// programmer Omkar Kathi
//queue functions

#include<stdio.h>
#include<stdlib.h>
#include"queue.h"


int is_queue_empty(queue a)
{
if (a.front=NULL)
   return 1;
else 
   return 0;
}

queue enqueue(queue a,int c)
{
node*t=(node*)malloc(sizeof(node));
if (t!=NULL)
  {t->data=c;
  t->next=a.back;
  a.back=t;
  }
if (a.back->next==NULL)
   a.front=t;
if(t==NULL)
  printf("\nWas not able to assign space!malloc fails");
return a;
}

int dequeue(queue*a)
{int c;
node* g;
if (!is_queue_empty(*a))
   {c=a->front->data;
    g=a->front;
    a->front=g->next;
    free(g);
    if (a->front!=NULL)
      a->front->next=NULL;
    return c;
   }
else
  printf("\nThe list is empty");
}

void initialise(queue *a)
{(*a).front=NULL;
 (*a).back=NULL;
}

void printq(queue a)
{
while(a.back!=NULL)
  {printf("%d",a.back->data);
  a.back=a.back->next;
  }
}
