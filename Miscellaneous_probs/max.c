// program prints the maximum of first n integers entered by the user

#include <stdio.h>

void main()
{
 int n, a, max = 0;
 printf("Enter (n): "); scanf("%d", &n);
 for (int i=0; i<n; i+=1)
 {
  printf("Enter Term  %d: ", i+1); scanf("%d", &a);
  if (max <=  a) {max = a;}
 }
 printf("Maximum of the first %d terms is %d. \n", n, max);

}
