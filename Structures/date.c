





#include <stdio.h>
#include "date.h"

da next(da a)
{
da b;
int c=a.yr;
int d=a.mon;
int e=a.day;

if (e==31&&d==12)
{
c=a.yr+1;
d=1;
e=1;
}
else if(e==31&&d==1||d==3||d==5||d==7||d==8||d==10)
      {
      e=1;
      d=d+1;
      }
      else if(e==28&&d==2)
      {e=1;
      d=3;
      }
           else if (e==30||e==31&&d==4||d==6||d==9||d==11)
	    {e=1;
	    d=d+1;
	    }
	    
	    
	    else 
	      {e=e+1;
	      }

b.day=e;
b.mon=d;
b.yr=c;
return b;
}









