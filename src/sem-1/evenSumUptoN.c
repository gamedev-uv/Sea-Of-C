#include <stdio.h>

int main()
{
    int n, sum;

    printf("=== [INPUT] ===");
    printf("\nEnter n : ");
    scanf("%d", &n);

    for(int i = 2; i < n; i += 2)
        sum += i;

    printf("\n=== [OUTPUT] ===");
    printf("\nSum of even integers up to %d : %d", n, sum);
    return 0;
}