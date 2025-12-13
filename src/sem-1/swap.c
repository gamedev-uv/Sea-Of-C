#include <stdio.h>

int main()
{
    int a, b;
    int useThirdVariable;

    printf("=== [INPUT] === ");
    printf("\nEnter the value of A : ");
    scanf("%d", &a);
    
    printf("Enter the value of B : ");
    scanf("%d", &b);

    printf("\n=== [SWAPPING] ===");
    printf("\nEnter 1 to swap with 3rd variable, 0 to do it without another variable : ");
    scanf("%d", &useThirdVariable);

    if(useThirdVariable == 1)
    {
        printf("Swapping variables using a 3rd variable");
        int c = a;
        a = b;
        b = c;
    }
    else if (useThirdVariable == 0)
    {
        printf("Swapping variables without a 3rd variable");
        a = a + b;
        b = a - b;
        a = a - b;
    }
    else
    {
        printf("Invalid option was chosen, %d", useThirdVariable);
        printf("\nExiting program early with code 1");
        return 1;
    }

    printf("\n\n=== [OUTPUT] ===");
    printf("\nNew Value Of A : %d, New Value Of B : %d", a, b);
    return 0;
}