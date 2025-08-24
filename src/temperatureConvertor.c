#include <stdio.h>

int main()
{
    float temperature;
    int convertToCelsius;

    printf("=== [INPUT] ===");
    printf("\nEnter the temperature : ");
    scanf("%f", &temperature);

    printf("Enter 0 to convert to Fahrenheit and 1 to convert to Celsius : ");
    scanf("%d", &convertToCelsius);

    printf("\n=== [OUTPUT] ===");
    switch (convertToCelsius)
    {
        case 0:
            printf("\nTemperature in Fahrenheit : %.2f", temperature * 9/5 + 32);
            break;
        
        case 1:
            printf("\nTemperature in Celsius : %.2f", (temperature - 32) * 5/9);
            break;
        
        default:
            printf("\n%d not a valid option! Can't convert", convertToCelsius);
            break;
    }

    return 0;
}