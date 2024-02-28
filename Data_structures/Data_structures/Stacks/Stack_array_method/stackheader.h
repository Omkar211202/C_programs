
#define element_type int
#define top_empty -1

#include <stdio.h>

struct stackrecord
{
 int capacity;
 int top;
 element_type* array;
};

typedef struct stackrecord stack;
 
void initialise_array(stack*a);
void push(stack*a,element_type b);
element_type pop(stack*a);
int is_empty(stack*a);
int is_full(stack*a);
element_type top(stack*a);
void makeempty(stack*a);
void dispose(stack*a);
