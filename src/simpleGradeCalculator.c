#include <stdio.h>

int main()
{
    float marks;
    char grade;

    printf("=== [INPUT] ===");
    printf("\nEnter the marks : ");
    scanf("%f", &marks);

    if(marks >= 90)
        grade = 'O';
    else if(marks >= 80)
        grade = 'E';
    else if(marks >= 70)
        grade = 'A';
    else if(marks >= 60)
        grade = 'B';
    else if(marks >= 50)
        grade = 'C';
    else if(marks >= 40)
        grade = 'D';
    else 
        grade = 'F';

    printf("\n=== [OUTPUT] ===");
    printf("\nGrade Attained : %c", grade);

    return 0;
}