





# include <stdio.h>
# include "complex.h"

void main()
{
compl a,b,c;
printf("please the real part of numb 1\n");
scanf("%lf",&a.r);
printf("please the real part of numb 2\n");
scanf("%lf",&b.r);
printf("please the imaginary part of numb 1\n");
scanf("%lf",&a.i);
printf("please the imaginary part of numb 2\n");
scanf("%lf",&b.i);
c=add(a,b);
printf("their addition is:\n");
printf("%f + %fi\n",c.r,c.i);
c=sub(a,b);
printf("their subtraction is:\n");
printf("%f + %fi\n",c.r,c.i);
c=multip(a,b);
printf("their multiplication is:\n");
printf("%f + %fi\n",c.r,c.i);
c=div(a,b);
printf("their division is:\n");
printf("%f + %fi\n",c.r,c.i);
}

