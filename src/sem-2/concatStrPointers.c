//Write a C program to concatenate two strings using pointers.
#include <stdio.h>
#include <string.h>

void concat(char *destinationStr, char* sourceStr)
{
    int length = strlen(destinationStr);
    for(int i = 0; ;i++)
    {
        char cChar = *(sourceStr + i);
        *(destinationStr + length + i) = cChar;

        if(cChar == '\0') break;
    }
}

int main()
{
    char name[50];
    char surname[20];

    printf("=== [INPUT] ===");
    printf("\nEnter your first name: ");
    scanf("%s", name);

    printf("Enter your surname: ");
    scanf(" %s", surname);

    printf("\n=== [OUTPUT] ===");
    concat(name, surname);
    printf("\nConcatenated Name: %s", name);
    return 0;
}