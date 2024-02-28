/*
Written By:K OMKAR REDDY
Date:16/12/2023
Implementing linked list
*/
# include <stdio.h>
# include"linked_list.h"
# include <stdlib.h>

//This funtion creates the linked list for us
node* create_list(int n)
{node* temp,*head,*tail;
temp=(node*)malloc(sizeof(node));
if (n>0)
{head=temp;
head->next=NULL;
}
else
head=NULL;

int i=0;
for(i=0;i<n-1;i++)
{tail=(node*)malloc(sizeof(node));
temp->next=tail;
temp=tail;
}
temp->next=NULL;
return head;
}


//This function helps the user to enter the results for us
void enter_values(node* head)
{node* temp=head;
int c=0;
while(temp!=NULL)
{printf("\nplease enter the element no %d:",c+1);
scanf("%d",&(temp->data));
temp=temp->next;
c=c+1;
}
}

//This function prints the values entered in the linked list
void display_list(node* head)
{node *temp=head;
while(temp!=NULL)
  {printf("%d ",temp->data);
   temp=temp->next;
  }
}

//This function inserts an element at the start of the list itself
node* insert_at_begin(node*head,int x)
{
node *temp;
temp=(node*)malloc(sizeof(node));
if (temp)
{temp->data=x;
 temp->next=head;
}
head=temp;
return head;
}

//This function counts the number of elements in the function
int count(node* head)
{
node* temp=head;
int c=0;
while(temp!=NULL)
{
temp=temp->next;
c++;
}
return c;
}



//This function inserts an element in the given position
node* insert_after_position(node* head,int num,int pos)
{node *temp;
temp=(node*)malloc(sizeof(node));
temp->data=num;
node *prev=NULL,*curr=head;

int count=1;
if (head==NULL && pos>0)
  {return head;
   }
if (pos == 0)
  {temp->next=head;
   return head;
   }
else
  {
   while(count<pos && head !=NULL)
   {head=head->next;
    count=count+1;
   }    
   if (count==pos)
   {temp->next=head->next;
    head->next=temp;
   }
  }
return curr;
}

//This function deletes and element on its first occurence
node* delete_after_position(node*head,int num)
{
node *prev=NULL,*curr=head;
while(curr!=NULL)
{if (curr->data==num)
 {if(curr==head)
    head=head->next;
  else 
  prev->next=curr->next;
  free(curr);
  }
 else
  {prev=curr;
  curr=curr->next;
  }
}
  return head;
}

node* reverse_the_list(node* head)
{int count=1;

if (head!=NULL&&head->next!=NULL)
   {node* temp,*curr,*prev;
   prev=head;
   curr=head->next;
   head->next=NULL;
   while(curr!=NULL)
    {temp=curr->next;
     curr->next=prev;
     prev=curr;
     if(temp!=NULL)
     curr=temp;
     else
     return curr;
    }
   }
return head;
}


node* insert_in_ascending_order(node* head,int a)
{
node* temp=head;
node* t=head;
temp=(node*)malloc(sizeof(node));
if (temp!=NULL)
 {temp->data=a;
  temp->next=NULL;
 }
if (head==NULL||head->data>a)
  { temp->next=head;
   head=temp;
  }
else
 {while (t->data<a)
  {if (t->next==NULL||t->next->data>a)
   {temp->next=t->next;
    t->next=temp;
   }
   else
     t=t->next;
  }
  }
  return head;
}

node* concatenation(node* head1,node* head2)
{
node* final,*p,*t;
  if (head1==NULL)
   {return head2;
    }
  else
   {if (head1!=NULL)
    {t=(node*)malloc(sizeof(node));
     t->data=head1->data;
     p=t;
     head1=head1->next;
     final=t;
     while(head1!=NULL)
      {t=(node*)malloc(sizeof(node));
      t->data=head1->data;
      p->next=t;
      p=t;
      head1=head1->next;
      }
     if (head2!=NULL)
      {while(head2!=NULL)
       {t=(node*)malloc(sizeof(node));
        t->data=head2->data;
        p->next=t;
        p=t;
        head2=head2->next;
       }
      }
       p->next=NULL;
       return final;
    }
   }
}

node* intersection(node* head1,node* head2)
{int count=0;
node* final=NULL,*p,*t;
if (head1 !=NULL && head2 !=NULL)
 {while (head1!=NULL)
   {while (head2!=NULL)
     {if (head1->data==head2->data)
       {t=(node*)malloc(sizeof(node));
        t->data=head1->data;
        if (count==0)
        {final=t;
         p=t;
        }
        else
        {p->next=t;
         p=t;
        }
        count++;
        break;
       }
     head2=head2->next;
     }
     head1=head1->next;
    }
}	

   p->next=NULL;
   return final;
}

