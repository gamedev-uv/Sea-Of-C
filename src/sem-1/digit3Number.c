#include <stdio.h>

int main()
{
    int num;

    printf("=== [INPUT] ===");
    printf("\nEnter the number : ");
    scanf("%d", &num);

    printf("\n=== [OUTPUT] ===");
    if(num > 99 && num < 1000)
        printf("\nNumber is a 3 digit number");
    else
        printf("\nNumber is not a 3 digit number");

    return 0;
}