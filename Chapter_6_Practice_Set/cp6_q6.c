// CP6. Change a variable value to ten times its current value without using call/pass by value.
#include<stdio.h>

// Function Prototype
int change(int var);

int main()
{
    int variable;

    printf("\nEnter any number of your choice: ");
    scanf("%d", &variable);

    printf("%d x 10 = %d\n", variable, change(variable)); // Function Call
    return 0;
}

// Function Description

int change(int var)
{
   return var * 10; 
}