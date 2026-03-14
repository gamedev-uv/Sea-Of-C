// Write a C program to compare two files.

#include <stdio.h>

void main()
{
    FILE *fileA, *fileB;

    fileA = fopen("testFiles/Q23/fileA.txt", "r");
    fileB = fopen("testFiles/Q23/fileB.txt", "r");

    if(fileA == NULL || fileB == NULL)
    {
        printf("Files couln't be opened");
        return;
    }

    char c1, c2;
    int same = 0;
    while (1)
    {
        c1 = fgetc(fileA);
        c2 = fgetc(fileB);

        if(c1 != c2) 
            break;

        if(c1 == EOF) 
        {
            same = 1;
            break;
        }
    }

    if(same)
        printf("Files are the same");
    else
        printf("Files are different");
}