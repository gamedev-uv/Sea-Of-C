#include <stdio.h>

int main()
{
    int a, b;
    int gcd, lcm;

    printf("=== [INPUT] ===");
    printf("\nEnter A : ");
    scanf("%d", &a);

    printf("Enter B : ");
    scanf("%d", &b);

    int divident = a;
    int divisor = b;
    int rem = divident % divisor;

    //Loop till the divisor completely divides the divident
    while(rem != 0)
    {
        //Update divident and divisor
        divident = divisor;
        divisor = rem;

        //Update the remainder again
        rem = divident % divisor;
    }    

    gcd = divisor;
    lcm = a * b / gcd;
    printf("\n=== [OUTPUT] ===");
    printf("\nGCD(%d, %d) = %d", a, b, gcd);
    printf("\nLCM(%d, %d) = %d", a, b, lcm);
}