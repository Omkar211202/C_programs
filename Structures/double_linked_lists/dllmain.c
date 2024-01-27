//Program written by: Omkar Reddy K
//Date:23/01/2024
//Programming double linked lists

# include<stdio.h>
# include"dllheader.h"

void main()
{
dll* head=NULL;
head=insert_at_begin(head,4);
display_list(head);
int c=find_pos(head,4);
printf("\nFound in %dth position\n",c);
head=insert_after_pos(head,1,8);
printf("\nThe below is display of the list after inserting 8 in the after first place\n");
display_list(head);

head=delete(head,4);
printf("\nThe below is display of the list after deleting\n");
display_list(head);
printf("\n________Program Executed_________\n");
}
