#include <stdio.h>

int main()
{
    int number;

    printf("=== [INPUT] ===");
    printf("\nEnter the number : ");
    scanf("%d", &number);

    printf("\n=== [OUTPUT] ===\n");
    switch (number == 0)
    {
        //If the number is == 0
        case 1:
            printf("The number is zero");
            break;
        
        //If the number is != 0
        case 0:
            printf("The number is non-zero\n");
            switch (number % 2 == 0)
            {
                case 1:
                    printf("The number is even");
                    break;

                case 0:
                    printf("The number is odd");
                    break;
            }
    }

    return 0;
}