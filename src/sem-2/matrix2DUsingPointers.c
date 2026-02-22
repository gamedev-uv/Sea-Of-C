//Write a C program to access two-dimensional array using pointers.
#include <stdio.h>

int main()
{
    int n, m;

    printf("=== [INPUT] ===");
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);

    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int matrix[n][m];
    printf("\n---Enter the elements of the matrix---\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf(" - Enter element at (%d, %d): ", i, j);
            scanf("%d", *(matrix + i) + j);
        }
    }

    printf("\n\n=== [OUTPUT] ===");
    printf("\n---Matrix---\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%d ", *(*(matrix + i) + j));

        printf("\n");
    }

    return 0;
}