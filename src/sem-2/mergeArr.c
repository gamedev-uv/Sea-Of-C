#include <stdio.h>

void displayArray(int a[], int n)
{
    printf("[");
    for(int i = 0; i < n - 1; i++)
        printf("%d, ", a[i]);

    printf("%d]", a[n - 1]);
}

void main()
{
    int n, m;

    printf("=== [INPUT] ===");
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    int a1[n];
    printf("\n--- Enter the elements of the 1st array ---\n");
    for(int i = 0; i < n; i++)
    {
        printf("  -Element at (%d): ", i);
        scanf("%d", &a1[i]);
    }

    printf("\nEnter the value of m: ");
    scanf("%d", &m);

    int a2[n];
    printf("\n--- Enter the elements of the 2nd array ---\n");
    for(int i = 0; i < m; i++)
    {
        printf("  -Element at (%d): ", i);
        scanf("%d", &a2[i]);
    }

    int l = n + m;
    int merged[l];
    for(int i = 0; i < l; i++)
    {
        if(i < n) merged[i] = a1[i];
        else merged[i] = a2[i - n];
    }

    printf("\n=== [OUTPUT] ===\n");

    printf("Array 1: ");
    displayArray(a1, n);
    
    printf("\nArray 2: ");
    displayArray(a2, m);

    printf("\nMerged Array: ");
    displayArray(merged, l);
}