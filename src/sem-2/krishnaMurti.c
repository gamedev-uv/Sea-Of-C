#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for(int i = 2; i <= n; i++)
        fact *= i;

    return fact;
}

int isKrishnamurti(int n)
{
    int sum = 0;
    for(int i = n; i > 0; i /= 10)
        sum += factorial(i % 10);

    return sum == n;
}

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if(isKrishnamurti(n))
        printf("%d is a krishnamurti number", n);
    else
        printf("%d is not a krishnamurti number", n);
}