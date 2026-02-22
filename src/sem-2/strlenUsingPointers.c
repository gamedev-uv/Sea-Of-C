//Write a C program to find length of string using pointers. 
#include <stdio.h>
#include <string.h>

int length(char *charSequence)
{
    int i = 0;
    for(; charSequence[i] != '\0'; i++);
    return i;
}

int main()
{
    char string[50];
    printf("=== [INPUT] ===");
    printf("\nEnter a string: ");
    scanf("%s", string);

    printf("\n=== [OUTPUT] ===");
    printf("\n[BUILT-IN] strlen(%s): %d", string, strlen(string));
    printf("\n[.CUSTOM.] length(%s): %d", string, length(string));

    return 0;
}