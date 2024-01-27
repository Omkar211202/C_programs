





# include <stdio.h>
# include "stud.h"

void main()
{
int i;
printf("Please enter the number of students\n");
scanf("%d",&i);
student *a;
a=allocate_space(i);
enter_details(a,i);

print_reg_details(a,i);


more_avg(a,i);

print_year(a,i);

}







