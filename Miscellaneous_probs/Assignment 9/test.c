# include <stdio.h>
# include <string.h>

void main()
{
char str[10]="sai";
char a[10]=" ram";
strcpy(str,a);
printf("the change is %s \n",str);
strcat(str,a);
printf("the change is %s \n",str);
printf("the change is %s \n",a);

printf("the change is %d \n",strcmp("sai","ram"));

gets(str);
printf("%s",str);

}
