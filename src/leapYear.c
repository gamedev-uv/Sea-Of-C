#include <stdio.h>

int main()
{
    int year;

    printf("=== [INPUT] ===");
    printf("\nEnter the year : ");
    scanf("%d", &year);

    printf("\n=== [OUTPUT] ===\n");
    if(year == 0)
        printf("Year zero is not a leap year");

    //Either divisible by 4 and not a century else divisible by 400
    else if((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) 
        printf("Year %d is a leap year", year);
    else
        printf("Year %d is not a leap year", year);

    return 0;
}