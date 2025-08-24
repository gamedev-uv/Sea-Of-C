#include <stdio.h>

int main()
{
    int number;

    printf("=== [INPUT] ===");
    printf("\nEnter the number : ");
    scanf("%d", &number);

    printf("\n=== [OUTPUT] ===");
    printf("\nNumber Name : ");

    switch (number)
    {
        case 0:
            printf("Zero");            
            break;

        case 1:
            printf("One");            
            break;

        case 2:
            printf("Two");
            break;
        
        case 3: 
            printf("Three");
            break;

        case 4: 
            printf("Four");
            break;
    
        case 5:
            printf("Five");
            break;
    
        case 6: 
            printf("Six");
            break;
    
        case 7:
            printf("Seven");
            break;

        case 8:
            printf("Eight");
            break;

        case 9:
            printf("Nine");
            break;

        default:
            printf("[INVALID OPTION], Can't name %d", number);
            break;
    }

    return 0;
}