#include <stdio.h>

int main()
{
    int n;
    printf("=== [INPUT] ===");
    printf("\nEnter the length of the array(n): ");
    scanf("%d", &n);

    int a[n];
    printf("\n--- Enter the elements of the array ---\n");
    for(int i = 0; i < n; i++)
    {
        printf("-Enter element at (%d): ", i);
        scanf("%d", &a[i]);
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nReverse: ");
    for(int i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}