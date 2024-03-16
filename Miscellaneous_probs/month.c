#include <stdio.h>
void main()
{
char m;
printf("\nplease enter the month as said j,f,m,a,y,j,k,g,s,o,n,d\n");
scanf("%c",&m);
switch (m)
{case 'j':
case 'm':
case 'y':
case 'l':
case 'g':
case 'o':
case 'd':
printf("the days are 31 in number\n");
break;
case 'a':
case 'k':
case 's':
case 'n':
printf("the days are 30 in number\n");
break;
case 'f':
printf("the days are 28 in number\n");
break;
default:
printf("invalid char entered as input\n");
}
}
