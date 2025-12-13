#include <stdio.h>

int main()
{
	float mA, mB, mC, mD, mE;
	float totalMarks, percentage;
	
	printf("=== [INPUT] ===");
	printf("\nEnter the marks obtained in the subjects...");
	
	printf("\nMarks in A : ");
	scanf("%f", &mA);
	
	printf("Marks in B : ");
	scanf("%f", &mB);
	
	printf("Marks in C : ");
	scanf("%f", &mC);
	
	printf("Marks in D : ");
	scanf("%f", &mD);
	
	printf("Marks in E : ");
	scanf("%f", &mE);
		
	totalMarks = mA + mB + mC + mD + mE;
	percentage = totalMarks / 5;
	
	printf("\n=== [OUTPUT] ===");
	printf("\nPercentage obtained : %.2f%%\n", percentage);
	if(percentage >= 60)
		printf("1st Division");
	else if(percentage >= 50)
		printf("2nd Division");
	else if(percentage >= 40)
		printf("3rd Division");
	else
		printf("You failed lol");
	
	return 0;
}