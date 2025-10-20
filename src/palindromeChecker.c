#include <stdio.h>

int reverse(int x)
{
    int rev = 0;
    for(int i = x; i > 0; i /= 10)
        rev = rev * 10 + i % 10;
    
    return rev;
}

int isPalindrome(int n)
{
    return n == reverse(n);
}

int main()
{
    int n;

    printf("=== [INPUT] ===");

    printf("\nEnter the number: ");
    scanf("%d", &n);

    printf("\n=== [OUTPUT] ===\n");
    if(isPalindrome(n))
        printf("%d is a palindrome number", n);
    else 
        printf("%d is not a palindrome number", n);

    return 0;
}