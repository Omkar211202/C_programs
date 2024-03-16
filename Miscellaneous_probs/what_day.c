#include <stdio.h>
void main()
{
char c;
printf("please enter the day of the week s,m,t,w,u,f,d\n");
scanf("%c",&c);
switch (c) 
{case 's':
printf("sunday");
break;
case 'm':
printf("monday");
break;
case 't':
printf("tuesday");
break;
case 'w':
printf("wednesday");
break;
case 'u':
printf("thursday");
break;
case 'f':
printf("friday");
break;
case 'd':
printf("saturday");
break;
default:
printf("invalid_char");
}
}

