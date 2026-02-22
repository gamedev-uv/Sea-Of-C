//Write a C program to add two matrix using pointers.
#include <stdio.h>

void populateMatrix(char *name, int *matrix, int rows, int columns)
{
    printf("\nPopulating Matrix '%s'", name);
    printf("\n---Enter the elements of the matrix---\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf(" - Enter element at (%d, %d): ", i, j);
            scanf("%d", matrix + (i * columns) + j);
        }
    }
}

void addMatrices(int *matrixA, int *matrixB, int *matrixC, int rows, int columns)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            int index = i * columns + j;
            *(matrixC + index) = *(matrixA + index) + *(matrixB + index);
        }
    }
}

void displayMatrix(char *name, int *matrix, int rows, int columns)
{
    printf("\n---Matrix %s---\n", name);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
            printf("%d ", *(matrix + (i * columns) + j));

        printf("\n");
    }
}

int main()
{
    int n, m;

    printf("=== [INPUT] ===");
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);

    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int matrixA[n][m];
    int *matrixAPointer = &matrixA[0][0];  
    populateMatrix("A", matrixAPointer, n, m);
    displayMatrix("A", matrixAPointer, n, m);

    int matrixB[n][m];
    int *matrixBPointer = &matrixB[0][0];  
    populateMatrix("B", matrixBPointer, n, m);
    displayMatrix("B", matrixBPointer, n, m);

    int matrixC[n][m];
    int *matrixCPointer = &matrixC[0][0];
    addMatrices(matrixAPointer, matrixBPointer, matrixCPointer, n, m);
    displayMatrix("C (SUM)", matrixCPointer, n, m);

    return 0;
}