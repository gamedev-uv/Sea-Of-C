#include <stdio.h>

void main()
{
    int n;

    printf("=== [INPUT] ===");
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    printf("\n=== [OUTPUT] ===\n");
    printf("Sequence upto %d terms: ", n);
    for(int i = 0; i < n; i++)
        printf("%d ", fib[i]);
}