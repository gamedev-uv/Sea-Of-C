#include <stdio.h>

int main()
{
    float angleA, angleB, angleC;

    printf("=== [INPUT] ===");
    printf("\nEnter the angles...");

    printf("\nAngle A : ");
    scanf("%f", &angleA);

    printf("Angle B : ");
    scanf("%f", &angleB);

    printf("Angle C : ");
    scanf("%f", &angleC);


    printf("\n=== [OUTPUT] ===");
    if((angleA + angleB + angleC) == 180)
        printf("\nA valid triangle can be formed using the angles");
    else
        printf("\nA valid triangle can't be formed using the angles");

    return 0;
}