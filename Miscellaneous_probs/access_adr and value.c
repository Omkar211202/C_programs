#include <stdio.h>

void main()
{
int array[5];
int *adr;
int i;
printf("\n");
for (i=0;i<5;i++)
   {printf("%p\n",&array[i]);
   }

int a[5]={1,2,3,4,5};

adr=a;
for (i=0;i<5;i++)
  {printf("The value is at %d:%d \n",i+1,*adr);
  adr++;
  }
}

