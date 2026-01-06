//Write a C program to input and print array elements using pointer.
#include <stdio.h>

int main()
{
    int n;

    printf("=== [INPUT] ===");
    printf("\nEnter size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("\n---Enter the elements of the array---\n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter the element at (%d): ", i);
        scanf("%d", a + i);
    }

    printf("\n=== [OUTPUT] ===\n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));

    return 0;
}