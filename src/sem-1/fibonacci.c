#include <stdio.h>

int main()
{
    int n;
    printf("=== [INPUT] ===");
    printf("\nEnter n : ");
    scanf("%d", &n);

    //If n is -ve or zero
    if(n <= 0)
    {
        printf("Invalid number of elements!");
        return 0;
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nSequence : ");

    //Print 0 and 1
    if(n >= 1)
        printf("0");

    if(n >=2)
        printf(" 1");

    //Print remaining n - 2 elements
    n -= 2;
    int t1 = 0, t2 = 1;
    while(n > 0)
    {
        int t3 = t1 + t2;
        printf(" %d", t3);

        t1 = t2;
        t2 = t3;

        n--;
    }

    return 0;
}