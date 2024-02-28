

#include <stdio.h>


void main()
{
FILE* f1=fopen("sample","a");
FILE* f2=fopen("output","r");

fseek(f1,2,2);
while(!feof(f2))
{fputc(fgetc(f2),f1);
}
fputc(-1,f1);
fclose(f1);
fclose(f2);
}

