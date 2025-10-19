#include <stdio.h>

int main()
{
    int n, m;

    printf("=== [INPUT] ===");

    printf("\nEnter the row count (n): ");
    scanf("%d", &n);

    printf("Enter the column count (m): ");
    scanf("%d", &m);

    int a[n][m], b[n][m];
    printf("\nEnter elements for array A: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("- Enter element at (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements for array B: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("- Enter element at (%d, %d): ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n===[OUTPUT] ===");
    printf("\nOutput Matrix: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%d ", a[i][j] + b[i][j]);

        printf("\n");
    }
}