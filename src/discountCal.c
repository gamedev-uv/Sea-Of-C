#include <stdio.h>

int main()
{
	float tot, rate;
	int qty, dis = 0;
	
	printf("=== [INPUT] ===");
	printf("\nEnter the quantity : ");
	scanf("%d", &qty);
	
	printf("Enter the rate : ");
	scanf("%f", &rate);
	
	if(qty > 1000) dis = 10; //Discount is set to be 10
		  
	tot = qty * rate; 			   //Original price is simply the amount of items * the amount of items
	tot = tot - (tot * dis / 100); //Total = Original Price - (Original Price * Discount)

	printf("\n=== [OUTPUT] ===");
	printf("\nTotal Amount is : %.4f", tot);

	return 0;
}