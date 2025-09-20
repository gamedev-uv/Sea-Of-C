#include <stdio.h>
#include <limits.h>

int main()
{
    int length, min = INT_MAX;

    printf("=== [INPUT] ===");
    printf("\nEnter the length : ");
    scanf("%d", &length);

    int array[length];

    printf("\n---Enter the elements---\n");
    for(int i = 0; i < length; i++)
    {
        printf("Element at %d : ", i);
        scanf("%d", &array[i]);

        if(array[i] < min)
            min = array[i];
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nSmallest element : %d", min);

    return 0;
}