#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    float perimeter, area;

    printf("=== [INPUT] ===");
    printf("\nEnter the radius of the circle : ");
    scanf("%f", &radius);

    perimeter = 2 * 3.14f * radius;
    area = 3.14f * pow(radius, 2);

    printf("\n=== [OUTPUT] ===");
    printf("\nPerimeter of the circle [2*PI*R] : %f", perimeter);
    printf("\nArea of the circle [PI*R*R] : %f", area);

    return 0;
}