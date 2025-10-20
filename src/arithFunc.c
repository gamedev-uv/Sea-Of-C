#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    if(b == 0) return -1;
    return (float)a / b;
}

int main()
{
    int a, b;

    printf("=== [INPUT] ===");
    printf("\nEnter the value of A: ");
    scanf("%d", &a);

    printf("Enter the value of B: ");
    scanf("%d", &b);

    printf("\n=== [OUTPUT] ===");
    printf("\nSum:          %d",    add(a, b));
    printf("\nDifference:   %d",    subtract(a, b));
    printf("\nProduct:      %d",    multiply(a, b));
    printf("\nQuotient:     %.2f",  divide(a, b));

    return 0;
}