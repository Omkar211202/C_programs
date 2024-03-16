// program written by Omkar 
// functions for matrix



# include <stdio.h>
# include<stdlib.h>



//alloacating dynamic space to a matrix

double **allocate(int r,int c)
{
double**p;
int i;
p=(double**)malloc(r*sizeof(double*));
for (i=0;i<r;i++)
{
p[i]=(double*)malloc(c*sizeof(double));
}
return p;
}

void print_mtr(double **a,int r,int c)
{double p;
int i,j;
for (i=0;i<r;i++)
  {
   for (j=0;j<c;j++)
   {p=*(*(a+i)+j);
   printf("%.2lf ",p);
   }
   printf("\n");
  }

}

void read_mtr(double**a,int r,int c)
{
int i,j;
for (i=0;i<r;i++)
    {
      for (j=0;j<c;j++)
      {
       printf("please enter the %d%d th element\n",i+1,j+1);
       scanf("%lf",(*(a+i)+j));
       }
   }
}

double trace(double ** a,int r)
{int i,j;
double sum=0;
for (i=0;i<r;i++)
  {
    {sum=sum+(*(*(a+i)+i));
    }
    }
    return sum;
}

int check_symmetric(double **a,int r)
{
int i,j;
for (i=0;i<r;i++)
   {for (j=0;j<r;j++)
        if (*(*(a+i)+j)!=*(*(a+j)+i))
	   return 0;
   }
return 1;
}

double **add_matrix(double **a,double **b,int r,int c)
{double **o;
int i,j;
o=allocate(r,c);
for (i=0;i<r;i++)
   {for (j=0;j<c;j++)
      { *(*(o+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
      }
    }
return o;
}

double **sub_matrix(double **a,double **b,int r,int c)
{double **o;
int i,j;
o=allocate(r,c);
for (i=0;i<r;i++)
   {for (j=0;j<c;j++)
      { *(*(o+i)+j)=*(*(a+i)+j)-*(*(b+i)+j);
      }
    }
return o;
}

double **prod_matrix(double **a,double **b,int rf,int cf,int rs,int cs)
{double **o;
int i,j,k;
double sum;
o=allocate(rf,cs);
for (i=0;i<rf;i++)
   {for (k=0;k<cs;k++)
       {sum=0;
        for (j=0;j<rs;j++)
	  {sum=sum+*(*(a+i)+j)*(*(*(b+j)+k));
          }
	*(*(o+i)+k)=sum;
       }
    }
return o;
}

