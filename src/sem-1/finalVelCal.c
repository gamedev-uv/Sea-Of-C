#include <stdio.h>
#include <math.h>

int main()
{ 
    float initialVelocity, acceleration, distanceTraveled;
    float finalVelocity;

    printf("=== [INPUT] ===");
    printf("\nEnter the initial velocity (u) : ");
    scanf("%f", &initialVelocity);

    printf("Enter the acceleration (f) : ");
    scanf("%f", &acceleration);

    printf("Enter the distance traveled (t) : ");
    scanf("%f", &distanceTraveled);

    finalVelocity = sqrt(pow(initialVelocity, 2) + 2 * acceleration * distanceTraveled);
    printf("\n=== [OUTPUT] ===");
    printf("\nFinal Velocity : %.2f m/s", finalVelocity);

    return 0;
}