#include <stdio.h>
void main()
{
int a,b,counter_1,counter_2;
counter_1=0;
counter_2=2;
do
{printf("\nplease enter the value of n\n");
scanf("%d",&a);
printf("the following is %d primes you wanted\n",a);
if (a<=0)
continue;
else
break;
}
while (1);
do
{
for (int i=1;i<counter_2;i++)
{
b=counter_2%i;
if (b==0 && i!=1)
break;
if (i==counter_2-1)
{counter_1++;
printf("%d\n",counter_2);
}
}
counter_2=counter_2+1;
}
while (counter_1<a);
}
