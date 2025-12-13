#include <stdio.h>

int main()
{
    int num;

    printf("=== [INPUT] ===");
    printf("\nEnter the number : ");

    scanf("%d", &num);

    printf("\n=== [OUTPUT] ===\n");
    if(num % 2 == 0)
        printf("Number is an even number");
    else
        printf("Number is an odd number");

    return 1;
}