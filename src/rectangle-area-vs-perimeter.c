#include <stdio.h>

int main()
{
    float width, breadth;
    float area, perimeter;

    printf("=== [INPUT] ===");
    printf("\nEnter the dimensions of the rectangle...");

    printf("\nEnter the width : ");
    scanf("%f", &width);
    
    printf("Enter the breadth : ");
    scanf("%f", &breadth);

    perimeter = 2 * (width + breadth);
    area = width * breadth;

    printf("\n=== [OUTPUT] ===");

    printf("\nPerimeter : %.2f", perimeter);
    printf("\nArea : %.2f", area);

    if(area > perimeter)
        printf("\nArea is greater than the perimeter");
    else
        printf("\nPerimeter is greater than the area");

    return 0;
}