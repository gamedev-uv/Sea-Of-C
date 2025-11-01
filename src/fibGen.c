#include <stdio.h>

void displayFibonacci(int n)
{
    if(n <= 0) return;
    if(n >= 1) printf("0 ");
    if(n >= 2) printf("1 ");
    n -= 2;
    
    int t1 = 0;
    int t2 = 1;
    while(n > 0)
    {
        int t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
        n--;
    }
}

int main()
{
    int n;

    printf("=== [INPUT] ===");
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    printf("\n=== [OUTPUT] ===\n");
    displayFibonacci(n);
}