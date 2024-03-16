#include <stdio.h>
void main()
{
int a,b,c,d,e,f,g,h,i;
printf("please enter a 5 digit\n");
scanf("%d",&a);
b=a/10000;
c=a%10000;
d=c/1000;
e=c%1000;
f=e/100;
g=e%100;
h=g/10;
i=g%10;
printf("\n%d%d%d%d%d\n",i,h,f,d,b);
if (i==b && h==d)
   printf("the reversal also works out");
}

