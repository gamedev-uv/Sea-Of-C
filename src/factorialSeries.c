#include <stdio.h>

//Iterative factorial
int factorial(int x)
{
    int factorial = 1;
    for(int i = 2; i <= x; i++) 
        factorial *= i;

    return factorial;
}

int main()
{
    int n;
    printf("=== [INPUT] ===");
    
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += (float)factorial(i) / i;

    printf("\n=== [OUTPUT] ===");
    printf("\nSum of series up to %d: %d", n, sum);
}