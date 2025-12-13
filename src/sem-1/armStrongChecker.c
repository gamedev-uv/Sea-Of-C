#include <math.h>
#include <stdio.h>

int getDigitCount(int n)
{
    int digits = 0;
    for(int i = n; i > 0; i /= 10)
        digits++;
    
    return digits;
}

int isArmStrong(int number)
{
    int digitCount = getDigitCount(number);

    int powSum = 0;
    for(int i = number; i > 0; i /= 10)
        powSum += pow(i % 10, digitCount);  //Raise each digit to the number of digits

    return powSum == number;                //Return 1 if both are equal else 0
}

int main()
{
    int n;

    printf("=== [INPUT] ===");
    printf("\nEnter the number (n): ");
    scanf("%d", &n);

    printf("\n=== [OUTPUT] ===");
    if(isArmStrong(n))
        printf("\n%d is an armstrong number", n);
    else
        printf("\n%d is not an armstrong number", n);

    return 0;
}