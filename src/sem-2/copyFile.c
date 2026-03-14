// Write a C program to copy contents from one file to another file.

#include <stdio.h>

void main()
{
    FILE *sourceFile, *destinationFile;
    sourceFile = fopen("testFiles/Q24/source.txt", "r");

    if(sourceFile == NULL)
    {
        printf("The source file couldn't be opened");
        return;
    }

    destinationFile = fopen("testFiles/Q24/destination.txt", "w");

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF)
        fprintf(destinationFile, "%c", ch);

    printf("File was copied");

    fclose(sourceFile);
    fclose(destinationFile);
}