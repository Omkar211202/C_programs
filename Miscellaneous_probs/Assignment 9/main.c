# include <stdio.h>
# include "my_func.h"


void main()
{int f;

char str[9]="SAi";
char str_1[9]="";
char str_2[9]="ram";
char str_3[18]="jai          sai";
char str_4[9]="abcdefgh";
char str_5[18]="";
char str_6[50]="this is a help for replace check man";
char str_7[10]="check";
char str_8[5]="is";

printf("\nthe initialised str is %s\n",str);
printf("the initialised str_1 is %s\n",str_1);
printf("the initialised str_2 is %s\n",str_2);
printf("the initialised str_3 is %s\n",str_3);
printf("the initialised str_4 is %s\n",str_4);
printf("the initialised str_5 is %s\n",str_5);



printf("the following is the str length:%d\n",strlength(str));
strcopy(str_1,str);
printf("the copy of str to str_1 is %s \n",str_1);
strcon(str,str_2);
printf("the concat string str_2 to str is %s\n",str);
printf("comparing str and str_2\n");
strcomp(str,str_2);
printf("please input a str_1");
input(str_1,9);
trim(str_3,str_5);
printf("the trimmed string obtained in str_5 is %s\n",str_5);
fuppercase(str_3);
printf("the upper first alphabet of str_3 is %s\n",str_3);
altchar(str_4,str_5);
printf("the altchar is of str_4 obtained in str_5 %s\n",str_5);
substr(str_4,str_5,2,5);
printf("the substring extracted of str_4 in str_5%s\n",str_5);
altrev(str,str_1);
printf("the reversal is of str obtained in str_1 %s\n",str_1);

printf("the larger among str and str_4 is\n");
largestr(str,str_4);
printf("this checks if a is present in str\n");
present_in_str(str,'a');
printf("\nsome info about vowels\n");
f=no_of_vowels(str_4);
printf("\nthe following are the vowels in str_4\n");
vowelsprint(str_4);
printf("\nthe no of vowels are:%d\n",f);
printf("the count of vowels in str_4 are\n");
vowel_count(str_4);
printf("the sorted list of str_4\n");
sort_chars(str_4);
printf("\ncounting the no of chars in str_4\n");
count_chars(str_4);

}


