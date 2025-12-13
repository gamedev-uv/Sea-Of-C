#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("=== [INPUT] ===");
    printf("\nEnter the number : ");
    scanf("%d", &n);

    //We loop from 1 -> n/2
    //As all unique factors of any number n are found till (n/2)
    for(int i = 1; i <= n/2; i++) 
    {
        //If it is divisible add to sum
        if(n % i == 0) sum += i;
    }

    printf("\n=== [OUTPUT] ===");
    if(sum == n)
        printf("\n%d is a perfect number", n);
    else
        printf("\n%d is not a perfect number", n);

    return 0;
}