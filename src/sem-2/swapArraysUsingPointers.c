//Write a C program to swap two arrays using pointers.
#include <stdio.h>

void populateArray(char *name, int array[], int size)
{
    printf("\n\n=== Populating Array '%s' ===", name);

    printf("\n---Enter the elements of the array---\n");
    for(int i = 0; i < size; i++)
    {
        printf("Enter the element at (%d): ", i);
        scanf("%d", array + i);
    }
}

void swapElements(int array1[], int array2[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int temp = *(array1 + i);
        *(array1 + i) = *(array2 + i);
        *(array2 + i) = temp; 
    }
}

void displayArray(char *name, int array[], int size)
{
    printf("\nArray '%s': [", name);

    for(int i = 0; i < size; i++)
        printf("%d%s", *(array + i), i == size - 1 ? "" : ", ");

    printf("]");
}

int main()
{
    int size;

    printf("=== [INPUT] ===");
    printf("\nEnter the size of the arrays: ");
    scanf("%d", &size);

    int a[size];
    int b[size];

    populateArray("A (1st Array)", a, size);
    displayArray("A", a, size);

    populateArray("B (2nd Array)", b, size);
    displayArray("B", b, size);

    printf("\n\n=== [OUTPUT] ===");
    swapElements(a, b, size);
    displayArray("A", a, size);
    displayArray("B", b, size);

    return 0;
}