#include <stdio.h>
void main()
{
int a,sum,counter,n;
counter=1;
sum=0;
printf("\nplease enter the number of terms\n");
scanf("%d",&n);
while (counter<=n)
{printf("\nplease enter a number %d\n",counter);
scanf("%d",&a);
if (a<0)
break;
else
sum=sum+a;
counter++;
}
printf("the average is %lf\n",(double) sum/(counter-1));
}
