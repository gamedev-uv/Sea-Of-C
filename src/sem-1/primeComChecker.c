#include <math.h>
#include <stdio.h>

int isPrime(int n)
{
    if(n <= 1)
        return -1;          //Neither prime nor composite

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) 
            return 0;       //Composite
    }

    return 1;               //Prime
}

int main()
{
    int n;
    printf("=== [INPUT] ===");
    printf("\nEnter the number: ");
    scanf("%d", &n);
    
    printf("\n=== [OUTPUT] ===");

    int isprime = isPrime(n);
    
    if(isprime == 1)
        printf("\n%d is prime", n);
    else if(isprime == 0)
        printf("\n%d is composite", n);
    else 
        printf("\n%d is neither prime nor composite", n);

    return 0;
}