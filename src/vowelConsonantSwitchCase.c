#include <stdio.h>

int main()
{
    char character;

    printf("=== [INPUT] ===");
    printf("\nEnter the character : ");
    scanf("%c", &character);

    printf("\n=== [OUTPUT] ===");
    if(!(character >= 'A' && character <= 'Z') && 
       !(character >= 'a' && character <= 'z'))
    {
        printf("\n%c is not an alphabet, Can't be a vowel or consonant", character);
        return 0;
    }

    switch (character)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\n%c is a vowel", character);
            break;    
        
        default:
            printf("\n%c is a consonant", character);
            break;
    }

    return 0;
}