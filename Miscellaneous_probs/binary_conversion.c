#include <stdio.h>
#include <math.h>
int binary(int);

void main()
{
int a,b;
printf("\nplease enter a decimal number\n");
scanf("%d",&a);
b=binary(a);
printf("the binary conversion is:\n %d\n",b);
}

int binary(int a)
{int counter=0;
int sum=0;
int factor=0;
while (counter==0)
  {int d= a/2;
  int e= a%2;
  a=d;
  if (a==0)
    {counter=1;}
   sum=sum+(e*pow(10,factor));
   factor++;
   }
  return sum;
  }
  
    
