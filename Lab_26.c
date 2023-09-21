#include <stdio.h>

void StudentInLectureClass(int PresentStudent);
int allStudent = 60; // Global variable

main()
{
    int num;
    printf("Please input number : ");
    scanf("%d", &num);
   	printf("\nStudent year 3 = %d\n\n",allStudent);
    StudentInLectureClass(num);
}

void StudentInLectureClass(int PresentStudent) // use Local variable
{
    int allStudent = 0;
    allStudent = allStudent + PresentStudent;
    printf("Student in Lecture Class = %d\n\n", allStudent);
}
