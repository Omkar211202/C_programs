#include <stdio.h>
#include <math.h>
float e_power_x(float);
float sinx(float);
float cosx(float);
float factorial(int);

void main()
{
char a;
int b;
float c;
printf("\nEnter E:exponentiation,S:sin,C:cos\n");
scanf("%c",&a);
printf("Enter the value of an integer\n");
scanf("%d",&b);
switch(a)
{case 'E':
  c=e_power_x(b);
  break;
case 'S':
  c=sinx(b);
  break;
case 'C':
  c=cosx(b);
  break;
default:
  printf("Enter a correct char\n");
  c=000;
 }
 printf("%f\n",c);
 }

float factorial(int a)
{float product=1.0;
for (int i=1;i<=a;i++)
  {product=product*i;
  }
 return product;
 }

float e_power_x(float a)
{int counter=1;
float sum=0;
int factor=0;
while (factor==0)
  {float b=pow(a,counter)/(factorial(counter));
  sum=sum+b;
  if (b<0.001)
    factor=1;
  counter=counter+1;
  }
  return sum+1;
}

float sinx(float a)
{
int counter=0;
float sum=0;
int factor=0;
float b4c=0;
float c;
while (factor==0)
  {float b=(pow(-1,counter)*pow(a,2*counter+1))/factorial(2*counter+1);
   sum=sum+b;
   if (b4c-b<0)
      c=-1*(b4c-b);
   else 
     c=b4c-b;
 if (c<0)
   b=-1*b;
 if (b<0.001)
     factor=1;
   counter=counter+1;
   b4c=b;
}
  return sum;
}

float cosx(float a)
{
  int counter=1;
  float sum=0;
  int factor=0;
  while (factor==0)
    {float b=(pow(-1,counter)*pow(a,2*counter))/factorial(2*counter);
     sum=sum+b;
 if (b<0.001)
   factor=1;
    counter=counter+1;
   }
    return sum+a+1;
}

