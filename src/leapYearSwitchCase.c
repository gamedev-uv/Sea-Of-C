#include <stdio.h>

int main()
{
    int year;

    printf("=== [INPUT] ===");
    printf("\nEnter the year : ");
    scanf("%d", &year);

    printf("\n=== [OUTPUT] ===");

    switch(year == 0)
    {
        case 1:
            printf("\nYear zero is not a leap year");
            break;

        //If it is not 0
        case 0:
            switch (year % 100 == 0)
            {
                //Century year
                case 1:
                    printf("\nYear %d is a century year", year);
                    switch (year % 400 == 0)
                    {
                        //Divisible by 400
                        case 1:
                            printf("\nYear %d is a leap year", year);
                            break;
                        
                        case 0:
                            printf("\nYear %d is a not leap year", year);
                            break;
                    }
                    break;
                
                //Not a century year
                case 0:
                    printf("\nYear %d is not a century year", year);
                    switch (year % 4 == 0)
                    {
                        //Divisible by 4
                        case 1:
                            printf("\nYear %d is a leap year", year);
                            break;
                        
                        case 0:
                            printf("\nYear %d is a not leap year", year);
                            break;
                    }
                    break;
            }
            break;
    }

    return 0;
}