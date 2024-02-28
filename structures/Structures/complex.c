



#include <stdio.h>
#include "complex.h"

compl add(compl a,compl b)
{
compl c;
c.r=a.r+b.r;
c.i=a.i+b.i;
return c;
}

compl sub(compl a,compl b)
{
compl c;
c.r=a.r-b.r;
c.r=a.i-b.i;
return c;
}

compl multip(compl a,compl b)
{
compl c;
c.r=a.r*b.r-a.i*b.i;
c.i=a.i*b.r+a.r*b.i;
return c;
}

compl div(compl a,compl b)
{compl c;
if (b.r==0 && b.i==0)
printf("division is not possible");
else
{c.r=(a.r*b.r+a.i*b.i)/(b.r*b.r+b.i*b.i);
 c.i=(a.i*b.r-a.r*b.i)/(b.r*b.r+b.i*b.i);
 return c;
}
}
