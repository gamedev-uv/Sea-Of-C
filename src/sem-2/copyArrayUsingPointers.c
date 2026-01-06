//Write a C program to copy one array to other using pointers.
#include <stdio.h>

void copyValues(int sourceArray[], int targetArray[], int elementCount)
{
    for(int i = 0; i < elementCount; i++)
        *(targetArray + i) = *(sourceArray + i); 
}

int main()
{
    int n;

    printf("=== [INPUT] ===");
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("\n---Enter the elements of the array---\n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element at (%d): ", i);
        scanf("%d", a + i);
    }

    int b[n];
    copyValues(a, b, n);

    printf("\n=== [OUTPUT] ===\n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(b + i));

    return 0;
}