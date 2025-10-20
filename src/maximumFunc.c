#include <stdio.h>

int maximum(int a, int b)
{
    return a > b ? a : b;
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
    printf("\nMaximum: %d", maximum(a, b));

    return 0;
}