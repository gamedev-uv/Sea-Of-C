//Write a C program to create, initialize and use pointers.
#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("=== [OUTPUT] ===");
    printf("\na  = %d", a); 
    printf("\n&a = %p", &a);

    printf("\n*p = %d", *p);
    printf("\np  = %p", p);

    return 0;
}