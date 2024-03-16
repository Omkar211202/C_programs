#include <stdio.h>
void main()
{
int a,b,c,sum;
c=0;
sum=0;
printf("\nplease enter the value of n\n");
scanf("%d",&b);
while (c<=b)
{a=c*c*c;
sum=sum+a;
c=c+1;
}
printf("\nthe sum of cubes %d\n",sum);
}

