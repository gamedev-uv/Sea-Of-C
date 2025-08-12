#include <stdio.h>

int main()
{
	float bs, hra, gs, da;
	
	printf("=== [INPUT] ===");
	printf("\nEnter the base salary : ");
	scanf("%f", &bs);

	if(bs < 1500)
	{
		hra = bs * 0.1f;
		da = bs * 0.9f;
	}
	else
	{
	    hra = 500;
		da = bs * 0.98f;
	}
	
	gs = bs + hra + da;
	printf("\n=== [OUTPUT] ===");
	printf("\nGross Salary : %.3f", gs);
	
	return 0;
}