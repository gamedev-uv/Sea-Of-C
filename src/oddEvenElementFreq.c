#include <stdio.h>

int main()
{
    int n;

    printf("=== [INPUT] ===");
    printf("\nEnter length (n): ");
    scanf("%d", &n);

    int a[n];
    printf("---Enter elements---\n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter element at (%d): ", i);
        scanf("%d", &a[i]);
    }

    int evenFreq = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0) evenFreq++;
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nEven Element Frequency: %d", evenFreq);
    printf("\nOdd  Element Frequency: %d", n - evenFreq);

    return 0;
}