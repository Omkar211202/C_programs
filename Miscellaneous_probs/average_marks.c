/* finds the average marks
name omkar reddy
date 21/07/2023
*/
#include <stdio.h>
int main()
{
int a,b,c,d,e;
double f;
printf("\nPlease enter the first sub marks \n");
scanf("%d",&a);
printf("\nPlease enter the second sub marks\n");
scanf("%d",&b);
printf("\nPlease enter the third sub marks\n");
scanf("%d",&c);
printf("\nPlease enter the fourth sub marks\n");
scanf("%d",&d);
printf("\nPlease enter the fifth sub marks\n");
scanf("%d",&e);
f=(a+b+c+d+e)/5;
printf("\nthe average marks is %f \n",f);
return 0;
}
