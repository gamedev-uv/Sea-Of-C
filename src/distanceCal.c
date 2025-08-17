#include <stdio.h>

int main()
{ 
    float initialVelocity, acceleration, time;
    float distanceTraveled;

    printf("=== [INPUT] ===");
    printf("\nEnter the initial velocity (u) : ");
    scanf("%f", &initialVelocity);

    printf("Enter the acceleration (f) : ");
    scanf("%f", &acceleration);

    printf("Enter the time (t) : ");
    scanf("%f", &time);

    distanceTraveled = (initialVelocity * time) + (0.5f * acceleration * time * time);
    printf("\n=== [OUTPUT] ===");
    printf("\nDistance Traveled : %.2f m", distanceTraveled);

    return 0;
}