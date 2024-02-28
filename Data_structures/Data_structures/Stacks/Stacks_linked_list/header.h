//program written by:Omkar Reddy K
//linked list implementation of stack

#include<stdio.h>

typedef int element_type;

struct node{
element_type ele;
struct node* next;
};

typedef struct node* ptrtonode;
typedef struct node stack;

stack* create_stack();
int is_stack_empty(stack* s);
void push(int x,stack* s);
element_type pop(stack* s);
void dispose(stack* s);
void makeempty(stack* s);
element_type top(stack* s);
