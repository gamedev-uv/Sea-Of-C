#include <stdio.h>
#include <math.h>

int main()
{
    int n; 
    int digitCount = 0, digitSum = 0;
    
    printf("=== [INPUT] ===");
    printf("\nEnter the number : ");
    scanf("%d", &n);

    //Count the number of digits
    for(int i = n; i > 0; i /= 10) 
        digitCount++;

    //Raise each digit to the number of digits and sum it up
    for(int i = n; i > 0; i /= 10) 
        digitSum += pow(i % 10, digitCount);

    printf("\n=== [OUTPUT] ===");

    if(n == digitSum)
        printf("\n%d is an armstrong number", n);
    else
        printf("\n%d is not an armstrong number", n);

    return 0;
}