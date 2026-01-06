//Write a C program to search an element in array using pointers.
#include <stdio.h>

int linearSearch(int array[], int length, int target)
{
    if(!array || length == 0) return -1;

    for(int i = 0; i < length; i++)
    {
        if(*(array + i) == target) return i;
    }

    return -1;
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

    int target;
    printf("\nEnter the element which is to be searched: ");
    scanf("%d", &target);

    printf("\n\n=== [OUTPUT] ===");
    int elementIndex = linearSearch(a, n, target);
    if(elementIndex == -1)
        printf("\nTarget element '%d' wasn't found in the array", target);
    else
        printf("\nTarget element '%d' was found at index '%d'", target, elementIndex);

    return 0;
}