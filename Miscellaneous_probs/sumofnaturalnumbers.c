#include <stdio.h>
void main()
{
int d,sum,c;
d=0;
sum=0;
printf("\nplease enter a natural number\n");
scanf("%d",&c);
while (d<=c)
{sum=sum + d;
d=d+1;
}
printf("\nthe sum of n natural numbers is:%d\n",sum);
}

