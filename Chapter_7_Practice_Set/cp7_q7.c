// CP7. A 3 x 10 array containing multiplication tables of 2, 7 and 9.

#include <stdio.h>

// Function Prototype
void printTable(int *mulTable, int base);

int main()
{
    int mulTable[3][10]; // initialize arr

    // Function Calls
    printTable(mulTable[0], 2);
    printTable(mulTable[1], 7);
    printTable(mulTable[2], 9);
    return 0;
}

// Function Definition
void printTable(int *mulTable, int base)
{
    printf("\n*********************************"
           "\nTable of %d:\n", base);
    for (int j = 0; j < 10; j++)
    {
        mulTable[j] = base * (j + 1); // store tables

        printf("%d x %d = %d\n", base, j + 1, mulTable[j]); // O/p
    }
}