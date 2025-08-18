#include <stdio.h>

int main()
{
    int inputDays;
    int years, months, days;

    printf("=== [INPUT] ===");
    printf("\nEnter the number of days : ");
    scanf("%d", &inputDays);

    years = inputDays / 365;
    months = (inputDays % 365) / 30;
    days = (inputDays % 365) % 30;

    printf("\n=== [OUTPUT] ===");
    printf("\n%d days = %d year(s) %d month(s) and %d day(s)", inputDays, years, months, days);

    return 0;
}