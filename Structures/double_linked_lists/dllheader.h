#include <stdio.h>

struct dll
{
struct dll* prev;
int data;
struct dll*next;
};
typedef struct dll dll;

dll* insert_at_begin(dll* head,int x);
int find_pos(dll* head,int x);
dll* insert_after_pos(dll* head,int x,int y);
dll* delete(dll* head,int x);
void display_list(dll* head);


