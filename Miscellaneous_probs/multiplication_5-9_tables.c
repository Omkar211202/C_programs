#include <stdio.h>
void main()
{
int a,b,c,d,e,counter;
counter=1;
do
{
a=5*counter;
b=6*counter;
c=7*counter;
d=8*counter;
e=9*counter;
printf("%d %d %d %d %d\n",a,b,c,d,e);
counter++;
}
while (counter<10);
}

