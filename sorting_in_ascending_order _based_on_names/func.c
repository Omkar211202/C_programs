//Program by:omkar reddy k
//date:20-01-2024
//functions for inserting names in ascending order

#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#include <string.h>


int cmpr(char A[100],char B[100])
{int i;
  for(i=0;i<100;i++)
   {if(*(A+i)<*(B+i))
     return 1;

    else
    {if (*(A+i)==*(B+i))
	 continue;
    else
     return 0;
    }
   }
}

node* insert_in_ascending_order(int a)
{node *head,*t,*d,*e;
int i;
 if (a>0)
 {head=(node*)malloc(sizeof(node));
  
  
 printf("\nPlease enter student no 1:");
  getchar();
  gets(head->data);
  t=head;
  
  head->next=NULL;
  if (a>1)
   {for(i=1;i<a;i++)
      {printf("Please enter student no %d:",i+1);
       d=(node*)malloc(sizeof(node));
      
      gets(d->data);
      d->next=NULL;
      if (cmpr(head->data,d->data)==0)
          {d->next=head;
	   head=d;
	  }
      else
      {
      while(t->next!=NULL)
        {e=t;
	if (cmpr(t->data,d->data))
	    {
	    t=t->next;
	    }
	  else
	   {e->next=d;
	    d->next=t;
	    break;
	   }
         }
	if (t->next==NULL)
	{if (cmpr(t->data,d->data))
	   t->next=d;
	  else
	   d->next=t;
	}
        t=head;
       }
      }
      }
    }
return head;
}

void display(node* head)
{while(head!=NULL)
    {printf("%s\n",head->data);
     head=head->next;
    }
}
