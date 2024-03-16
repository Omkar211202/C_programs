#include <stdio.h>
#define max 5
void swap (float *a,float *b);
void selection (float *x,int a);
void bubble (float *x,int a);
void print(float x[],int a);

//This is the main function
void main()
{
float A[max];
char c;
int i;

printf("please enter the sort you want to use S:selection,B:bubble\n");
scanf("%c",&c);

for (i=0;i<max;i++)
{
printf("\nplease enter the element no %d\n",i+1);
scanf("%f",&A[i]);
}

switch (c)
{
case 'S':
   selection(A,max);
   break;
case 'B':
    bubble(A,max);
    break;
}
print(A,max);
}

//this is the swap function
void swap(float *a,float *b)
{
float c;
c=*a;
*a=*b;
*b=c;
}

//this is the selection sort algorithm
void selection (float *x,int a)
{
int i,j,min;
for (i=0;i<a-1;i++)
{
min=i;   
 for (j=i+1;j<a;j++)
      {if (x[j]<x[min])
          min=j;
       } 
  if (min!=i)
     swap(&x[min],&x[i]);
}
}

//this is the bubble sort algorithm
void bubble (float *x,int a)
{
int i,j;
for (i=0;i<a-1;i++)
{ for (j=0;j<a-i-1;j++)
  {if (x[j]>x[j+1])
    swap(&x[j],&x[j+1]); 
}
}
}

//this function prints the output//
void print(float x[],int a)
{int i;
printf("{ ");
for (i=0;i<a;i++)
{
if (i<a-1)
printf("%f, ",x[i]);
else if (i=a-1)
printf("%f",x[i]);  
}
printf(" }\n");
}

