#include <stdio.h>

void main()
{
FILE*p,*q;
p=fopen("sample","r");
q=fopen("output","w");
if (p!=NULL&&q!=NULL)
{
while(!feof(p))
{fputc(fgetc(p),q);
}
}
fclose(q);
fclose(p);
}
