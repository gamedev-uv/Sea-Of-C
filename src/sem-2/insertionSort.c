#include <stdio.h>

void main()
{
    int array[] = {1, -5, 2, 6, -7, 3};
    int n = 6;

    printf("Original: ");
    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);

    //0 -> j is the sorted region
    //j -> i is the unsorted region
    //Whenver you find a new element sort it inside the sorted region
    //a[j] is a[i] for the first iteration (which is the new element)
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(array[j] > array[j - 1]) break;

            int t = array[j];
            array[j] = array[j - 1];
            array[j - 1] = t;
        }
    }

    printf("\nSorted: ");
    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);
}