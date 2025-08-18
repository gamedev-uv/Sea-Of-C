#include <stdio.h>

int main()
{
    int inputSeconds;
    int hours, minutes, seconds;

    printf("=== [INPUT] ===");
    printf("\nEnter the number of seconds : ");
    scanf("%d", &inputSeconds);

    hours = inputSeconds / 3600;
    minutes = (inputSeconds % 3600) / 60;
    seconds = (inputSeconds % 3600) % 60;

    printf("\n=== [OUTPUT] ===");
    printf("\n%d seconds = %d hours(s) %d minutes(s) and %d seconds(s)", inputSeconds, hours, minutes, seconds);

    return 0;
}