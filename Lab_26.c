#include <stdio.h>

int StudentInLectureClass(int PresentStudent);
int allStudent = 60;

main()
{
    int num;
    printf("Please input number : ");
    scanf("%d", &num);
    printf("\nStudent year 3 = %d\n\n", allStudent);
    printf("Student in Lecture Class = %d\n\n", StudentInLectureClass(num));
}

int StudentInLectureClass(int PresentStudent)
{
    int allStudent = 0;
    allStudent = allStudent + PresentStudent;
    return allStudent;
}