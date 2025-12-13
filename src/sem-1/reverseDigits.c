#include <stdio.h>

int main()
{
    int n, rev;

    printf("=== [INPUT] ===");
    printf("\nEnter n : ");
    scanf("%d", &n);

    for(int i = n; i > 0; i /= 10)
        rev = rev * 10 + i % 10;

    printf("\n=== [OUTPUT] ===");
    printf("\nReverse of %d <=> %d", n, rev);
    return 0;
}