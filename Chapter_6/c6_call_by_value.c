// C6. Call by value function
#include<stdio.h>

// Function Prototype
int sum (int a, int b);

int main()
{
    int a = 4, b = 7;

    printf("\nThe value of a and b is %d and %d\n", a, b);
    printf("The value of %d + %d is %d\n", a, b, sum (a, b)); // Function Call
    printf("The value of a and b after function call is %d and %d\n", a, b);

    return 0;
}

// Function Description

// Call by value
int sum (int a, int b)
{
    int c = a + b;

    // The values of a and b will not change unless pointers are used
    a = 56465;
    b = 6546;

    return c;
}