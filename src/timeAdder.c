#include <stdio.h>

int main()
{
    int hour1, hour2, hour3;
    int minute1, minute2, minute3;
    int second1, second2, second3;

    printf("=== [INPUT] ===");
    printf("\nEnter T1 : ");
    printf("\nHour : ");
    scanf("%d", &hour1);

    printf("Minute : ");
    scanf("%d", &minute1);

    printf("Second : ");
    scanf("%d", &second1);

    printf("\nEnter T2 : ");
    printf("\nHour : ");
    scanf("%d", &hour2);

    printf("Minute : ");
    scanf("%d", &minute2);

    printf("Second : ");
    scanf("%d", &second2);

    second3 = second1 + second2;
    minute3 = minute1 + minute2 + (second3 / 60); //T1_M + T2_M + (Extra seconds)
    second3 %= 60;

    hour3 = hour1 + hour2 + (minute3 / 60);       //T1_H + T2_H + (Extra minutes)
    minute3 %= 60;

    printf("\n=== [OUTPUT] ===");
    printf("\nT3 = %d hour(s) %d minute(s) %d second(s)", hour3, minute3, second3);

    return 0;
}