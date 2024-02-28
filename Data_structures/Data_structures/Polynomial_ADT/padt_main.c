/*

progrm written by:Omkar Reddy K
Date:23/11/2024
progrm:POLYNOMIAL OPERATIONS USING ADT

*/

#include <stdio.h>
#include "padt_header.h"

void main()
{polyadt*h,*k;
int a;
printf("\nPlease enter the elements you want to enter in the first list: ");
scanf("%d",&a);
printf("\nEnter the first list");
polyadt* head=create(a);
printf("\nThe following is the list 1 you have entered");
display(head);

printf("\nPlease enter the elements you want to enter in the second list: ");
scanf("%d",&a);
printf("\n\nEnter the second list");
polyadt* tail=create(a);
printf("\nThe following is the list 2 you have entered");
display(tail);

printf("\nTheir addition is:");
h=add(head,tail);
display(h);

printf("\nTheir multiplication is:");
k=multiplication(head,tail);
display(k);
}




