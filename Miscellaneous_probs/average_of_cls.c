#include <stdio.h>
float student_avg(int b);
float class_avg(float sum,float n);

void main()
{
int n,a,m;
float b,sum=0;
int i;
printf("\nenter the number of students\n");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("Mention roll no\n");
scanf("%d",&a);
printf("metion no subjects\n");
scanf("%d",&m);
b=student_avg(m);
printf("the student %d roll no has got %f \n",a,b);
sum=sum+b;
}
printf("the class avg is %f",class_avg(sum,n));
}

float student_avg(int b)
{int sum=0;
int i;
int dummy=0;
for (i=1;i<=b;i++)
{
printf("please enter the marks of sub %d\n",i);
scanf("%d",&dummy);
sum=sum+dummy;
}
return sum/(b*1.0);
}
float class_avg(float sum,float n)
{
return sum/(n*1.0);
}
