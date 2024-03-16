#include <stdio.h>
long int factorial(long int);
long int combination(long int c,long int r);

void main()
{
int n,counter,i;
long int d;
printf("\nPLease enter the number of rows\n");
scanf("%d",&n);
for (counter=0;counter<=n;counter++)
   {
   for(i=0;i<=counter;i++)
     {  d=combination(counter,i);
       printf("%ld  ",d);
      }
   printf("\n");
   }
}
long int factorial(long int a)
{if (a==0)
   return 1;
   long int product=1;
   for (int j=1;j<=a;j++)
      {product=product*j;}
   return product;
}

long int combination(long int c,long int r)
{
long int b=factorial(c)/(factorial(c-r)*factorial(r));
return b;
}

      
