#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[15];
    char lastName[15];
    int studentID;

    char grade;
    float averageMarks;

    double attendancePercent;

    printf("=== [INPUT] ===");
    printf("\nEnter the full name of the student : ");
    scanf("%s %s", firstName, lastName);

    printf("Enter the student's ID : ");
    scanf("%d", &studentID);

    printf("Enter the average marks of the student : ");
    scanf("%f", &averageMarks);
    averageMarks = averageMarks > 100 ? 100 : averageMarks; //Make it so the average marks never goes past 100

    printf("Enter the attendance percentage of the student : ");
    scanf("%lf", &attendancePercent);   
    attendancePercent = attendancePercent > 100 ? 100 : attendancePercent; //Make it so the attendance never goes past 100

    printf("Enter the grade of the student : ");
    scanf(" %c", &grade);

    printf("\n=== [OUTPUT] ===");
    printf("\n=== Details of the student ===");
    printf("\nName          : %s %s", firstName, lastName);
    printf("\nStudent ID    : %d", studentID);
    printf("\nAverage Marks : %.2f / 100.00", averageMarks);
    printf("\nAttendance    : %.6lf%%", attendancePercent);
    printf("\nGrade         : %c", grade);
}