// Write a C program to append content to a file.

#include <stdio.h>

void main()
{
    char filePath[] = "testFiles/appendFileQ22.txt";

    FILE* file;
    file = fopen(filePath, "a");
    
    char input[200];
    printf("=== [INPUT] ===");
    printf("\nEnter the input which is to be appended: ");
    scanf("%[^\n]s", input);

    fprintf(file, "%s", input);
    printf("Input was appended to file");
    fclose(file);
}