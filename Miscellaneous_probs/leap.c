/*
leap year
omkar reddy
24/07/2023
*/
#include <stdio.h>
int main()
{
int a;
printf("please enter an year\n");
scanf("%d",&a);
if (a%400==0)
   printf("leap year\n");
else if (a%100==0)
        printf("not leap year\n");
     else if (a%4==0)
             printf("leap year\n");
	   else
	     printf("not leap year\n");
return 0;
}
