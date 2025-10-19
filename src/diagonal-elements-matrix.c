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
    printf("\n---Enter the elements of the array---\n");
    for(int i = 0; i < n; i++)
    {
        for(int j  = 0; j < m; j++)
        {
            printf("-Enter element at (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n=== [OUTPUT] ===");

    int diagSum = 0;
    printf("\nDiagonal Elements: {");
    for(int i = 0; i < n; i++)
    {
        for(int j  = 0; j < m; j++)
        {
            if(i != j) continue;

            //If it is a diagonal element
            diagSum += a[i][j];
            printf("%s%d", i == 0 ? "" : ", ", a[i][j]);
        }
    }

    printf("}");
    printf("\nSum of diagonal elements: %d", diagSum);

    return 0;
}