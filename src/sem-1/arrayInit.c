#include <stdio.h>

int main()
{
    int length;

    printf("=== [INPUT] ===");
    printf("\nEnter the length : ");
    scanf("%d", &length);

    printf("\n---Enter the elements---\n");
    int array[length];
    for(int i = 0; i < length; i++)
    {
        printf("Element at %d : ", i);
        scanf("%d", &array[i]);
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nArray : [");

    for(int i = 0; i < length; i++)
    {
        //Put commas after every element unless it is the last
        printf("%d%s", array[i], i == length - 1 ? "" : ","); 
    }
    
    printf("]");
    return 0;
}