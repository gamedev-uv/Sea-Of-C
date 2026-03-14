// Write a C program to read numbers from a file and write even, odd, prime numbers to other files.

#include <math.h>
#include <stdio.h>

int isPrime(int n)
{
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return 0;

    return 1;
}

void main()
{
    char baseDirectory[] = "testFile/Q21/";
    char inputFileName[] = "testFiles/Q21/numberInput.txt";

    FILE* inputFile = fopen(inputFileName, "r");
    if(inputFile == NULL)
    {
        printf("Input file wasn't found at \"%s\" can't parse", inputFileName);
        return;
    }

    printf("Input was found\nReading and parsing...");
    char oddFileName[] = "testFiles/Q21/oddNumbers.txt";
    char evenFileName[] = "testFiles/Q21/evenNumbers.txt";
    char primeFileName[] = "testFiles/Q21/primeNumbers.txt";

    FILE* oddFile = fopen(oddFileName, "w");
    FILE* evenFile = fopen(evenFileName, "w");
    FILE* primeFile = fopen(primeFileName, "w");

    int number;
    while(fscanf(inputFile, "%d", &number) == 1)
    {
        if(number % 2 == 0) 
            fprintf(evenFile, "%d\n", number);
        else 
            fprintf(oddFile, "%d\n", number);

        if(isPrime(number)) 
            fprintf(primeFile, "%d\n", number);
    }

    fclose(inputFile);
    fclose(oddFile);
    fclose(evenFile);
    fclose(primeFile);
    printf("\nWrote odd, even and prime numbers to files");
}