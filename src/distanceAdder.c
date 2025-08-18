#include <stdio.h>

int main()
{
    int feet1, feet2, feet3;
    int inch1, inch2, inch3;

    printf("=== [INPUT] ===");
    printf("\nEnter D1 : ");
    printf("\nFeet : ");
    scanf("%d", &feet1);

    printf("Inch : ");
    scanf("%d", &inch1);

    printf("\nEnter D2 : ");
    printf("\nFeet : ");
    scanf("%d", &feet2);

    printf("Inch : ");
    scanf("%d", &inch2);

    inch3 = inch1 + inch2;
    feet3 = feet1 + feet2 + (inch3 / 12); 
    inch3 %= 12;

    printf("\n=== [OUTPUT] ===");
    printf("\nD3 = %d feet %d inch(es)", feet3, inch3);

    return 0;
}