#include <stdio.h>

void main()
{
int a,i;
int A[10]={0};

printf("\nplease enter the value of the number whose table you wanna print\n");
scanf("%d",&a);


for (i=1;i<=9;i++)
 { A[i]=i*a;
 }


printf("%d %d %d %d %d %d %d %d %d %d",A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9]);
}


