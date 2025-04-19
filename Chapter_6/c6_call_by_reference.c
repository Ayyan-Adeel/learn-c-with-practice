// C6. Call by reference function
#include<stdio.h>

// Function Prototype
void wrongSwap (int a, int b), swap (int *a, int *b);

int main()
{
    int x, y; // Two numbers: x and y;
    printf("\nEnter two numbers one by one\n");
    scanf("%d%d", &x, &y);

    printf("\nThe values of x and y before wrongSwap are %d and %d\n", x, y);
    wrongSwap (x, y); // Values will not change
    printf("The values of x and y after wrongSwap are %d and %d\n", x, y);

    printf("\nThe values of x and y before swap are %d and %d\n", x, y);
    swap (&x, &y); // Values will change
    printf("The values of x and y after swap are %d and %d\n", x, y);
    
    return 0;
}

// Function Description

// call by value function
void wrongSwap (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// call by reference function
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}