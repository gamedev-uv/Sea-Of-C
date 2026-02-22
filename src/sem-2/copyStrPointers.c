//Write a C program to copy one string to other using pointers.
#include <stdio.h>

void copy(char *source, char *target)
{
    int i = 0;

    //Loop till the end of the source while copying each character
    while(1)
    {
        target[i] = source[i];
        if(source[i] == '\0') break;
        i++;
    }
}

int main()
{
    char string[50];
    printf("=== [INPUT] ===");
    printf("\nEnter a string: ");
    scanf("%s", string);

    char stringCopy[50];
    copy(string, stringCopy);

    printf("\n=== [OUTPUT] ===");
    printf("\nOriginal Str: %s, Copied Str: %s", string, stringCopy);

    return 0;
}
