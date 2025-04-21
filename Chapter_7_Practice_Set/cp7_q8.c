// CP7. Q7 with custom input by the user

#include <stdio.h>

// Function Prototype
void printTable(int *table, size_t base, size_t count);

int main()
{
    // Initialize: iterator, base and arr
    size_t i, base;
    printf("\nHow many tables you want to print?: ");
    scanf("%zu", &base);
    int table[base][10];                                    // -> j size = 10

    // User I/p
    puts("\nEnter the numbers whose table you want to print");
    for (i = 0; i < base; i++)
    {
        printf("Enter number |%d|: ", i + 1);
        scanf("%d", &table[i][0]);
    }

  /*size_t*/base = sizeof(table) / sizeof(table[0]);       // arr[i] size
    size_t count = sizeof(table[0]) / sizeof(table[0][0]); // arr[i][j] -> j size (10 here)

    // Function Calls
    for (i = 0; i < base; i++)
    {
        printTable(table[i], table[i][0], count);
    }
    return 0;
}

// Function Description
void printTable(int *table, size_t base, size_t count)
{
    printf("\n*********************************"
           "\nTable of %d:\n", base);
    for (size_t j = 0; j < count; j++)
    {
        table[j] = base * (j + 1); // store tables

        printf("%d x %d = %d\n", base, j + 1, table[j]); // O/p
    }
}