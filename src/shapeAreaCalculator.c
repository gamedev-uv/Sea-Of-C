#include <stdio.h>

int main()
{
    int choosenShape;

    printf("=== [INPUT] ===");
    printf("\nChoose the shape for which you want to calculate the area : ");
    printf("\n- 0 <=> Square");
    printf("\n- 1 <=> Circle");
    printf("\n- 2 <=> Triangle");
    printf("\nSelect Shape : ");
    scanf("%d", &choosenShape);


    printf("\n=== [OUTPUT] ===");
    switch (choosenShape)
    {
        case 0:
            float side;

            printf("\nSquare has been selected");
            printf("\nEnter the side length of the square : ");
            scanf("%f", &side);

            printf("\nArea of the square = %.2f units", side * side);
            break;
        
        case 1:
            float radius;

            printf("\nCircle has been selected");
            printf("\nEnter the radius of the circle : ");
            scanf("%f", &radius);
            printf("\nArea of the circle = %.2f units", 3.14f * radius * radius);
            break;
    
         case 2:
            float base, height;

            printf("\nTriangle has been selected");
            printf("\nEnter the base of the triangle : ");
            scanf("%f", &base);

            printf("Enter the height of the triangle : ");
            scanf("%f", &height);

            printf("\nArea of the triangle = %.2f units", 0.5f * base * height);
            break;

        default:
            printf("\nThe shape for option %d is not supported", choosenShape);
            break;
    }

    return 0;
}