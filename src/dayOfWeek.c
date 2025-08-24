#include <stdio.h>

int main()
{
    int day;

    printf("=== [INPUT] ===");
    printf("\nEnter the day : ");
    scanf("%d", &day);

    printf("\n=== [OUTPUT] ===");
    printf("\nThe corresponding day is : ");

    switch (day)
    {
        case 1:
            printf("Sunday");            
            break;

        case 2:
            printf("Monday");
            break;
        
        case 3: 
            printf("Tuesday");
            break;

        case 4: 
            printf("Wednesday");
            break;
    
        case 5:
            printf("Thursday");
            break;
    
        case 6: 
            printf("Friday");
            break;
    
        case 7:
            printf("Saturday");
            break;

        default:
            printf("INVALID, No day was found at %d", day);
            break;
    }

    return 0;
}