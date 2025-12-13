#include <stdio.h>

int main()
{
    float a, b, c;

    printf("=== [INPUT] ===");
    printf("\nEnter the sides...");

    printf("\nEnter the first side : ");
    scanf("%f", &a);

    printf("Enter the second side : ");
    scanf("%f", &b);

    printf("Enter the third side : ");
    scanf("%f", &c);

    printf("\n=== [OUTPUT] ===\n");
    if((a + b) >= c && (a + c) >= b && (b + c) >= a)
        printf("A valid triangle can be formed");
    else
        printf("A valid triangle can't be formed");

    return 0;
}