



#include <stdio.h>
#include "stackheader.h"
#include <stdlib.h>

void main()
{char choice;
char play='y';
int p;
stack* rec=(stack*)malloc(sizeof(stack));
rec->top=top_empty;
initialise_array(rec);
printf("\nPlease enter the number of elements in the array: ");
scanf("%d",&rec->capacity);
initialise_array(rec);
int count=0;
while (play=='y')
{printf("The count is %d",count);
printf("\nDo you wanna PUSH:i or POP:o into the stack: ");
getchar();
scanf("%c",&choice);
if (choice=='i')
  {printf("\nPlease enter the integer you wanna push: ");
   scanf("%d",&p);
   push(rec,p);
   }
else 
  if (choice=='o')
  {printf("\nPoped Out:%d",pop(rec));
  }
  else
     printf("\nBe Clear, i:PUSH and o:POP,accordingly enter your input");

printf("\nPrinting Few details:");
if(is_empty(rec))
  printf("\nThe stack is empty");
else
  {printf("\nThe stack is not empty");
   printf("\n%d is on top of the stack",top(rec));
  }
if (is_full(rec))
   printf("\nThe stack is full");
else
   printf("\nThe stack is not full");
   printf("\n_______________________________________________________________________________________________________");
count++;
printf("\n\nDo you still want to continue continue with this exercise:y/n");
getchar();
scanf("%c",&play);  
}

printf("\nMaking the stack empty");
makeempty(rec);
printf("\nI am still able to access capacity:%d",rec->capacity);
dispose(rec);
printf("\nDisposed the stack all out");
}



