#include <stdio.h>

int main()
{
    int initialCurrency, targetCurrency;
    float amount;

    printf("=== [INPUT] ===");
    printf("\n--- Select the initial currency ---");
    printf("\n0 -> USD");
    printf("\n1 -> EUR");
    printf("\n2 -> INR");
    printf("\nChoice : ");
    scanf("%d", &initialCurrency);

    printf("Enter the amount : ");
    scanf("%f", &amount);

    printf("\n=== [OUTPUT] ===");
    switch (initialCurrency)
    {
        //USD
        case 0:
            //To INR
            printf("\n%.2f USD = %.2f INR", amount, amount * 87.4f);
            break;
        
        //EUR
        case 1:
            //To INR
            printf("\n%.2f EUR = %.2f INR", amount, amount * 101.67f);
            break;
        
        //INR
        case 2:
            printf("\n--- Enter the target currency ---");
            printf("\n0 -> USD");
            printf("\n1 -> EUR");
            printf("\nChoice : ");
            scanf("%d", &targetCurrency);

            switch (targetCurrency)
            {
                //TO USD
                case 0:
                    printf("\n%.2f INR = %.2f USD", amount, amount / 87.4f);
                    break;
                
                //TO EUR
                case 1:
                    printf("\n%.2f INR = %.2f EUR", amount, amount / 87.4f);
                    break;
                
                default:
                    printf("\nConversion from INR TO %d is not supported yet!", initialCurrency);
                    break;
            }
            break;

        default:
            printf("\nConversion from %d is not supported yet!", initialCurrency);
            break;
    }

    return 0;
}