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

    int min = a[0];
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
       if(a[i] < min) min = a[i];
       if(a[i] > max) max = a[i];
    }

    printf("\n=== [OUTPUT] ===\n");
    printf("Minimum: %d", min);
    printf("\nMaximum: %d", max);
}