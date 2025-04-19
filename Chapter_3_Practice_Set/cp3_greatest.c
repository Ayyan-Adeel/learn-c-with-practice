// CP3. Find greatest of four numbers entered by the user
#include <stdio.h>

int main()
{
    // Initialize four numbers
    int a, b, c, d;

    printf("\nEnter four numbers of your choice one by one\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int greatest = a; // stores greatest value

    if (b > greatest)
    {
        greatest = b;
    }
    if (c > greatest)
    {
        greatest = c;
    }
    if (d > greatest)
    {
        greatest = d;
    }

    printf("\n%d is the greatest!\n", greatest);
    return 0;
}