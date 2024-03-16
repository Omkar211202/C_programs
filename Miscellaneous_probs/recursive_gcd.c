#include <stdio.h>
int gcd(int,int);

void main()
{
int a,b,c;
printf("enter the 2 numbers\n");
scanf("%d %d",&a,&b);
c=gcd(a,b);
printf("the gcd is %d\n",c);
}

int gcd(int a,int b)
{
int c,d;
if (a==1 || b==1)
 return 1;
else
{if (a<b)
 c=a;
 else 
 {c=b;
  b=a;
  }
  return (gcd(c,b%c));
 }
}

 
