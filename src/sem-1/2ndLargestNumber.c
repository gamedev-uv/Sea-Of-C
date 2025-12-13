#include <stdio.h>

int main()
{
    int n;

    printf("=== [INPUT] ===");
    printf("\nEnter length (n): ");
    scanf("%d", &n);

    int a[n];
    printf("---Enter elements---\n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter element at (%d): ", i);
        scanf("%d", &a[i]);
    }

    int largestNumber = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > largestNumber) 
            largestNumber = a[i];                       //Find the largest element
    }

    int secondLargest = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < secondLargest) continue;               //If smaller then previous largest
        if(a[i] < largestNumber) secondLargest = a[i];   //Only if smaller than the max
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nSecond Largest Element: %d", secondLargest);

    return 0;
}