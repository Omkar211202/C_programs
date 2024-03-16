# include <stdio.h>
# include "stud.h"
# include <stdlib.h>

void main()
{
student *s=NULL;
int check=1;
int choice;
while (check)
{
printf("\nPlease enter the Function you wanna do\n1.Insertion\n2.Display_records\n3.Delete_record\n4.update\n5.Exit\n6.sort\n");
scanf("%d",&choice);

if (choice==1)
  { FILE* p=fopen("student_records","a+b"); 
    s=(student*)malloc(sizeof(student));
    printf("\nPlease enter the ID NO: ");
    scanf("%d",&(s->regdNo));
    printf("Please enter the name of the student:");
    getchar();
    gets(s->name);
    printf("Please enter the age:");
    scanf("%f",&(s->age));
    printf("Please enter the Gpa:");
    scanf("%f",&(s->gpa));
    insertRecord(s,p);
    fclose(p);
  }

if (choice==2)
{FILE* p=fopen("student_records","a+b"); 
 displayRecords(p);
 fclose(p);
}

if (choice==3)
{FILE* p=fopen("student_records","rb");
 int roll_no;
 printf("Please enter the roll_no whose data you wanna delete:");
 scanf("%d",&roll_no);
 deleteRecord(p,roll_no);
 fclose(p);
 }

if (choice==4)
{FILE* p=fopen("student_records","r+b"); 
 int roll_no;
 float newgpa;
 printf("Please enter the regdno whose gpa you wanna modify:");
 scanf("%d",&roll_no);
 printf("please enter the new gpa");
 scanf("%f",&newgpa);
 modifyRecord(p,roll_no,newgpa);
 fclose(p);
 }

if (choice==5)
   check=0;


if (choice==6)
  {
  FILE* p=fopen("student_records","r+b");
  sort(p);
  fclose(p);
  }
}
}

