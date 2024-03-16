#include <stdio.h>
int fibo(int a);

void main()
{
int a,b;
printf("\n please enter the term you wanna see\n");
scanf("%d",&a);
b=fibo(a);
printf("The term %d is %d\n",a,b);
}

int fibo(int a)
{
int b;
if (a==1|| a==2)
 return 1;
else 
  b=fibo(a-1)+fibo(a-2);
  return b;
}
