// C5. Calculate sum of two numbers using fuction
#include<stdio.h>

// Function Prototype
// Function sum has int a and int b as function parameters and has return type of int.
int sum (int a, int b);

int main()
{
    // This var c has no relation with the var c in sum function
    int c = sum (10, 9); // Function Call; In sum (10, 9), 10 and 9 are arguments;
    printf("The value of c is %d\n", c);
    return 0;
}

// Function Description

// Sum is a function which takes a and b as input
int sum (int a, int b)
{
    int c;
    c = a + b;
    return c; // and returns an integer output
}