#include <stdio.h>

void main()
{
    int array[] = {1, -5, 2, 6, -7, 3};
    int n = 6;

    printf("Original: ");
    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);

    //Compare adjacent elements till it is sorted
    int sorted = 0;
    while (!sorted)
    {
        sorted = 1;

        for(int i = 1; i < n; i++)
        {
            if(array[i] > array[i - 1]) continue;

            sorted = 0;
            int t = array[i];
            array[i] = array[i - 1];
            array[i - 1] = t;
        }
    }
    
    printf("\nSorted: ");
    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);
}