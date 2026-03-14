#include <stdio.h>

void main()
{
    int n;

    printf("=== [INPUT] ===");
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    int a[n];
    printf("\n--- Enter the elements of the array ---\n");
    for(int i = 0; i < n; i++)
    {
        printf("  -Element at (%d): ", i);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for(int i = 1; i < n; i++)
    {
       if(a[i] > max) max = a[i];
    }

    int secondMax = a[0];
    for(int i = 1; i < n; i++)
    {
       if(a[i] > secondMax && a[i] < max) secondMax = a[i];
    }

    printf("\n=== [OUTPUT] ===\n");
    printf("Second Maximum: %d", secondMax);
}