#include <stdio.h>

int main()
{
    int length, n;

    printf("=== [INPUT] ===");
    printf("\nEnter the length : ");
    scanf("%d", &length);

    //Enter the elements
    int array[length];
    printf("\n---Enter the elements---\n");
    for(int i = 0; i < length; i++)
    {
        printf("Element at %d : ", i);
        scanf("%d", &array[i]);
    }

    //Enter n
    printf("Enter the element which is to be searched : ");
    scanf("%d", &n);

    //Search for the element using linear search
    int index = -1;
    for(int i = 0; i < length; i++)
    {
        if(array[i] != n) continue;
        index = i;
        break; 
    }

    printf("\n=== [OUTPUT] ===");
    if(index == -1)
        printf("\n'%d' was not found", n);
    else
        printf("\n'%d' was found at %d", n, index);

    return 0;
}