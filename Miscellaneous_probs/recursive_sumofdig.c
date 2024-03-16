#include <stdio.h>
int sumofdig(int);

void main()
{
int a,b;
printf("\nPlease enter a number\n");
scanf("%d",&a);
b=sumofdig(a);
printf("the sum of digits is %d\n",b);
}

int sumofdig(int a)
{
int b;
if (a<=9)
 return a;
else 
 b=a%10;
 a=a/10;
 return (b+sumofdig(a));
}

