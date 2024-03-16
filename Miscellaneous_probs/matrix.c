// to do
/*
input matrix
display matrix
check symmetric
add matrics
multiply
transpose
*/

#include <stdio.h>
#define row 2
#define column 2

void input_matrix (double x[][column],int a,int b);
void display_matrix(double x[][column],int a,int b);
void  checksym(double x[][column],int a,int b);
void add(double x[][column],double y[][column],double c[][column],int a,int b);
void multiply(double x[][column],double y[][column],double c[][column],int a,int b,int d);
void transpose(double x[][column],int a,int b);

void main()
{
double array_1[row][column];
double array_2[row][column];
double array_3[column][column];
double result[row][column];
double result_2[row][column];

printf("\nplease enter the first matrix\n");
input_matrix(array_1,row,column);
printf("please enter the second matrix\n");
input_matrix(array_2,row,column);
printf("please enter the third matrix\n");
input_matrix(array_3,column,column);

printf("this displays elements entered in matrix one\n");
printf("the first matrix you entered is\n");
display_matrix(array_1,row,column);
printf("the second matrix you entered is\n");
display_matrix(array_2,row,column);
printf("the third matrix you entered is\n");
display_matrix(array_3,column,column);

printf("this tells you whether symmetric or not in regards to matrix 1\n");
checksym(array_1,row,column);

printf("this adds 2 matrices-matrix 1 and 2\n");
add(array_1,array_2,result,row,column);
display_matrix(result,row,column);

printf("this multiplies matrix 2 with 3\n");
multiply(array_2,array_3,result_2,row,column,column);
display_matrix(result_2,row,column);

printf("this tells you the transpose of matrix 1\n");
transpose(array_1,row,column);
}

void input_matrix(double x[][column],int a,int b)
{
int i,j;
for (i=0;i<a;i++)
   {for (j=0;j<b;j++)
      {printf("please enter the %d,%d th element\n",i+1,j+1);
      scanf("%lf",&x[i][j]);
      }
   }
}

void display_matrix(double x[][column],int a,int b)
{
int i,j;
for (i=0;i<a;i++)
  {for (j=0;j<b;j++)
    {printf("%lf  ",x[i][j]);}
  printf("\n");
  }
}


void checksym(double x[][column],int a,int b)
{
int i,j,c=0;
for (i=0;i<a/2;i++)
   {for (j=0;j<b;j++)
    {if (x[i][j]!=x[j][i])
     { printf("Not symmetric matrix\n");
       c=1;
       break;
     }  
   }
   if (c==1)
     break;
   }
if (c==0)
  printf("symmetric matrix\n");
 }

void add(double x[][column],double y[][column],double z[][column],int a,int b)
{
int i,j;
for (i=0;i<a;i++)
  {for (j=0;j<b;j++)
     {z[i][j]=x[i][j]+y[i][j];
      }
  }
}

void multiply(double x[][column],double y[][column],double z[][column],int a,int b,int c)
{int i,j,k;
double sum; 
for (i=0;i<a;i++)
  {for (j=0;j<c;j++)
    {sum=0;
    for (k=0;k<b;k++)
     {sum=sum+x[i][k]*y[j][k];
      }
     z[i][j]=sum;
    }

   }
}


void transpose(double x[][column],int a,int b)
{int i,j;
for (j=0;j<b;j++)
  {for (i=0;i<a;i++)
     {printf("%lf  ",x[i][j]);}
     printf("\n");
  }
}
