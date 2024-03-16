// program to find the value of pi constant.

#include <stdio.h>
#include <math.h>

double pi_term(double n)
{
 double pie;
 pie = 4*(pow(-1, n)*(1/(2*n + 1)));
 //printf("%lf\n", pie);
 return pie;
}

void main()
{
 double n;
 printf("Enter (n): "); scanf("%lf", &n);
 
 double pi_v = 0;
 for (int i = 0; i < n; i += 1)
 {
  pi_v += pi_term(i);
 }

 printf("The value of pi is: %lf\n", pi_v);
}
