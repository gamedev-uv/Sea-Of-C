#include <stdio.h>

int main()
{
    float mass, acceleration;
    float force;

    printf("=== [INPUT] ===");
    printf("\nEnter the mass of the body : ");
    scanf("%f", &mass);

    printf("Enter the acceleration of the body : ");
    scanf("%f", &acceleration);

    force = mass * acceleration;

    printf("\n=== [OUTPUT] ===");
    printf("\nMass : %.2f kg(s)", mass);
    printf("\nAcceleration : %.2f m/s^2", acceleration);
    printf("\nForce : %.2f N", force);

    return 0;
}