#include <stdio.h>

int main()
{
    int age;

    printf("=== [OUTPUT] ===");
    printf("\nEnter the age : ");
    scanf("%d", &age);

    printf("\n=== [OUTPUT] ===");
    printf("\nCategory : ");
    if(age < 18)
        printf("Children");
    else if(age < 60)
        printf("Young");
    else
        printf("Old");

    return 0;
}