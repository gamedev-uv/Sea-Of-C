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
    
    int isSymmetric = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j  = 0; j < m; j++)
        {
            if(a[i][j] == a[j][i]) continue;

            //As soon as one of the values don't match
            isSymmetric = 0;
            break;
        }
    }

    printf("\n=== [OUTPUT] ===\n");

    if(isSymmetric)
        printf("The matrix is symmetric");
    else 
        printf("The matrix is not symmetric");

    return 0;
}