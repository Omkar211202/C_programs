


# include <stdio.h>
typedef struct
{
int day;
int mon;
int yr;
}dob;

typedef struct
{
int day;
int mon;
int yr;
}yoj;

typedef struct
{
int regno;
float cgpa;
char grade;
char gender;
char name[50];
dob birth;
yoj year;
}student;

student* allocate_space(int n);
void print_reg_details(student*a,int);
void more_avg(student*a,int);
void enter_details(student*a,int n);
void print_year(student *a,int n);
