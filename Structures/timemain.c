





#include <stdio.h>
#include "time.h"

void main()
{
time a,b,c,d;
printf("\nplease enter time value 1 in 24hrs:\n");
printf("please enter the hrs\n");
scanf("%d",&a.hrs);
printf("please enter the min\n");
scanf("%d",&a.min);
printf("please enter the sec\n");
scanf("%d",&a.sec);
printf("\nplease enter time value 2 in 24hrs:\n");
printf("please enter the hrs\n");
scanf("%d",&b.hrs);
printf("please enter the min\n");
scanf("%d",&b.min);
printf("please enter the sec\n");
scanf("%d",&b.sec);
c=add(a,b);
printf("the addition of times values is:  %d:%d:%d\n",c.hrs,c.min,c.sec);
d=sub(a,b);
printf("the subrtraction of times values is:  %d:%d:%d\n",d.hrs,d.min,d.sec);

}
