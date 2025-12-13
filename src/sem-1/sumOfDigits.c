#include <stdio.h>

int main()
{
    int n, sum;

    printf("=== [INPUT] ===");
    printf("\nEnter n : ");
    scanf("%d", &n);

    for(int i = n; i > 0; i /= 10)
        sum += i % 10;

    printf("\n=== [OUTPUT] ===");
    printf("\nSum of digits of %d : %d", n, sum);
    return 0;
}