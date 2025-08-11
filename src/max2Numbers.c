#include <stdio.h>

int main()
{
    int a, b;

    printf("=== [INPUT] ===");
    printf("\nEnter the numbers...");

    printf("\nEnter the value of A : ");
    scanf("%d", &a);

    printf("Enter the value of B : ");
    scanf("%d", &b);

    printf("\n=== [OUTPUT] ===\n");
    if(a > b)
        printf("A is greater than B");
    else if(b > a)
        printf("B is greater than A");
    else
        printf("B is equal to A");

    return 1;
}