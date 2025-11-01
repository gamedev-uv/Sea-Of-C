#include <math.h>
#include <stdio.h>
#define PI 3.14

float circleArea(float radius)
{
    return PI * pow(radius, 2);
}

float circlePerimeter(float radius)
{
    return 2 * PI * radius;
}

float rectangleArea(float length, float breadth)
{
    return length * breadth;
}

float rectanglePerimeter(float length, float breadth)
{
    return 2 * (length + breadth);
}

float triangleArea(float base, float height)
{
    return 0.5f * base * height;
}

float trianglePerimeter(float base, float height)
{
    return 2 * sqrt(pow(base, 2) + pow(height, 2)) + base;
}

int main()
{
    int choosenShape;

    printf("=== [INPUT] ===");
    printf("\nChoose the shape: ");
    printf("\n- 0 <=> Circle");
    printf("\n- 1 <=> Rectangle");
    printf("\n- 2 <=> Triangle");
    printf("\nSelect Shape : ");
    scanf("%d", &choosenShape);


    printf("\n=== [OUTPUT] ===");
    switch (choosenShape)
    {
        case 0:
            float radius;

            printf("\nCircle has been selected");
            printf("\nEnter the radius of the circle: ");
            scanf("%f", &radius);

            printf("\nArea: %.2f, Perimeter: %.2f", 
                    circleArea(radius),
                    circlePerimeter(radius));
            break;
        
        case 1:
            float length, breadth;

            printf("\nRectangle has been selected");
            printf("\nEnter the length of the rectangle: ");
            scanf("%f", &length);

            printf("Enter the breadth of the rectangle : ");
            scanf("%f", &breadth);

            printf("\nArea: %.2f, Perimeter: %.2f", 
                    rectangleArea(length, breadth), 
                    rectanglePerimeter(length, breadth));
            break;
    
         case 2:
            float base, height;

            printf("\nTriangle has been selected");
            printf("\nEnter the base of the triangle: ");
            scanf("%f", &base);

            printf("Enter the height of the triangle: ");
            scanf("%f", &height);

            printf("\nArea: %.2f, Perimeter: %.2f", 
                    triangleArea(base, height), 
                    trianglePerimeter(base, height));
            break;

        default:
            printf("\nThe shape for option %d is not supported", choosenShape);
            break;
    }
}