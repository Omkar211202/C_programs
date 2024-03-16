/*
sum of digits
omkar kathi
21/07/23
*/
#include <stdio.h>
int main()
{
int a;
int b,c,d,e,f,g;
printf("please enter a 3 digit number\n");
scanf("%d",&a);
b=a%100;
c=a-b;
d=c/100;
e=b%10;
f=b-e;
g=f/10;
printf("\nthe sum is %d\n",d+g+e);
return 0;
}
