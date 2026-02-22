//Write a C program to multiply two matrix using pointers.
#include <stdio.h>

void populateMatrix(char *name, int *matrix, int rows, int columns)
{
    printf("\nPopulating Matrix '%s' [%d x %d]", name, rows, columns);
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
    int rowsA, columnsA;
    int rowsB, columnsB;

    printf("=== [INPUT] ===");
    printf("\n--- Input for Matrix A ---");
    printf("\nEnter the rows count for Matrix A: ");
    scanf("%d", &rowsA);

    printf("Enter the columns count for Matrix A: ");
    scanf("%d", &columnsA);

    printf("\n--- Input for Matrix B ---");
    printf("\nEnter the rows count for Matrix B: ");
    scanf("%d", &rowsB);

    printf("Enter the columns count for Matrix B: ");
    scanf("%d", &columnsB);

    if(columnsA != rowsB)
    {
        printf("\n\n=== [OUTPUT] ===");
        printf("\nDimensions of matrices are not compatible for multiplication");
        return -1;
    }

    int matrixA[rowsA][columnsA];
    int *matrixAPointer = &matrixA[0][0];
    populateMatrix("A", matrixAPointer, rowsA, columnsA);
    displayMatrix("A", matrixAPointer, rowsA, columnsA);

    int matrixB[rowsB][columnsB];
    int *matrixBPointer = &matrixB[0][0];
    populateMatrix("B", matrixBPointer, rowsB, columnsB);
    displayMatrix("B", matrixBPointer, rowsB, columnsB);

    int matrixC[rowsA][columnsB];
    for(int i = 0; i < rowsA; i++)
    {
        for(int j = 0; j < columnsB; j++)
        {
            *(*(matrixC + i) + j) = 0;
            for(int k = 0; k < columnsA; k++)
            {
                int vA = *(*(matrixA + i) + k);      //A[i][k]
                int vB = *(*(matrixB + k) + j);      //B[k][j]
                *(*(matrixC + i) + j) += vA * vB;    //C[i][j] += A[i][k] * B[k][j]     
            }
        }
    }

    displayMatrix("C (Product)", &matrixC[0][0], rowsA, columnsB);
    return 0;
}