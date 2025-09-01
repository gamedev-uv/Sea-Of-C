#include <stdio.h>

int main()
{
    int n, sum;

    printf("=== [INPUT] ===");
    printf("\nEnter n : ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++)
        sum += i;

    printf("\n=== [OUTPUT] ===");
    printf("\nSum of integers up to %d : %d", n, sum);
    return 0;
}