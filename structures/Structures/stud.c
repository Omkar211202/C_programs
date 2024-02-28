


# include <stdio.h>
# include "stud.h"
# include <string.h>
# include <stdlib.h>

student* allocate_space(int n)
{
student* a;
a=(student*)malloc(sizeof(student)*n);
return a;
}

void enter_details(student*a,int n)
{
int i;
for(i=0;i<n;i++)
 {printf("please enter the name of student %d\n",i+1);
  getchar();
  fgets((*(a+i)).name,49,stdin);
  printf("please enter the roll nostudent %d\n",i+1);
  scanf("%d",&(*(a+i)).regno);
  printf("please enter the grade of the student %d\n",i+1);
  getchar();
  scanf("%c",&(*(a+i)).grade);
  printf("please enter the gender of the student %d\n",i+1);
  getchar();
  scanf("%c",&(*(a+i)).gender);
  printf("please enter the cgpa student %d\n",i+1);
  scanf("%f",&(*(a+i)).cgpa);
  printf("please enter the Day of birth of student %d\n",i+1);
  scanf("%d",&(*(a+i)).birth.day);
  printf("please enter the month of birth ofstudent %d\n",i+1);
  scanf("%d",&(*(a+i)).birth.mon);
  printf("please enter the year of birth of student %d\n",i+1);
  scanf("%d",&(*(a+i)).birth.yr);
  printf("please enter the Day of joining of student %d\n",i+1);
  scanf("%d",&(*(a+i)).year.day);
  printf("please enter the month of joining ofstudent %d\n",i+1);
  scanf("%d",&(*(a+i)).year.mon);
  printf("please enter the year of joining of student %d\n",i+1);
  scanf("%d",&(*(a+i)).year.yr);
  printf("student %d Work Done\n \nSuccess!!!\n",i+1);
  }
}



void print_reg_details(student*a,int n)
{int i;
printf("\nPrinting the details of students along with roll no\n");
for (i=0;i<n;i++)
   { 
     printf("\nstudent regno: %d\n",(*(a+i)).regno);
     printf("     student name: %s\n",(*(a+i)).name);
     printf("     student CGPA: %f\n",(*(a+i)).cgpa);
     printf("     student grade: %c\n",(*(a+i)).grade);
     printf("     student DOB:%d/%d/%d\n",(*(a+i)).birth.day,(*(a+i)).birth.mon,(*(a+i)).birth.yr);
     printf("     student Year Of Joining:%d/%d/%d\n",(*(a+i)).year.day,(*(a+i)).year.mon,(*(a+i)).year.yr);
   }
}

void more_avg(student*a,int n)
{int i;
 float sum=0;
     for (i=0;i<n;i++)
     {sum=sum+(*(a+i)).cgpa;
     }
sum=sum/n;
printf("\nThe average is %f \nThe students whose grade is above the average is as follows:\n",sum);
  for (i=0;i<n;i++)
  {if ((*(a+i)).cgpa>=sum)
     {
     printf("\nstudent regno: %d\n",(*(a+i)).regno);
     printf("     student name: %s\n",(*(a+i)).name);
     printf("     student CGPA: %f\n",(*(a+i)).cgpa);
     printf("     student grade: %c\n",(*(a+i)).grade);
     printf("     student DOB:%d/%d/%d\n",(*(a+i)).birth.day,(*(a+i)).birth.mon,(*(a+i)).birth.yr);
     printf("     student Year Of Joining:%d/%d/%d\n",(*(a+i)).year.day,(*(a+i)).year.mon,(*(a+i)).year.yr);
     }  
   }  
}   


void print_year(student *a,int n)
{
int i;
for (i=0;i<n;i++)
   {printf("\nPrinting the names of students along with their year of joining");
    printf("\nstudent name: %s",(*(a+i)).name);
    printf("year of joining: %d",(*(a+i)).year.yr);
   }
}

