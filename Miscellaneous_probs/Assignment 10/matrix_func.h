// the header file 
#include <stdio.h>
double **allocate (int r,int c);
void print_mtr(double **a,int r,int c);
void read_mtr(double**a,int r,int c);
double trace(double **a,int r);
int check_symmetric(double **a,int r);
double **add_matrix(double **a,double **b,int r,int c);
double **sub_matrix(double **a,double **b,int r,int c);
double **prod_matrix(double **a,double **b,int rf,int cf,int rs,int cs);
