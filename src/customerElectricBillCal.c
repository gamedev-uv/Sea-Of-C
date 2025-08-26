#include <stdio.h>

int main()
{
    int category, units;
    int billAmount;

    printf("=== [INPUT] ===");
    printf("\nEnter the number of units : ");
    scanf("%d", &units);

    printf("\n--- Select the category ---");
    printf("\n- 0 -> Residential");
    printf("\n- 1 -> Commercial");
    printf("\n- 2 -> Industrial");
    printf("\nChoice : ");
    scanf("%d", &category);

    printf("\n=== [OUTPUT] ===");
    switch (category)
    {
        default:
            printf("\nSelected category '%d' wasn't found", category);
            printf("\nResidential Rates will be used");
            billAmount = units * 10;

        case 0:
            billAmount = units * 10;
            break;
        
        case 1:
            billAmount = units * 8;
            break;
        
        case 2:
            billAmount = units * 20;
            break;
    }

    printf("\nBill Amount : %d", billAmount);
    return 0;
}