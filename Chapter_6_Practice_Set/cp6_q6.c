// CP6. Change a variable value to ten times its current value without using call/pass by value.
#include<stdio.h>

// Function Prototype
int change(int var);

int main()
{
    int var;

    printf("\nEnter a number of your choice: ");
    scanf("%d", &var);

    printf("%d x 10 = %d\n", var, change(var)); // Function Call
    return 0;
}

// Function Description

int change(int var)
{
   return var * 10; 
}