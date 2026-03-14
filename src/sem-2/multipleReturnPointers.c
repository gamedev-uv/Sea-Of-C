//Write a C program to return multiple values from function using pointers.
#include <stdio.h>

/// Returns:
/// 0  if equal
/// +1 if a is greater
/// -1 if b is greater
/// Also updates the value in the min and max pointers
int compare(int a, int b, int *min, int *max)
{
    if(a == b) return 0;

    if(a > b)
    {
        *max = a;
        *min = b;
        return 1;
    }

    *max = b;
    *min = a;
    return -1;
}

int main()
{
    int a, b;
    int min, max;

    printf("=== [INPUT] ===");
    printf("\nEnter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("\n=== [OUTPUT] ===");
    int comparision = compare(a, b, &min, &max);
    if(comparision == 0)
        printf("\nBoth numbers are the same");
    else
        printf("\nMin: %d, Max: %d", min, max);

    return 0; 
}