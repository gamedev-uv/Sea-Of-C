// Write a C program to remove a word from text file.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *charToStr(char ch)
{
    char *str = malloc(2 * sizeof(char));
    str[0] = ch;
    str[1] = '\0';
    return str;
}

void main()
{
    FILE *sourceFile;
    char filePath[] = "testFiles/Q27/sourceFile.txt";
    sourceFile = fopen(filePath, "r");

    if(sourceFile == NULL)
    {
        printf("The source file couldn't be opened");
        return;
    }

    char targetWord[30];
    printf("Enter the word to be removed: ");
    scanf("%s", targetWord);

    char ch;
    char *fileContent = calloc(500, sizeof(char));
    char *word = calloc(30, sizeof(char));

    while (1)
    {
        ch = fgetc(sourceFile);

        //If a word is over
        if(ch == ' ' || ch == '\n' || ch == EOF)
        {
            //If it is not equal to the target
            //Then append to fileContent
            if(strcmp(word, targetWord) != 0) 
            {
                if(ch != -1) word = strcat(word, charToStr(ch));
                fileContent = strcat(fileContent, word);
            }  
            
            word[0] = '\0';

            if(ch == EOF) 
                break;
            continue;
        }

        word = strcat(word, charToStr(ch));
    }

    //Close and open with "w" mode to reset file
    fclose(sourceFile);
    sourceFile = fopen(filePath, "w");

    //Write new fileContent to file
    printf("%s", fileContent);
    fprintf(sourceFile, "%s", fileContent);
    fclose(sourceFile);
}