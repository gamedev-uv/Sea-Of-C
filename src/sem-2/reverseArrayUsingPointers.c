// Write a C program to reverse an array using pointers.
#include <stdio.h>

void reverse(int array[], int reversedArray[], int length)
{
    for(int i = length - 1; i >= 0; i--)
        *(reversedArray + i) = *(array + (length - (i + 1))); 
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

    int reverseArray[n];
    reverse(a, reverseArray, n);

    printf("\n=== [OUTPUT] ===\n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(reverseArray + i));

    return 0;
}