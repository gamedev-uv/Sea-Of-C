#include <stdio.h>

int isPrime(int n)
{
    if(n < 2) return 0;
    for(int i = 2; i <= n / 2; i++)
        if(n % i == 0) return 0;

    return 1;
}

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime Factors of %d: ", n);
    for(int i = 2; i <= n; i++)
    {
        if(n % i == 0 && isPrime(i))
            printf("%d ", i);
    }
}