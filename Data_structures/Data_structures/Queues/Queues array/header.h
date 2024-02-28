//Program written by:OMkar Reddy K



#include <stdio.h>

typedef int element_type;

struct q_record{
int capacity;
int front;
int rear;
element_type* queue;
};

typedef struct q_record q_record;


int is_q_full(q_record *a);
void initialise(q_record *a,int c);
int is_q_empty(q_record *a);
void enqueue(q_record*a,element_type c);
element_type dequeue(q_record* a);
void display(q_record *a);


