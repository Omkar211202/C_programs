#include <stdio.h>
#include <math.h>
# define N 5

float avg(float A[],int);
float max(float A[],int);
float min(float A[],int);
float med(float A[],int);
float std_dev(float A[],int);

void main()
{
float A[N];
float b;
int i;
char p;
printf("Choose the operation to do: a:avg,b:max,c:min,d:med,e:std_dev\n");
scanf("%c",&p);
for (i=0;i<N;i++)
   {printf("\nPlease enter the marks of Student %d\n",i+1);
    scanf("%f",&A[i]);
    }
switch (p)
{case 'a':
  b= avg (A,N);
  break;
  case 'b':
  b=max (A,N);
  break;
  case 'c':
  b= min (A,N);
  break;
  case 'd':
  b= med (A,N);
  break;
  case 'e':
  b= std_dev (A,N);
  break;
}
printf("the answer is %f\n",b);
}

float avg (float A[],int c)
{
int i;
float sum=0;
for (i=0;i<c;i++)
{
 sum=sum+A[i];
}
return sum/c;
}

float max (float A[],int c)
 {
 int i;
 float max=A[0];
 for (i=1;i<c;i++)
  {if (A[i]>max)
     max=A[i];
  }
  return max;
  }

float min (float A[],int c)
{
int i;
float min=A[0];
for (i=1;i<c;i++)
 {if (A[i]<min)
   min=A[i];
 }
 return min;
 }
  
float med(float A[],int c)
{return 0;
}

float std_dev(float A[],int c)
{
int i;
float sd=0;
float sum=0;
for (i=0;i<c;i++)
{
  sd=pow((A[i]-avg(A,c)),2);
  sum=sum+sd;
}

return sqrt(sum)/sqrt(c);

}

 
 

 

