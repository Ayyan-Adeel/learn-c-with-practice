// CP5. Calculate the nth element of Fibonacci series [Recursion]
#include <stdio.h>

// Function Prototype
int calculate(int n);

int main()
{
    int n; // nth element
    printf("\nEnter the nth element: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Please enter a non-zero value!\n");

    printf("Element number %d of Fibonacci series is ");
    if (n > 2)
    {
        printf("%d\n", n, calculate(n - 1));
    }
    else if (n > 0)
    {
        printf("%d\n", n, n - 1);
    }
    else
    {
        printf("%d\n", n, (-1) * calculate((n + 1) * (-1)));
    }
    return 0;
}

// Function Description
int calculate(int n)
{
    if (n < 2) return n;

    return calculate(n - 1) + calculate(n - 2);
}