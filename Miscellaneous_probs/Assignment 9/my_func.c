# include <stdio.h>                                             
# include "my_func.h"
#include <string.h>


//this function tells you the length of a string
int strlength(char*s)
{int count=0;
while (*s)
{
count++;
s++;
}
return count;
}


//this string copies the source string to destination string
char* strcopy(char* dest,char* source)
{int count=0;
int var=strlength(source);   
while (count<var)
   {*dest=*source;
    dest++;
    source++;
    count++;
    }
    return dest;
}

//this string concatenates the source string to the destination string
char* strcon(char* dest,char* source)
{
if (strlength(dest)+strlength(source)<size)
   {strcopy(dest+strlength(dest),source);
   }
else
   printf("the dest is short to store your string\n");
}

//this procedure compares 2 strings and returns the larger one
void strcomp(char*s,char*b)
{int i,flag;
int a=strlength(s);
int c=strlength(b);
flag=0;
if (a=c)
   flag=4;
if (a<c)
    c=a;
for (i=0;i<c;i++)
{
 if (s[i]<b[i])
    {flag=1;
    break;
    }
 else if (s[i]>b[i])
    {flag=2;
    break;
    }
}
if (flag==0)
   printf("the second string is bigger\n");
if (flag==1)
    printf("the second string is bigger\n");
if (flag==2)
   printf("the first string is bigger\n");
if (flag==4)
   printf("both the strings are equal in length\n");
} 
  
//this function can take input from the user
void input(char *s,int max)
{
int i;
printf("\n");
for (i=0;i<max-1;i++)
  {scanf("%c",s+i);
   if  (*(s+i)=='\n'||i==max-2)
      {*(s+i+1)='\0';
      break;
      }
  }
}
//this string trims down all the spaces
void trim(char* str,char* b) 
{int i=0;
int counter=0;
int count;
int len=strlength(str);
for (i=0;i<len;i++)
    {if (*(str+i)==' ')
        {b[counter]=*(str+i);
         counter++;
         if (*(str+i+1)=' ')
            {while (*(str+i+1)==' ')
              i++;
            }
         }        
    else
    {b[counter]=*(str+i);
    counter++;}
    }
    b[counter]='\0';
}
      
      
//this strings makes the starting alphabet of word in caps
void fuppercase(char*str)
{
if (*str<'z' && *str>'a')
    *str=*(str)-32;
    
while(*str)
{if (*str==' ' && *(str+1)!=' ')
   {if (*(str+1)<123 && *(str+1)>96)
        *(str+1)=(*(str+1))-32;
   }
   
  str++;
}
}

//this string gives you the alternative characters in form
void altchar(char*str,char *b)
{
int a=strlength(str);
int i;
int count=0;
for (i=0;i<a;i=i+2)
    {*(b+count)=*(str+i);
      count++;
    }
*(b+count)='\0';
}

//this helps you to get substrings of a given string.
void substr(char*str,char*b,int a,int d)
{int counter=0;
char *p=str+a;
while (*p && counter<d) 
    {*(b+counter)=*p;
     p++;
     counter++;
    }
*(b+counter)='\0';
}

//this function prints alt characters reverse order;
void altrev(char*str,char* b)
{int c=strlength(str);
int i;
int count=0;
for (i=1;i<=c;i=i+2)
{*(b+count)=*(str+c-i);
 count++;
}
*(b+count)='\0';
}

//this program prints the string
void printstr(char*str)
{
int i,c=strlength(str);
for (i=0;i<c;i++)
    {printf("%c",*(str));
     str++;
    }
    printf("\n");
}

//this program prints the largest of the two strings
void largestr(char*str,char*b)
{
int c=strlength(str);
int d=strlength(b);
if (c<d)
   {printstr(str);}
else if (d<c)
   {printstr(str);}
   else 
   printf("they both are of equal length");
   }
   
   
//this program prints vowels in the string;
void vowelsprint(char*str)
{
int i,c=strlength(str);
for (i=0;i<c;i++)
   {if (*(str+i)=='a'||*(str+i)=='e'||*(str+i)=='i'||*(str+i)=='o'||*(str+i)=='u')
     printf("%c",*(str+i));
    }
}

//this program prints the no of vowels in the string
int no_of_vowels(char*str)
{int i,count=0;
int c=strlength(str);
for (i=0;i<c;i++)
   {if (*(str+i)=='a'||*(str+i)=='e'||*(str+i)=='i'||*(str+i)=='o'||*(str+i)=='u')
    count++;
   }
return count; 
}

//given alphabet in string or not
void present_in_str(char*str,char a)
{int flag=0;
int i,c=strlength(str);
for (i=0;i<c;i++)
   {if (a==*str)
      {flag=1;
       printf("Present in the string");
       break;
       }
     str++;
    }
if (flag==0)
     {printf("Not present in the string");}
}

//this function results in 0 and 1 for input
int presentinstring(char*str,char a)
{int flag=0;
int i,c=strlength(str);
for (i=0;i<c;i++)
   {if (a==*str)
      {flag=1;
      break;
       }
     str++;
    }
if (flag==0)
     return 0;
else 
     return 1;
}

//this program sorts all the characters in a string.
void sort_chars(char *s)
{int min;
int i,j;
int len=strlen(s);
char temp;
for (i=0;i<len-1;i++)  //the selection sort used for computation...
  {min=i;
  for (j=i+1;j<len-1;j++)
     {if (s[min]>s[j])
        min=j;
     }
if (min!=i)
    {temp=s[i];
     s[i]=s[min];
     s[min]=temp;
    }
  }
for (i=0;i<len-1;i++)
   {printf("%c",s[i]);
   }
}


//this program counts the number of times a character comes in a string:
void count_chars(char *s)
{
int count=strlen(s);
char b[count];
int counter=0;
char c;
int i,j,k;
int tally;
int flag;
for (i=0;i<count-1;i++)
   { tally=0;
     flag=0;
     c=s[i];
     for (k=0;k<counter;k++)   //this loop checks if the alphabet was already called...
       {if (b[k]==c)
          {flag=1;
           break;
           }
        }
      if (flag==0)         
       {for (j=0;j<count;j++) //if the alphabet did not come then count is calculated....
         { if (s[j]==c)
              tally++;
          }
        printf("the total times %c repeated is %d\n",s[i],tally);
        b[counter]=s[i];
        counter++;
       }
    }
}  

void vowel_count(char *s)
{
int count=strlen(s);
char b[count];
int counter=0;
char c;
int i,j,k;
int tally;
int flag;
for (i=0;i<count-1;i++)
   { tally=0;
     flag=0;
     c=s[i];
     if (s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
      {for (k=0;k<counter;k++)   //this loop checks if the alphabet was already called...
       {if (b[k]==c)
          {flag=1;
           break;
           }
        }
      if (flag==0)         
       {for (j=0;j<count;j++) //if the alphabet did not come then count is calculated....
         { if (s[j]==c)
              tally++;
          }
        printf("the total times %c repeated is %d\n",s[i],tally);
        b[counter]=s[i];
        counter++;
       }
    }
    }
}  

void replace(char *s,char *a,char *b)
{
int i,j,k;
int adr;
int e=strlength(s);
int c=strlength(a);
int d=strlength(b);
int flag;
int count;
for (i=0;i<e;i++)
{flag=0;
for (j=0;j<c;j++)
 {if (s[i+j]!=a[j])
   {flag=1;
    break;
   }
  }
if (flag==0)
  { adr=i;

   for (k=adr+c;k<e;k++)
      s[k+d]=s[k];
   count=0;
   for (k=adr;k<adr+d;k++)
    {
     s[k]=b[count];
     count++;
     }
    }
    i=i+d;
}

}





















 
