#include <stdio.h>

int main()
{
    float x1, x2, x3;
    float y1, y2, y3;

    printf("=== [INPUT] ===");
    printf("\nEnter the coordinates of the points...");

    printf("\nPoint A : ");
    scanf("%f %f", &x1, &y1);

    printf("Point B : ");
    scanf("%f %f", &x2, &y2);

    printf("Point C : ");
    scanf("%f %f", &x3, &y3);

    float s1 = (y2 - y1) / (x2 - x1);
    float s2 = (y3 - y2) / (x3 - x2);

    printf("\n=== [OUTPUT] ===");
    if(s1 == s2)
        printf("\nPoints are collinear");
    else
        printf("\nPoints are non collinear");

    return 1;
}