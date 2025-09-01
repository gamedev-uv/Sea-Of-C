#include <stdio.h>

int main()
{
    int n, factorial = 1;

    printf("=== [INPUT] ===");
    printf("\nEnter n : ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("-ve numbers are not supported!");
        return -1;
    }

    for(int i = n; i > 1; i--)
        factorial *= i;

    printf("\n=== [OUTPUT] ===");
    printf("\n%d! = %d", n, factorial);
    return 0;
}