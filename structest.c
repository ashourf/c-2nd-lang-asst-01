#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printStudent();
struct Student 
{ 
   char name[2048];
   char email[2048];
   int idNumber;
};

int main()
{
	struct Student student1;
	strcpy(student1.name, "Jane");
	strcpy(student1.email,"Jane@msudenver.edu");
	student1.idNumber = 9001234;
	printStudent(student1);
	return 0;
}

void printStudent(struct Student output)
{
	printf("Name: %s\n", output.name);
	printf("Email: %s\n", output.email);
	printf("Student Id: %d\n" , output.idNumber);
}
