//program written by omkar kathi
//intro to file handling:

#include<stdio.h>
#include<stdlib.h>
void main()
{char c;
int space,line,tab;
space=0;
line=0;
tab=0;

FILE* p;
p=fopen("sample","r");
if(!p)
  printf("the pointed not assigned");
c='s';
while(c!=-1)
{
  if (c=='	')
    {tab++;
    }
  if (c==' ')
   {space++;
   }
  if (c=='\n')
    {line++;
    }
  c=fgetc(p);
}
fclose(p);
printf("\nThe Number of tabs in the file sample are:%d\n",tab);
printf("\nThe Number of spaces in the file sample are:%d\n",space);
printf("\nThe Number of new lines in the file sample are:%d\n",line);
}

