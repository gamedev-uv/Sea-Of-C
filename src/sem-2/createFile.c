//Write a C program to create a file and write contents, save and close the file

#include <stdio.h>

int main()
{
    FILE *file;
    printf("Creating file...");
    file = fopen("testFiles/createFileQ19.txt", "w");

    printf("\nWriting to file...");
    fprintf(file, "Writing to the file");
    fclose(file);

    return 0;
}