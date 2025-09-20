#include <stdio.h>

int main()
{
    int length;

    printf("=== [INPUT] ===");
    printf("\nEnter the length : ");
    scanf("%d", &length);

    //Create the array and enter elements into it
    printf("\n---Enter the elements---\n");
    int array[length];
    for(int i = 0; i < length; i++)
    {
        printf("Element at %d : ", i);
        scanf("%d", &array[i]);
    }

    //Print the initial array
    printf("\n=== [OUTPUT] ===");
    printf("\nInitial Array : [");
    for(int i = 0; i < length; i++)
        printf("%d%s", array[i], i == length - 1 ? "" : ", ");

    printf("]");

    //Sort it using selection sort
    for(int i = 0; i < length; i++)
    {
        for(int j = i; j <= length - 1; j++)
        {
            int a = array[i];
            int b = array[j];

            if(a < b) continue;

            array[j] = a;
            array[i] = b;
        }
    }

    //Print the sorted array
    printf("\nSorted Array : [");
    for(int i = 0; i < length; i++)
        printf("%d%s", array[i], i == length - 1 ? "" : ", ");

    printf("]");

    int min = array[0];
    int max = array[length - 1];

    printf("\nMin Element : %d", min);
    printf("\nMax Element : %d", max);
    
    return 0;
}