/*
Written By:K OMKAR REDDY
Date:16/12/2023
Implementing linked list
*/
# include <stdio.h>

//defining the node
typedef struct str{
int data;
struct str* next;
}str;

//using a short name for str node
typedef str node;

//These are the functions
void display_list(node*);
node* insert_at_begin(node*,int);
int count(node*);
node* create_list(int);
void enter_values(node*);
node* insert_after_position(node*,int,int);
node* delete_after_position(node*,int);
node* reverse_the_list(node* head);
node* remove_duplicates(node*head);
node* insert_in_ascending_order(node* head,int a);
node* concatenation(node* head1,node* head2);
node* intersection(node* head1,node* head2);





