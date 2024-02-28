#include <stdio.h>

char check_cap(char c);
char check_small(char c);

void main(int d,char *s[])
{
FILE *p,*q;
p=fopen(s[1],"a+");
q=fopen(s[2],"w");
char c=fgetc(p);
if(c!=-1)
{if (c!=' '&&c!='\n'&&c!=','&&c!='.')
{c=check_cap(c);
 printf("%c",c);
}
while(c!=-1)
{
c=fgetc(p);
if (c!=' '&&c!='\n'&&c!=','&&c!='.')
 {c=check_small(c);
   printf("%c",c);
 }
else
 { printf("%c",c);
   c=check_cap(fgetc(p));
  if (c!=' '&&c!='\n'&&c!=','&&c!='.')
  printf("%c",c);
 }
}

}
fclose(p);
fclose(q);
}

char check_cap(char c)
{if (c>=65 && c<=90)
   return c;
 else
   return c-32;
 }
 
char check_small(char c)
{if (c>=97 && c<=122)
   return c;
 else
   return c+32;
 }
