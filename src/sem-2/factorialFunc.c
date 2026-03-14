#include <stdio.h>

unsigned long factorial(int n)
{
    unsigned long fact = 1;
    for(int i = 2; i <= n; i++)
        fact *= i;

    return fact;
}

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d! = %lu", n, factorial(n));
}