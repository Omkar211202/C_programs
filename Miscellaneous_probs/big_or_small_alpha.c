#include<stdio.h>
void main()
{
char c;
printf("\nplease enter a alphabet\n");
scanf("%c",&c);
if (c>=65 && c<=90)
   printf("\nthe letter is in caps\n");
   else if (c>=97 && c<=122)
   printf("\nthe letter is in small\n");
   else
   printf("\nthe letter is a number or symbol\n");
}

