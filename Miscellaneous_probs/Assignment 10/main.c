#include <stdio.h>
#include "matrix_func.h"

void main()
{double **u,**m,**k,**h;
//only for multiplication 
double **a,**b,**d;
int r1,c1,r2,c2;
double f,o;
int r,c,j,g;

printf("please enter the number of rows and columns a square matrix for further calculations\n");
scanf("%d",&r);
scanf("%d",&c);

u=allocate(r,c);
read_mtr(u,r,c);
print_mtr(u,r,c);

printf("please enter the number of rows you enter for matrix 1 \n");
scanf("%d",&j);
m=allocate(j,j);
read_mtr(m,j,j);
print_mtr(m,j,j);
g=check_symmetric(m,j);
if (g==1)
    printf("the matrix 2 is symmetric\n");
else
    printf("the matrix 2 is non symmetric\n");

f=trace(m,j);
    printf("the trace of matrix 2 is %lf \n",f);

k=add_matrix(u,m,r,c);
printf("the added matrix is:\n");
print_mtr(k,r,c);

h=sub_matrix(u,m,r,c);
printf("the subtracted matrix is:\n");
print_mtr(h,r,c);

//multiplication ops:
printf("please enter the rows in matrix 1 (multip)\n");
scanf("%d",&r1);
printf("please enter the columns in matrix 1 (multp)\n");
scanf("%d",&c1);
printf("please enter the columns in matix 2 (multip)\n");
scanf("%d",&c2);
a=allocate(r1,c1);
printf("please enter the elements for matrix 1 multiplication\n");
read_mtr(a,r1,c1);
b=allocate(c1,c2);
printf("please enter the elements for matrix 2 multiplication\n");
read_mtr(b,c1,c2);
d=prod_matrix(a,b,r1,c1,c1,c2);
printf("the product of the above entered matrices is:\n");
print_mtr(d,r1,c2);
}

