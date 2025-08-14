#include <stdio.h>

int main()
{
    float operandA, operandB, outputValue;
    char operator;

    printf("=== [INPUT] ===");
    printf("\nEnter the operation...\n");
    scanf("%f %c %f", &operandA, &operator, &operandB);

    printf("\n=== [OUTPUT] ===");
    switch (operator)
    {
        case '+':
            outputValue = operandA + operandB;
            break;

        case '-':
            outputValue = operandA - operandB;
            break;
        
        case '*':
            outputValue = operandA * operandB;
            break;

        case '/':
            outputValue = operandA / operandB;
            break;

        case '%':
            outputValue = (int)operandA % (int)operandB;
            break;

        default:
            printf("\nInvalid operator '%c' selected! Not supported yet", operator);
            break;
    }

    printf("\n%.2f %c %.2f = %.2f", operandA, operator, operandB, outputValue);
    return 0;
}