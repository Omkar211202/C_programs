#include <stdio.h>

struct polyadt
{
float coef;
int expo;
struct polyadt* next;
};

typedef struct polyadt polyadt;

polyadt* create(int a);
void display(polyadt*);
polyadt* add(polyadt*p1,polyadt*p2);
polyadt* multiplication(polyadt*p1,polyadt*p2);
polyadt* insert_in_descending_order(polyadt*head,polyadt* t);


