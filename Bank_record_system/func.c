// written by:omkar reddy k


#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>

//creating user account
void create_account(FILE* fp)
{client s;
 printf("Please enter your name:");
 getchar();
 gets(s.name);
 printf("\nPlease enter your bank account number(to be)[maximum 8 digits]\n");
 scanf("%d",&s.acc_no);
 printf("please enter the balance you wanna have initially\n");
 scanf("%f",&s.acc_bal);

 fwrite(&s,sizeof(client),1,fp);
}

//displaying the customer details
void display_details(FILE *fp)
{client s;
rewind(fp);
printf("\n");
while (fread(&s,sizeof(client),1,fp))
{printf("Customer_Acc_NO:%d\n",s.acc_no);
 printf("Name of our customer:%s\n",s.name);
 printf("Balance:%f\n",s.acc_bal);
 printf("\n");
}
}

//sorting customer balances from low to high
void sort_by_balance(FILE* fp)
{int count=0;
 int i,j;
client s;
rewind(fp);
while(fread(&s,sizeof(client),1,fp))
{
   count++;
}
rewind(fp);
client* pointer=(client*)malloc(sizeof(client)*count);
if (pointer)
  {fread(pointer,sizeof(client),count,fp);
  for (i=0;i<count-1;i++)
    {for (j=0;j<count-i-1;j++)
      {if ((pointer+j)->acc_bal > (pointer+j+1)->acc_bal)
        {strcpy(s.name,(pointer+j)->name);
	 s.acc_no=(pointer+j)->acc_no;
	 s.acc_bal=(pointer+j)->acc_bal;
	 strcpy((pointer+j)->name,(pointer+j+1)->name);
	 (pointer+j)->acc_no=(pointer+j+1)->acc_no;
	 (pointer+j)->acc_bal=(pointer+j+1)->acc_bal;
	 strcpy((pointer+j+1)->name,s.name);
	 (pointer+j+1)->acc_no=s.acc_no;
         (pointer+j+1)->acc_bal=s.acc_bal;
        }
      }
    }
  }
FILE *q=fopen("dummy","wb");
if (q)
 {fwrite(pointer,sizeof(client),count,q);
  fclose(q);
  remove("bank_details");
  rename("dummy","bank_details");
 }
}


