//Write a C program to merge two file to third file

#include <stdio.h>

void main()
{
    FILE *fileA, *fileB, *destFile;

    fileA = fopen("testFiles/Q25/fileA.txt", "r");
    fileB = fopen("testFiles/Q25/fileB.txt", "r");

    if(fileA == NULL || fileB == NULL)
    {
        printf("One or both the source files couldn't be opened!");
        return;
    }

    destFile = fopen("testFiles/Q25/destFile.txt", "a");
    char ch;

    while ((ch = fgetc(fileA)) != EOF) fprintf(destFile, "%c", ch);
    while ((ch = fgetc(fileB)) != EOF) fprintf(destFile, "%c", ch);
    printf("Merged files into one");

    fclose(fileA);
    fclose(fileB);
    fclose(destFile);
}