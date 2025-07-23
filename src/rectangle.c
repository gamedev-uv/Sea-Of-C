#include <stdio.h>

int main()
{
    float length, breadth;
    float perimeter, area;
    
    printf("=== [INPUT] ===");
    printf("\nEnter the length of the rectangle : ");
    scanf("%f", &length);

    printf("Enter the breath of the rectangle : ");
    scanf("%f", &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("\n=== [OUTPUT] ===");
    printf("\nPerimeter of the rectangle (2 * (L + B)) : %f", perimeter);
    printf("\nPerimeter of the rectangle (L * B) : %f", area);

    return 0;
}