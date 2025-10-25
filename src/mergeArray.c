#include <stdio.h>

int main()
{
    int n, m;

    //Input for array A
    printf("=== [INPUT] ===");
    printf("\nEnter the length of the array A (n): ");
    scanf("%d", &n);

    int a[n];
    printf("\n--- Enter the elements of the array A---\n");
    for(int i = 0; i < n; i++)
    {
        printf("-Enter element at (%d): ", i);
        scanf("%d", &a[i]);
    }

    //Input for array B
    printf("\nEnter the length of the array B (m): ");
    scanf("%d", &m);

    int b[m];
    printf("\n--- Enter the elements of the array B---\n");
    for(int i = 0; i < m; i++)
    {
        printf("-Enter element at (%d): ", i);
        scanf("%d", &b[i]);
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nMerged Array: ");
    for(int i = 0; i < n + m; i++)
    {
        if(i < n)
            printf("%d ", a[i]);
        else
            printf("%d ", b[i - n]);
    }

    return 0;
}