#include <stdio.h>

int main()
{
    int length, sum = 0;

    printf("=== [INPUT] ===");
    printf("\nEnter the length : ");
    scanf("%d", &length);

    int array[length];

    printf("\n---Enter the elements---\n");
    for(int i = 0; i < length; i++)
    {
        printf("Element at %d : ", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nSum of elements : %d", sum);

    return 0;
}