// C5. Calculate factorial
#include <stdio.h>

int factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 2)
        return 2;

    // Recursive case: factorial of n is n multiplied by factorial of (n-1)
    return n * factorial(n - 1); // function repeating itself
}

int main()
{
    int num;
    printf("\nEnter a non-negative integer: ");
    scanf("%d", &num);
    
    if(num > 1)
    {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    else if (num == 0 || num == 1)
    {
        printf("Factorial of %d is 1\n", num);
    }  
    else
    {
        printf("Please enter a non-negative integer!\n");
    }
    return 0;
}
