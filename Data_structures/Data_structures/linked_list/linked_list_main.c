/*
Written By:K OMKAR REDDY
Date:16/12/2023
Implementing linked list
*/
# include <stdio.h>
# include"linked_list.h"

void main()
{
int c,d;
node* head=NULL;
node* head2=NULL;
node* final=NULL;
printf("\nPlease enter the number of vals you want in the list\n");
scanf("%d",&c);
//This sets the array right for us
head=create_list(c);

//This asks us to enter the values for the elements in the array
enter_values(head);

//This prints the values of the elements in the array
display_list(head);

//This counts the values in the array
d=count(head);
printf("\nthe no of elements in the list before insertion is %d\n",d);

//This enters the value 10 at the beginning of the list
head=insert_at_begin(head,10);
display_list(head);

d=count(head);
printf("\nthe no of elements in the list after first insertion is %d\n",d);

//This function places after a given place
printf("\ninserting 2 in after place 3\n");
head=insert_after_position(head,2,3);
display_list(head);

//This function helps in deleting the first occurence of an element
printf("\ndeleting the first occurence of 2\n");
head=delete_after_position(head,2);
display_list(head);

//This helps in reversal of a list
printf("\nPrinting the list in reverse order\n");
head=reverse_the_list(head);
display_list(head);

//This inserts an element in the ascending order of its occurence
printf("\nPrinting the list after inserting in ascending order\n");
head=insert_in_ascending_order(head,2);
display_list(head);

//concating two lists
printf("\n We are gonna concat two linked list\n");
printf("\nPlease enter the number of vals you want in the list 2\n");
scanf("%d",&c);
head2=create_list(c);
enter_values(head2);
final=concatenation(head,head2);
printf("\nThe list after concatenation is displayed below\n");
display_list(final);

//finding the intersection in two lists
printf("\nThe list after intersection is displayed below\n");
final=intersection(head,head2);
display_list(final);








}
