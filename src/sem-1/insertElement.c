#include <stdio.h>

int main()
{
    int n;
    printf("=== [INPUT] ===");
    printf("\nEnter the length of the array(n): ");
    scanf("%d", &n);

    int a[n];
    printf("\n--- Enter the elements of the array ---\n");
    for(int i = 0; i < n; i++)
    {
        printf("-Enter element at (%d): ", i);
        scanf("%d", &a[i]);
    }

    int x, p;
    printf("\nEnter the value which is to be inserted(x): ");
    scanf("%d", &x);

    printf("Enter the position(p): ");
    scanf("%d", &p);

    //Ensure p is between first and last position
    if(p < 1)     p = 1;
    if(p > n + 1) p = n + 1; 

    //As an element is being inserted 
    //The size of the new array is one bigger than the initial array
    int b[n + 1];
    for(int i = 0; i < n + 1; i++)
    {
        if(i < p - 1) 
            b[i] = a[i];
        else if(i == p - 1)
            b[i] = x;
        else                    //if(i > p - 1)
            b[i] = a[i - 1];
    }

    printf("\n=== [OUTPUT] ===");
    printf("\nFinal Array: [");
    for(int i = 0; i < n + 1; i++)
    {
        printf("%d", b[i]);
        if(i != n) printf(", ");
    }

    printf("]");
    return 0;
}