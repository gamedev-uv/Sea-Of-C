#include <stdio.h>

int main()
{
    char ch;

    printf("=== [INPUT] ===");
    printf("\nEnter the alphabet : ");
    scanf("%c", &ch);

    //Ensure it is an alphabet
    printf("\n=== [OUTPUT] ===");
    if(!(ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z'))
    {
        printf("\nEntered character is not an alphabet");
        return 0; //Don't continue any further if it is not an alphabet
    }

    //We are checking whether it is either an upper case or lower case vowel
    //We can also first convert it into upper/lower case character by +-34 if we only wanna do one check
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'
    || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("\nEntered alphabet is a vowel");
    else
        printf("\nEntered alphabet is a consonant");

    return 0;
}