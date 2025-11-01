#include <stdio.h>

int isLeapYear(int year)
{
    if(year <= 0) return 0;
    if(year % 400 == 0) return 1;
    if(year % 4 && year % 100 != 0) return 1;
    return 0;
}

int main()
{
    int year;

    printf("=== [INPUT] ===");
    printf("\nEnter the year: ");
    scanf("%d", &year);

    printf("\n=== [OUTPUT] ===\n");
    if(isLeapYear(year))
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);

    return 0;
}