



#include <stdio.h>
#include "date.h"




void main()
{da c,b;
printf("\nplease enter a date (works on valid and existing dates\n");
printf("please enter the day\n");
scanf("%d",&b.day);
printf("please enter the month\n");
scanf("%d",&b.mon);
printf("please enter the year\n");
scanf("%d",&b.yr);
c=next(b);
printf("the result is: %d/%d/%d \n",c.day,c.mon,c.yr);
}
