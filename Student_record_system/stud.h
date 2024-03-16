# include<stdio.h>


struct studentRecord{
	char name[50];
	float age;
	int regdNo;
	float gpa;
};

typedef struct studentRecord student;
void insertRecord(student *a,FILE* fp);	//Appends student record at the end of file
void displayRecords(FILE* fp);		// Dsiplay all students records in stored in file
void modifyRecord(FILE *fp,int RegdNo,float newGPA);  // Modify gpa of student record with RegdNo
void deleteRecord(FILE *fp, float RegdNo); // delete the record of student with input with RegdNo if found
void sort(FILE *fp);

