#include <stdio.h>
void main()
{
int a,b,c,d,e,f;
c=0;
printf("\nEnter your 2 numbers\n");
scanf("%d",&a);
scanf("%d",&b);
if (a >= b)
d=b;
else 
d=a;
while (d-c <= d)
{e=a%(d-c);
f=b%(d-c);
if (e==0 && f==0)
{printf("the gcd of %d,%d is %d\n",a,b,d-c);
d=0;
c=-1;}
else
c=c+1;
}
}

