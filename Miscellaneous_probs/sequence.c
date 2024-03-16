
//the sequence in this case is:0/1+1/2+2/3+3/4+4/5+.....+n/n+1.

#include <stdio.h>
void main()
{
int c;
float a,b,d;
a=0;
b=0;
printf("\nplease enter the value of n\n");
scanf("%d",&c);
while (a<c)
{
d=a/(a+1);
b=b+d;
a=a+1;
}
printf("\nthe sum of 1st n terms of the sequence is %f\n",b);
}
