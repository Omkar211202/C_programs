#include <stdio.h>
void swap(int *,int *);

void main()
{
int c,d;
printf("\nplease enter the 2 numbers\n");
scanf("%d %d",&c,&d);
swap(&c,&d);
printf("the swaps at c:%d and d:%d\n",c,d);
}

void swap(int *a,int *b)
{int c=*a;
*a=*b;
*b=c;
}

