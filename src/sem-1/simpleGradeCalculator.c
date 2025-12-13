#include <stdio.h>

int main()
{
    float mA, mB, mC, mD, mE, averageMarks;
    char grade;

    printf("=== [INPUT] ===");
    printf("\nEnter the marks : ");

    printf("\nMarks in A : ");
    scanf("%f", &mA);

    printf("Marks in B : ");
    scanf("%f", &mB);

    printf("Marks in C : ");
    scanf("%f", &mC);

    printf("Marks in D : ");
    scanf("%f", &mD);

    printf("Marks in E : ");
    scanf("%f", &mE);
    
    averageMarks = (mA + mB + mC + mD + mE) / 5;

    if(averageMarks >= 90)
        grade = 'O';
    else if(averageMarks >= 80)
        grade = 'E';
    else if(averageMarks >= 70)
        grade = 'A';
    else if(averageMarks >= 60)
        grade = 'B';
    else if(averageMarks >= 50)
        grade = 'C';
    else if(averageMarks >= 40)
        grade = 'D';
    else 
        grade = 'F';

    printf("\n=== [OUTPUT] ===");
    printf("\nGrade Attained : %c", grade);

    return 0;
}