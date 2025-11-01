#include <stdio.h>

int getGCD(int a, int b)
{
    if(b == 0) return a;
    return getGCD(b, a % b);
}

int getLCM(int a, int b)
{
    return (a * b) / getGCD(a, b);
}

int main()
{   
    int a, b;

    printf("=== [INPUT] ===");
    printf("\nEnter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("\n=== [OUTPUT] ===");
    printf("\nGCD(%d, %d): %d", a, b, getGCD(a, b));
    printf("\nLCM(%d, %d): %d", a, b, getLCM(a, b));
    return 0;
}