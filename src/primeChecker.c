#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("=== [INPUT] ===");
    printf("\nEnter the number : ");
    scanf("%d", &n);

    int isPrime = 1; //We assume it is prime (1 = true, 0 = false)

    //As discussed in the note we can loop till n, n/2 but those would be less efficient
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) 
        {
            //Not prime so we break
            isPrime = 0; 
            break;
        }
    }

    printf("\n=== [OUTPUT] ===");
    if(isPrime)
        printf("\n%d is prime", n);
    else
        printf("\n%d is composite", n);

    return 0;
}