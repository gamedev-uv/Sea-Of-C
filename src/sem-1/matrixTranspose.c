#include <stdio.h>

int main()
{
    int n, m;

    printf("=== [INPUT] ===");
    printf("\nEnter the row count (n): ");
    scanf("%d", &n);

    printf("Enter the column count (m): ");
    scanf("%d", &m);

    int a[n][m];
    printf("\nEnter elements for array: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("- Enter element at (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nOriginal Matrix: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%d ", a[i][j]);

        printf("\n");
    }

    printf("\nTranspose Matrix: \n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%d ", a[j][i]);

        printf("\n");
    }
}