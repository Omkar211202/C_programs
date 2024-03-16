#include <stdio.h>
#define max 100

void main()
{
int i,j, A[max];
for (i=0;i<100;i++)
{A[i]=i+1;
}
for (i=2;i<100;i++)
{    for (j=i+1;j<100;j++)
     {   if (A[j]%i==0)
            *(A+j)=0;
      }
}

for (i=0;i<100;i++)
{
printf("%d ",A[i]);
}
}
       

