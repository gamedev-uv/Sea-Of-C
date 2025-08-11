#include <stdio.h>

int main()
{
    int a, b, c;

    printf("=== [INPUT] ===");
    printf("\nEnter the numbers...");

    printf("\nEnter the value of A : ");
    scanf("%d", &a);

    printf("Enter the value of B : ");
    scanf("%d", &b);
    
    printf("Enter the value of C : ");
    scanf("%d", &c);

    printf("\n=== [OUTPUT] ===\n");
    if(a > b && a > c)
        printf("A is the greatest number");
    else if(b > a && b > c)
        printf("B is the greatest number");
    else if(c > a && c > b)
        printf("C is the greatest number");
    else 
        printf("All the numbers are equal");        

    return 1;
}