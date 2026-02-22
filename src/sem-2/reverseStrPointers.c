//Write a C program to find reverse of a string using pointers.
#include <stdio.h>
#include <string.h>

void reverseStr(char *originalStr, char *reverseStr)
{
    int length = strlen(originalStr);
    for(int i = length - 1; i >= 0; i--)
        *(reverseStr + length - i - 1) = *(originalStr + i);

    *(reverseStr + length) = '\0';
}

int main()
{
    char input[50];
    char reverse[50];

    printf("=== [INPUT] ===");
    printf("\nEnter the string: ");
    scanf("%s", input);

    printf("\n=== [OUTPUT] ===");
    reverseStr(input, reverse);
    printf("\nReverse(%s): %s", input, reverse);

    return 0;
}