#include <stdio.h>

int main()
{
    char ch;

    printf("=== [INPUT] ===");
    printf("\nEnter the character : ");
    scanf("%c", &ch);

    printf("\n=== [OUTPUT] ===\n");
    if(ch >= 'A' && ch <= 'Z')
        printf("Upper Case Character (A - Z)");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lower Case Character (a - z)");
    else if(ch >= '0' && ch <= '9')
        printf("Digit (0 - 9)");
    else 
        printf("Special Character : %c", ch);

    return 0;
}