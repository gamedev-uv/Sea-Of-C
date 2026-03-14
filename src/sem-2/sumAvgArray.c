#include <stdio.h>

void main()
{
    int n;
    int sum = 0;

    printf("=== [INPUT] ===");
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    int a[n];
    printf("\n--- Enter the elements of the array ---\n");
    for(int i = 0; i < n; i++)
    {
        printf("  -Element at (%d): ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("\n=== [OUTPUT] ===\n");
    printf("Sum: %d", sum);
    printf("\nAverage: %.2f", (float)sum / n);
}