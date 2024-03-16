#include<stdio.h>
#include<math.h>
void sum (int,int,int,int);
void sub (int,int,int,int);
void multip (int,int,int,int);
void division (int,int,int,int);

void main()
{char a;
int b,c,d,e;
printf("\nEnter S:sum,L:subraction,M:multiplication,D:division\n");
scanf("%c",&a);
printf("Enter x1,y1,x2,y2\n");
scanf("%d %d %d %d",&b,&c,&d,&e);
if (a=='S')
  sum(b,c,d,e);
if (a=='L')
  sub(b,c,d,e);
if (a=='M')
  multip(b,c,d,e);
if (a=='D')
  division(b,c,d,e);
}

void sum(int a,int b,int c,int d)
{int z=a+c;
int y=c+d;
printf("The sum is:\n%d+%di\n",z,y);
}
void sub(int a,int b,int c,int d)
{int z=a-c;
int y=c-d;
printf("The subtraction is:\n%d+%di\n",z,y);
}
void multip(int a,int b,int c,int d)
{int z=(a*c)-(b*d);
int y=(a*d)+(b*c);
printf("the product is\n%d+%di\n",z,y);
}

void division(int a,int b,int c,int d)
{float z=(a*c)+(b*d)/1.0*(pow(c,2)-pow(d,2));
 float y=(b*c)-(a*d)/1.0*(pow(c,2)-pow(d,2));
 float p=pow(c,2)+pow(d,2);
 printf("The division is\n%f+%fi\n",z/p,y/p);
}


