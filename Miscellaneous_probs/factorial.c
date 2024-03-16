#include <stdio.h>
void main()
{
int d,c;
long int product;
d=1;
product=1;
printf("\nplease enter n_number\n");
scanf("%d",&c);
while (d<=c)
{
product=product*d;
d=d+1;
}
printf("the product is %ld\n",product);
}
