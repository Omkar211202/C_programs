#include <stdio.h>


void main(int argc,char*argv[])
{

FILE *p1,*p2;
 int m=0;
 char c,d;
 int check=0;
 int line=0;
 p1=fopen(argv[1],"r");
 p2=fopen(argv[2],"r");

 while (!feof(p1))
 {c=fgetc(p1);
 if (c=='\n')
   m=ftell(p1);
   
 if (c==fgetc(p2))
  {continue;
  }
 else
    {printf("The lines are not same\n");
    check=1;
    break;
    }
 }
 if (check==1)
 {
 fseek(p1,m,0);
 fseek(p2,m,0);
 c=fgetc(p1);
 d=fgetc(p2); 
 printf("\nThe Following is the line 1\n"); 
 while (c!='\n'&&c!=-1)
   {printf("%c",c);
    c=fgetc(p1);
   }
 printf("\nThe Following is the line 2\n"); 
 while (d!='\n'&&d!=-1)
   {printf("%c",d);
    d=fgetc(p2);
   }
  printf("\n");
 }
 if (check==0)
 {printf("\nthe files are same\n");
 if  (!feof(p1)||!feof(p2))
    printf("\nOne file looks likes to an extension of the other\n");
 }
}

