#include <stdio.h>
#include <string.h>

int student = 50;// Global variable

void AddStudentLectureClass(int AddStudent) // use Global variable
{
    student = student + AddStudent;
    printf("Student in Lecture Class = %d\n\n", student);
}

void StudentDropLectureClass (int DropStudent) // use Local variable
{
    int student = 30;
    student = student - DropStudent;
    printf("Student Drop Lecture Class = %d\n\n",student);
}

main() {
	int num;
	printf("Please input number : ");
	scanf("%d",&num);
    AddStudentLectureClass(num);
    StudentDropLectureClass(num);
    printf("Student year 3 = %d\n\n",student);
}
