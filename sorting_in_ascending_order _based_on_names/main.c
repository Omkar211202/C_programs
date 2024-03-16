//program by:Omkar Reddy K
//date:20-01-2024
//main file for inserting names in ascending order

#include <stdio.h>
#include "header.h"

void main()
{node *head;
int c;
printf("\nPlease enter the number of students you want to enter:\n");
scanf("%d",&c);
head=insert_in_ascending_order(c);
display(head);
}
