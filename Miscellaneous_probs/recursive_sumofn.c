#include <stdio.h>
int sumofn(int);

void main()
{
int a,b;
printf("\n Please enter the number of naturals you wanna add\n");
scanf("%d",&a);
b=sumofn(a);
printf("the sum of %d natural numbers is %d\n",a,b);
}

int sumofn(int a)
{
if (a==1)
  return 1;
else
  return (a+sumofn(a-1));
}

