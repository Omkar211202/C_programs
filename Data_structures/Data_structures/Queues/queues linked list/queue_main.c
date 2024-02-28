//program by Omkar Kathi
//queue main 

#include<stdio.h>
#include<stdlib.h>
#include"queue.h"

void main()
{int c;
queue a;
initialise(&a);
printq(a);
c=is_queue_empty(a);
if (c) 
  printf("\nEmpty\n");
else
  printf("\nNon Empty\n");

printf("enqueued 4\n");
a=enqueue(a,4);
printq(a);
printf("\nenqueued 8\n");
a=enqueue(a,8);
a=enqueue(a,9);
printq(a);

c=is_queue_empty(a);
if (c) 
  printf("\nEmpty\n");
else
  printf("\nNon Empty\n");
  
c=dequeue(&a);
printf("\nThe dequeued element is:%d\n",c);
printq(a);
printf("\n");
}
