#include <stdio.h>

int main()
{
    int num;

    printf("=== [INPUT] ===");
    printf("\nEnter the number : ");
    scanf("%d", &num);

    printf("\n=== [OUTPUT] ===");
    if(num % 3 == 0)
        printf("\nThe number is divisible by 3");

    if(num % 5 == 0)
    {
        printf("\nThe number is divisible by 5");
        return 1;
    }

    printf("\nDivisible by neither 3 nor 5");
    return 0;
}