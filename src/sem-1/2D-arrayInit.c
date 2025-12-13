#include <stdio.h>

int main()
{
    int n, m;

    printf("=== [INPUT] ===");
    printf("\n---Enter order of the array---");

    printf("\nEnter the number of rows : ");
    scanf("%d", &n);

    printf("Enter the number of columns : ");
    scanf("%d", &m);

    int array[n][m];
    printf("\n---Enter elements of the array---\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("Element at %d, %d : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\n=== [OUTPUT] ===\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", array[i][j]);
        }   

        printf("\n");
    }

    return 0;
}