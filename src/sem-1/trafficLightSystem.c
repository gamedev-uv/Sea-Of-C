#include <stdio.h>

int main()
{
    int selectedLight;

    printf("=== [INPUT] ===");
    printf("\n--- Select the light ---");
    printf("\n- 0 => Red");
    printf("\n- 1 => Yellow");
    printf("\n- 2 => Green");
    printf("\nChoice : ");
    scanf("%d", &selectedLight);

    printf("\n=== [OUTPUT] ===");
    switch (selectedLight)
    {
        case 0:
            printf("\nTraffic Light was switched to Red -- Please STOP");
            break;
        
        case 1:
            printf("\nTraffic Light was switched to Yellow -- Please SLOW DOWN");
            break;

        case 2:
            printf("\nTraffic Light was switched to Green -- Go Go Go");
            break;
        
        default:
            break;
    }

    return 0;
}