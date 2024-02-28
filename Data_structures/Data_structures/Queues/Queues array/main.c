// program by:Omkar Reddy K

#include <stdio.h>
#include <stdlib.h>
#include "header.c"

void main()
{
q_record a;
int c,d;
printf("\nPlease enter the size of the array you want to use:\n");
scanf("%d",&c);
initialise(&a,c);
printf("%d",a.front);
printf("%d",a.rear);

c=is_q_full(&a);
if (c)
  printf("\nThe list is full");
else 
   printf("\nThe list is not full");

printf("%d",a.front);
d=is_q_empty(&a);
if (d)
  printf("\nThe list is empty");
else 
   printf("\nThe list is not empty");




c=dequeue(&a);
printf("\nThe element popped is:%d\n",c);
}


/*
*/





























