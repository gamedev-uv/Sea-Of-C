// Write a C program to count characters, words and lines in a text file.

#include <stdio.h>

void main()
{
    FILE *sourceFile;
    sourceFile = fopen("testFiles/Q26/sourceFile.txt", "r");

    int lineCount = 1, wordCount = 0, characterCount = 0;

    char ch;
    int wasSpaceFound = 1;
    while((ch = fgetc(sourceFile)) != EOF)
    {
        characterCount++;
        if(ch == '\n') lineCount++;

        if(ch == ' ') 
        {
            wasSpaceFound = 1;
            continue;
        }

        if(wasSpaceFound)
        {
            wordCount++;
            wasSpaceFound = 0;
        }
    }
    if(characterCount == 0) lineCount = 0;  //If there is nothing in the file there are no lines

    printf("--- TOKEN INFORMATION ----");
    printf("\nCharacter Count: %d", characterCount);
    printf("\nWord Count: %d", wordCount);
    printf("\nLine Count: %d", lineCount);
}