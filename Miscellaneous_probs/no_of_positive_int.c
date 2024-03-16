#include <stdio.h>

void main()
{int i;
int A[25];
int pos_counter=0;
int neg_counter=0;

printf("\nEnter the 25 integers\n");
for (i=0;i<25;i++)
{
scanf("%d",&A[i]);
printf("\n");
}

for (i=0;i<25;i++)
{
if (A[i]<0)
  neg_counter++;
else if (A[i]>0)
  pos_counter++;
}
printf("The number of positive integers is:%d\n",pos_counter);
printf("The number of negative integers is:%d\n",neg_counter);
}
