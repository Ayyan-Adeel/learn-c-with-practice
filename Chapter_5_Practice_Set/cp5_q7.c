// CP5. Function to print the following pattern
// *
// * * *
// * * * * *
#include <stdio.h>

// Function Prototype
void pattern (int n, int column, int row);

int tag = 1; // Global variable declaration

int main()
{
    int n; // number of rows
    printf("\nEnter the number of rows: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("\nRequired Pattern\n");
        pattern (n, 1, 1); // Function Call
    }
    else
    {
        printf("Please enter a positive non-zero integer value!");
    }
    return 0;
}

// Function Description

// Don't do this use loops instead
void pattern(int n, int column, int row)
{
    if (tag > n)
        return;
    
    if (column <= row)
    {
        printf("* ");
        pattern(n, column + 1, row);
    }
    else
    {
        printf("\n");
        tag++;
        pattern(n, 1, row + 2);
    }
}