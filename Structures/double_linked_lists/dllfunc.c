# include<stdio.h>
# include"dllheader.h"
# include<stdlib.h>

dll* insert_at_begin(dll* head,int x)
{
dll* t=(dll*)malloc(sizeof(dll));
if (t!=NULL)
{t->data=x;
t->next=head;
t->prev=NULL;
return t;
}
}

int find_pos(dll* head,int x)
{
int c=1;
while (head!=NULL)
 {if (head->data==x)
    {return c;
    }
  else
    head=head->next;
  }
return -1;
}

dll* insert_after_pos(dll* head,int x,int y)
{dll* b=head;
if (head!=NULL)
  {if (x==0)
    b=insert_at_begin(head,y);
  else
   {int c=1;
    dll* t=(dll*)malloc(sizeof(dll));
    t->data=y;
    t->next=NULL;
    t->prev=NULL;
    if (t!=NULL)
    {
    while (c<x&&head!=NULL)
     {head=head->next;
      c++;
      }
      if(c==x&&head!=NULL)
      {t->prev=head;
      t->next=head->next;
      if(t->next!=NULL)
        t->next->prev=t;
      head->next=t;
      }
    }
   }
  }
return b;
}

dll* delete(dll* head,int x)
{dll* b=head;
if (head->data==x)
  {dll* t=head;
   head=head->next;
   free(t);
   return head;
  }
  
while(head!=NULL)
 {if (head->data==x)
   {head->prev->next=head->next;
    head->next->prev=head->prev;
    free(head);
   }
  }
return head;
}

void display_list(dll* head)
{while (head!=NULL)
  {printf("%d",head->data);
   head=head->next;
  }
}

