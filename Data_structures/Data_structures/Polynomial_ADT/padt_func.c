#include <stdio.h>
#include "padt_header.h"
#include <stdlib.h>

polyadt* insert_in_descending_order(polyadt*head,polyadt*t)
{
polyadt* b=head;
if (head==NULL)
{head=t;
 return head;
}

if (head->expo<t->expo)
{t->next=head;
head=t;
return head;
}

while(b!=NULL)
{if(b->next==NULL)
   {if(b->expo!=t->expo)
      {b->next=t;
       break;
      }
    else
    {b->coef=b->coef+t->coef;
     break;
     }
    }
if (b->next->expo<t->expo)
  {
   t->next=b->next;
   b->next=t;
   break;
  }

 if(b->next->expo==t->expo)
  {
   b->next->coef=b->next->coef+t->coef;
   free(t);
   break;
  }
  else
   {
    b=b->next;
   }
}
return head;
}

polyadt* create(int a)
{
int i;
polyadt*t=NULL;
polyadt*head=NULL;
for(i=0;i<a;i++)
 {t=(polyadt*)malloc(sizeof(polyadt));
  t->next=NULL;
  printf("\nPlease enter the coefficient of element no %d: ",i+1);
  scanf("%f",&t->coef);
  printf("Please enter the exponent of element no %d: ",i+1);
  scanf("%d",&t->expo);
  head=insert_in_descending_order(head,t);
 }
return head;
}

void display(polyadt* head)
{printf("\n");
while(head!=NULL)
 {printf("(%f,%d) ",head->coef,head->expo);
  head=head->next;  
 }
printf("\n");
}

polyadt* add(polyadt* p1,polyadt* p2)
{int g,f;
polyadt*head=NULL;
polyadt*t=NULL;

if (p1==NULL)
   return p2;
if (p2==NULL)
   return p1;
   
while(p1!=NULL && p2!=NULL)
{
if (p1->expo<p2->expo)
   {
   g=p2->expo;
    f=p2->coef;
    p2=p2->next;
   }
else
  if(p1->expo>p2->expo)
   {
   g=p1->expo;
    f=p1->coef;
    p1=p1->next;
   }
  else 
    if (p1->expo==p2->expo)
      {
      g=p1->expo;
       f=p1->coef+p2->coef;
       p1=p1->next;
       p2=p2->next;
      }
polyadt *h=h?p1:p2;
while(h!=NULL)
{
g=h->expo;
 f=h->coef;
 h=h->next;
}           
t=(polyadt*)malloc(sizeof(polyadt));
t->expo=g;
t->coef=f;
head=insert_in_descending_order(head,t);
}
return head;
}

polyadt* multiplication(polyadt*p1,polyadt*p2)
{int g,f;
polyadt*head=NULL;
polyadt*t=NULL;
polyadt*temp=p2;
if(p1!=NULL&&p2!=NULL)
{while (p1!=NULL)
    {p2=temp;
    while (p2!=NULL)
       {g=p1->expo+p2->expo;
        f=p1->coef*p2->coef;
        p2=p2->next;
        t=(polyadt*)malloc(sizeof(polyadt));
        t->expo=g;
        t->coef=f;
        head=insert_in_descending_order(head,t);
        }
      p1=p1->next;
    }
return head;
}
else
  printf("\nPlease Enter a Valid Input");
}
