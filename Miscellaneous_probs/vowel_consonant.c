#include <stdio.h>
void main()
{
char c;
printf("\nplease enter an alphabet\n");
scanf("%c",&c);
switch (c)
{case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("the letter is a vowel\n");
break;
default:
printf("the letter is a consonant\n");
}
}
