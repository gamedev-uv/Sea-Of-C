#include <stdio.h>

void main()
{
    int array[] = {1, -5, 2, 6, -7, 3};
    int n = 6;

    printf("Original: ");
    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);

    //0 -> i is the sorted region
    //j -> n is the unsorted region
    //Every iteration find the min element from the unsorted region and put it in the sorted region by swapping it with a[i]
    for(int i = 0; i < n; i++)
    {
        int minIndex = i;
        for(int j = i; j < n; j++)
        {
            if(array[j] < array[minIndex])
                minIndex = j;
        }

        int t = array[i];
        array[i] = array[minIndex];
        array[minIndex] = t;
    }

    printf("\nSorted: ");
    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);
}