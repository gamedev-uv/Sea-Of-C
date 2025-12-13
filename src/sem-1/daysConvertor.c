#include <stdio.h>

int main()
{
    int inputDays;
    int years, months, weeks, days;

    printf("=== [INPUT] ===");
    printf("\nEnter the number of days : ");
    scanf("%d", &inputDays);

    years = inputDays / 365;
    months = (inputDays % 365) / 30;
    weeks = ((inputDays % 365) % 30) / 7;
    days = ((inputDays % 365) % 30) % 7;

    printf("\n=== [OUTPUT] ===");
    printf("\n%d days = %d year(s) %d month(s) %d week(s) %d day(s)", inputDays, years, months, weeks, days);

    return 0;
}