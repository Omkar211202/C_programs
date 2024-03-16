// written by omkar reddy k

# include <stdio.h>

// client structure
struct client{
	int acc_no;
	char name[20];
	float acc_bal;
};

//creating an alias for the client structure
typedef struct client client;


//functions declaration
void create_account(FILE* fp);

void display_details(FILE* fp);

void sort_by_balance(FILE* fp);


