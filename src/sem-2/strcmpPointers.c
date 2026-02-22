//Write a C program to compare two strings using pointers.
#include <stdio.h>

int compare(char *str1, char *str2)
{
    for(int i = 0; ; i++)
    {
        char c1 = *(str1 + i);
        char c2 = *(str2 + i);

        if(c1 == '\0' && c2 == '\0') break;
        if(c1 == c2) continue;

        return c1 - c2;
    }

    return 0;
}

int main()
{
    char str1[50];
    char str2[50];

    printf("=== [INPUT] ===");
    printf("\nEnter the 1st string: ");
    scanf("%s", str1);

    printf("Enter the 2nd string: ");
    scanf("%s", str2);

    printf("\n=== [OUTPUT] ===");
    printf("\nCompare(%s, %s): %d", str1, str2, compare(str1, str2));
    
    return 0;
}