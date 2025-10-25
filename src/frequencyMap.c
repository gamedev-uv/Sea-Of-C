#include <stdio.h>

int main()
{
    int n;
    printf("=== [INPUT] ===");
    printf("\nEnter the length of the array(n): ");
    scanf("%d", &n);

    int a[n];
    printf("\n--- Enter the elements of the array ---\n");
    for(int i = 0; i < n; i++)
    {
        printf("-Enter element at (%d): ", i);
        scanf("%d", &a[i]);
    }

    int frequencies[n];
    for(int i = 0; i < n; i++)
    {
        int cElement = a[i];
        frequencies[i] = 1; 

        for(int j = 0; j < n; j++)
        {
            //Skip if i and j are same
            //As then a[i] will be equal to a[j]
            if(i == j) continue;

            if(cElement == a[j])
                frequencies[i]++;
        }
    }


    printf("\n=== [OUTPUT] ===");
    printf("\nElement\t| Frequency");
    for(int i = 0; i < n; i++)
        printf("\n-> %d\t: %d", a[i], frequencies[i]);

    return 0;
}