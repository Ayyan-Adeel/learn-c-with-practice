// CP5. Function to print the following pattern
// *
// * * *
// * * * * *
#include <stdio.h>

int main()
{
    // number of rows, row iterator and column iterator
    int n, i, j;

    printf("\nEnter the number of rows: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("\nRequired Pattern\n");

        for (i = 1; i <= n; i++) // Row
        {
            // Odd number formula
            for (j = 1; j <= (2 * i - 1); j++) // Column
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Please enter a positive non-zero integer value!");
    }
    return 0;
}