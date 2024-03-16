#include <stdio.h>
#define size 5

void swap(int x[],int a,int c,int d);
void main()
{
int A[size]={1,2,3,4,5};
int temp;
int i;
for (i=0;i<size-1;i=i+2)
{
temp=A[i];
A[i]=A[i+1];
A[i+1]=temp;
}

for (i=0;i<size;i++)
{printf("%d ",A[i]);
}
printf("\n");
}
