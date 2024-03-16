#include <stdio.h>
#include <math.h>
void main()
{
double a,b;
char c;
printf("\nplease enter the operand c=cos,s=sin,m=max,t=tan,g=min,a=avg,+=addition,-=subraction,*=multiplication,/=division\n");
scanf("%c",&c);
if(c=='c'||c=='s'||c=='c'||c=='t'||c=='g')
{printf("\nplease enter the operand\n");
 scanf("%lf",&a);
  if(c=='s')
  printf("\n the result is %lf",sin(a));
  if(c=='c')
  printf("\n the result is %lf",cos(a));
  if(c=='t')
  printf("\n the result is %lf",tan(a));
}

else
{printf("\nplease enter the operands\n");
scanf("%lf",&a);
scanf("%lf",&b);
if (c=='+')
printf("\n the result is %lf\n",a+b);
if (c=='-')
printf("\n the result is %lf\n",a-b);
if (c=='*')
printf("\n the result is %lf\n",a*b);
if (c=='/')
printf("\n the result is %lf\n",a/b);
if (c=='m')
if (a>b)
printf("%lf\n",a);
else
printf("%lf\n",b);
if (c=='g')
if (a>b)
printf("%lf\n",b);
else
printf("%lf\n",a);


}
}





 



