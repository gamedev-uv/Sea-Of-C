#include <stdio.h>

int main()
{
    int rowCount;

    printf("=== [INPUT] ===");
    printf("\nEnter the number of rows (n) : ");
    scanf("%d", &rowCount);

    printf("\n=== [OUTPUT] ===\n");
    int charCount = 0;
    for(int i = 0; i < rowCount; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c ", 65 + charCount);
            charCount++;
        }

        printf("\n");
    }

    return 0;
}