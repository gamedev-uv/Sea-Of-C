//Write a C program to add two numbers using pointers.
#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;

    int *pA = &a;   //Pointer for A
    int *pB = &b;   //Pointer for B
    int *pS = &sum; //Pointer for Sum

    printf("=== [INPUT] ===");
    printf("\nEnter the value of A: ");
    scanf("%d", pA);

    printf("Enter the value of B: ");
    scanf("%d", pB);

    *pS = *pA + *pB;

    printf("\n=== [OUTPUT] ===");
    printf("\nSum: %d", *pS);

    return 0;
}