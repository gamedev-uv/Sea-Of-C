#include <stdio.h>

int main()
{
	int a, b;
	
	printf("=== [INPUT] ===");
	printf("\nEnter the value of A : ");
	scanf("%d", &a);
	
	printf("Enter the value of B : ");
	scanf("%d", &b);

	printf("\n=== [OUTPUT] ===");
	printf("\nSum of %d and %d is %d", a, b, a + b);
	printf("\nDifference of %d and %d is %d", a, b, a - b);
	printf("\nProduct of %d and %d is %d", a, b, a * b);
	printf("\nQuotient of %d and %d is %f", a, b, (float)a / b);
	printf("\nRemainder of %d and %d is %d", a, b, a % b);
	
	return 0;
}