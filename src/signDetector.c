#include <stdio.h>

int main()
{
    int num;
    
    printf("=== [INPUT] ===\nEnter the number : ");
    scanf("%d", &num);

    printf("\n=== [OUTPUT] ===\n");
    if(num == 0)
        printf("Number is zero");
    else if(num > 0)
        printf("Number is a +ve number");
    else 
        printf("Number is a -ve number");

    return 1;
}