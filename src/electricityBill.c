#include <stdio.h>

int main()
{
    int units;
    float totalCost;

    printf("=== [INPUT] ===");
    printf("\nEnter the number of units : ");
    scanf("%d", &units);

    if(units <= 102)
        totalCost = units * 4.89f;
    else if(units > 102 && units <= 160)
        totalCost = 102 * 4.89 + ((units - 102) * 5.40);
    else
        totalCost = 102 * 4.89 + 58 * 5.40 + ((units - 160) * 6.50f);

    printf("\n=== [OUTPUT] ===");
    printf("\nThe total cost for is : %.3f", totalCost);

    return 0;
}