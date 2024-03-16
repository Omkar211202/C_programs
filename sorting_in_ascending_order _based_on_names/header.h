//Program by:Omkar reddy k
//Date:20-01-2024
//roll no:211202
//header folder for arranging names as per alphabetic order

# include<stdio.h>

struct node
{char data[100];
 struct node* next;
};
typedef struct node node;

node* insert_in_ascending_order(int);
void display(node*);
int cmpr (char A[100],char B[100]);
