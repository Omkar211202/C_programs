






# include <stdio.h>
# include "time.h"

time add(time a,time b)
{
time c;
int d=a.hrs*3600+a.min*60+a.sec;
int e=b.hrs*3600+b.min*60+b.sec;
int f=d+e;
c.hrs=f/3600;
d=f%3600;
c.min=d/60;
e=d%60;
c.sec=e;
return c;
}


time sub(time a,time b)
{
time c;
int d=a.hrs*3600+a.min*60+a.sec;
int e=b.hrs*3600+b.min*60+b.sec; 
int f=d-e; 

if (f<0)
   f=f*-1;
   
c.hrs=f/3600;
d=f%3600;
c.min=d/60;
e=d%60;
c.sec=e;
return c;
}

