//Write a C program to swap two numbers using pointers
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a;
    int b;

    int *pA = &a;
    int *pB = &b;

    printf("=== [INPUT] ===");
    printf("\nEnter the value of A: ");
    scanf("%d", pA);

    printf("Enter the value of B: ");
    scanf("%d", pB);

    swap(pA, pB);

    printf("\n=== [OUTPUT] ===");
    printf("\nA: %d, B: %d", a, b);
    return 0;
}