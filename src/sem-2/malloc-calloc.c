//Write a C program to implement the usages of malloc() and calloc().

#include <stdio.h>
#include <stdlib.h>

void displayArray(int *firstElement, int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", *(firstElement + i));
}

int main()
{
    int size;

    printf("=== [INPUT] ===");
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    int *mallocArr = malloc(size * sizeof(int));
    int *callocArr = calloc(size, sizeof(int));

    printf("\n=== [OUTPUT] ===");

    printf("\n---Malloc Array---");
    printf("\nDefault Value: ");
    displayArray(mallocArr, size);

    for(int i = 0; i < size; i++)
        *(mallocArr + i) = i + 1;

    printf("\nUpdated Value: ");
    displayArray(mallocArr, size);

    printf("\n\n---Calloc Array---");
    printf("\nDefault Value: ");
    displayArray(callocArr, size);

    for(int i = 0; i < size; i++)
        *(callocArr + i) = i + 1;

    printf("\nUpdated Value: ");
    displayArray(callocArr, size);

    return 0;
}