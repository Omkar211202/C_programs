#include <stdio.h>
void main()
{
int a,b,counter,product;
product=1;
counter=1;
printf("please enter the number of inputs\n");
scanf("%d",&b);
do
{
printf("please enter a number%d\n",counter);
scanf("%d",&a);
if (a==0)
continue;
product=product*a;
counter=counter+1;
}
while (counter<=b);
printf("the product of n numbers is %d\n",product);
}

