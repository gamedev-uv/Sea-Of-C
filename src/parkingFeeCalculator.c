#include <stdio.h>

int main()
{
    int hours;
    float price;

    printf("=== [INPUT] ===");
    printf("\nEnter the number of hours parked : ");
    scanf("%d", &hours);

    if(hours <= 1)
        price = 0;
    else if(hours <= 10)
        price = 1000;
    else if(hours <= 24)
        price = 1500;
    else
        price = 2000;

    printf("\n=== [OUTPUT] ===");
    printf("\nPrice for %d hour(s) of parking : %.2f", hours, price);
    return 0;
}