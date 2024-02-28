//Program by:Omkar Reddy K
//Find and Replace words

#include <stdio.h>
void main()
{
FILE* p=NULL;
FILE* q=NULL;
FILE* k=NULL;

char find[10];
char replace[10];
char c;
int i;
int check;

p=fopen("test","r");
q=fopen("temp","w");
printf("\nPlease enter the word you wanna find:");
fgets(find,10,stdin);
printf("\nPlease enter the word you wanna replace it with:");
fgets(replace,10,stdin);
if (p!=NULL)
{c='s';
while(c!=EOF)
{k=p;
c=fgetc(p);
if (c==find[0])
   check=1;
else
 {p=k;
  c='s';
  while(c!=' ')
  {c=fgetc(p);
   printf("%c",c);
  }
 }
}
}
}
   
       
       
       
       
       
       
       
       
       
       
       
 
