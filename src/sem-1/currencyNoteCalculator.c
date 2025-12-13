#include <stdio.h>

int main()
{
    int amount;

    printf("=== [INPUT] ===");
    printf("\nEnter the amount : ");
    scanf("%d", &amount);

    printf("\n=== [OUTPUT] ===");

    int currentCount = amount / 500;
    printf("\n500 x %d = %d", currentCount, currentCount * 500);
    amount -= currentCount * 500;

    currentCount = amount / 200;
    printf("\n200 x %d = %d", currentCount, currentCount * 200);
    amount -= currentCount * 200;

    currentCount = amount / 100;
    printf("\n100 x %d = %d", currentCount, currentCount * 100);
    amount -= currentCount * 100;

    currentCount = amount / 50;
    printf("\n50  x %d = %d", currentCount, currentCount * 50);
    amount -= currentCount * 50;

    currentCount = amount / 10;
    printf("\n10  x %d = %d", currentCount, currentCount * 10);
    amount -= currentCount * 10;

    currentCount = amount;
    printf("\n1   x %d = %d", currentCount, currentCount);
    amount -= currentCount;

    return 0;
}