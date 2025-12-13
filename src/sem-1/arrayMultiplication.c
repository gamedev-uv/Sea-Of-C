#include <stdio.h>

int main()
{
    int n1, m1;
    int n2, m2;

    printf("=== [INPUT] ===");

    printf("\n---ARRAY A---");
    printf("\nEnter the row count (n): ");
    scanf("%d", &n1);

    printf("Enter the column count (m): ");
    scanf("%d", &m1);
   
    printf("\n---ARRAY B---");
    printf("\nEnter the row count (n): ");
    scanf("%d", &n2);

    printf("Enter the column count (m): ");
    scanf("%d", &m2);

    if(m1 != n2)
    {
        printf("\nOrders of matrices don't meet criteria, can't multiply");
        return -1;
    }

    int a[n1][m1], b[n2][m2];
    printf("\nEnter elements for array A: \n");
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < m1; j++)
        {
            printf("- Enter element at (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements for array B: \n");
    for(int i = 0; i < n2; i++)
    {
        for(int j = 0; j < m2; j++)
        {
            printf("- Enter element at (%d, %d): ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nOutput Matrix: \n");
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < m2; j++)
        {
            int sum = 0;
            for(int x = 0; x < n2; x++)
                sum += a[i][x] * b[x][j];
                
            printf("%d ", sum);
        }

        printf("\n");
    }
}