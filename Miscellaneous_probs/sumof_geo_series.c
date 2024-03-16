#include <stdio.h>
#include <math.h>
void main()

{
int a,b,counter,sum,n,c;
printf("\nplease enter a number of terms\n");
scanf("%d",&n);
printf("please enter the value of the base \n");
scanf("%d",&a);
printf("please enter the value of the constant multiplied\n");
scanf("%d",&b);
sum=0;
counter=1;
for(counter=1;counter<=n;counter++)
{c=pow(b,counter);
sum=sum+c;
}
printf("the sum of n terms in %d\n",a*sum);
}

