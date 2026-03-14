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

    int target;
    printf("\nEnter the element to be searched: ");
    scanf("%d", &target);

    printf("\n=== [OUTPUT] ===\n");
    for(int i = 0; i < n; i++)
    {
        if(a[i] == target)
        {
            printf("Target %d at index %d", target, i);
            return;
        }
    }

    printf("Sorry, item not found");
}