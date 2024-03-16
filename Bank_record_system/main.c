/*
 This is a banking project
 written by omkar reddy k
 211202
 */

#include <stdio.h>
#include "header.h"

void main()
{int choice;
 int condition=1;

while(condition)
{printf("\n");
printf("Welcoming you to our banking services\n1.Please choose 1 for creating account.\n2.Please choose 2 for displaying all our clients and details.\n3.Please choose 3 for sorting balance from low to high.\n4.Exit the application\n");
scanf("%d",&choice);


//user creates an account
if (choice==1)
{FILE *fp=fopen("bank_details","ab");
 create_account(fp);
 fclose(fp);
}

//can display all the user details
if (choice==2)
{FILE *fp=fopen("bank_details","rb");
 if (!fp)
  {printf("\nThere may be a server down problem,or bank has no customers yet");
   }
 else
   {display_details(fp);
    fclose(fp);
   }
}

//sorting all the balances from low to high
if (choice==3)
{FILE *fp=fopen("bank_details","rb");
 if (!fp)
  {printf("\nThere may be a server down problem,or bank has no customers yet");
   }
 else
  {sort_by_balance(fp);
  fclose(fp);
  }
}

//portal exit
if (choice==4)
 {
  condition=0;
  printf("Thank you for utilising our services\nSee you again\n");
 }


}

}

