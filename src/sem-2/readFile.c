// Write a C program to read file contents and display on console.

#include <stdio.h>

void main()
{
    char fileName[] = "readFile.c";   //The file itself

    FILE *file;
    file = fopen(fileName, "r");
    if(file == NULL)
    {
        printf("File \"%s\" wasn't found, can't read", fileName);
        return;
    }

    printf("File was found\nReading...\n");
    char c;
    while ((c = fgetc(file)) != EOF)
        printf("%c", c);

    printf("\nFile has ended");
    fclose(file);
}