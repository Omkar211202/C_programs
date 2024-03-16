# include <stdio.h>
# include "stud.h"
# include <stdlib.h>
# include <string.h>

void insertRecord(student *a,FILE* fp)
{
    fwrite(a,sizeof(student),1,fp);
}

void displayRecords(FILE* fp)
{   student s;
    rewind(fp);
    while(fread(&s,sizeof(student),1,fp))
      {
       
       printf("\nName:%s",s.name);
       printf("\nID NO:%d",s.regdNo);
       printf("\nage:%f",s.age);
       printf("\nGPA:%f",s.gpa);
       printf("\n");

      }
}

void modifyRecord(FILE* fp,int RegdNo,float newGPA)
{
  student s;
  rewind(fp);
  while (fread(&s,sizeof(student),1,fp))
 {
   if (s.regdNo==RegdNo)
     {
      s.gpa=newGPA;
      fseek(fp,-sizeof(student),1);
      fwrite(&s,sizeof(student),1,fp);
     }
 }

}


void deleteRecord(FILE *fp, float RegdNo)
{student s;
 rewind(fp);
 FILE* q=fopen("dummy","wb");
 while(fread(&s,sizeof(student),1,fp))
   {if (s.regdNo==RegdNo)
      continue;
    fwrite(&s,sizeof(student),1,q);
   }
 remove("student_records");
 rename("dummy","student_records");
 fclose(q);
 
}

void sort(FILE *fp)
{student s;
rewind(fp);
int check=0;
int j;
FILE* q=fopen("trial","wb");

int i=0;
while(fread(&s,sizeof(student),1,fp))
  {check++;
  printf("%d",check);
  }
student* pointer=(student*)malloc(sizeof(student)*check);
rewind(fp);
fread(pointer,sizeof(student),check,fp);

for (i=0;i<check-1;i++)
 {
  for (j=0;j<check-i-1;j++)
     {if (strcmp((pointer+j)->name,(pointer+j+1)->name)>0)
           {strcpy(s.name,(pointer+j)->name);
           s.age=(pointer+j)->age;
           s.regdNo=(pointer+j)->regdNo;
           s.gpa=(pointer+j)->gpa;
           strcpy((pointer+j)->name,(pointer+j+1)->name);
           (pointer+j)->age=(pointer+j+1)->age;
           (pointer+j)->regdNo=(pointer+j+1)->regdNo;
           (pointer+j)->gpa=(pointer+j+1)->gpa;
           strcpy((pointer+j+1)->name,s.name);
           (pointer+j+1)->age=s.age;
           (pointer+j+1)->regdNo=s.regdNo;
           (pointer+j+1)->gpa=s.gpa;
           }
    }
}


fwrite(pointer,sizeof(student),check,q);
remove("student_records");
rename("trial","student_records");
fclose(q);
}
  
 
