#include <stdio.h>

int main()
{
    float mA, mB, mC;

    printf("=== [INPUT] ===");
    printf("\n--- Enter the marks ---");
    printf("\nMarks in A : ");
    scanf("%f", &mA);

    printf("Marks in B : ");
    scanf("%f", &mB);

    printf("Marks in C : ");
    scanf("%f", &mC);

    int selectedOption;
    printf("\n--- Select option ---");
    printf("\n- 0 -> Total Marks");
    printf("\n- 1 -> Average Marks");
    printf("\n- 2 -> Pass/Fail Status");
    printf("\nOption : ");
    scanf("%d", &selectedOption);

    printf("\n=== [OUTPUT] ===");
    switch(selectedOption)
    {
        case 0:
            printf("\nTotal Marks : %.2f", mA + mB + mC);
            break;
    
        case 1:
            printf("\nAverage Marks : %.2f", (mA + mB + mC) / 3);
            break;
        
        case 2:
            printf("\nStatus : %s", (mA + mB + mC) / 3 < 40 ? "Fail" : "Pass");
            break;

        default:
            printf("\nOption : %d was not found", selectedOption);
            break;
    }

    return 0;
}