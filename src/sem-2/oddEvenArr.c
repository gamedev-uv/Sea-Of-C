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
    int n;
    int evenCount = 0, oddCount = 0;

    printf("=== [INPUT] ===");
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    int a[n];
    printf("\n--- Enter the elements of the array ---\n");
    for(int i = 0; i < n; i++)
    {
        printf("  -Element at (%d): ", i);
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) evenCount++;
    }

    int even[evenCount];
    int odd[n - evenCount];
    
    evenCount = 0;
    for(int i = 0; i < n; i++)
    {
        int element = a[i];
        if(element % 2 == 0)
            even[evenCount++] = element;
        else
            odd[oddCount++] = element;
    }

    printf("\n=== [OUTPUT] ===\n");
    printf("Original Array: ");
    displayArray(a, n);

    printf("\nEven Elements: ");
    displayArray(even, evenCount);

    printf("\nOdd Elements: ");
    displayArray(odd, oddCount);
}