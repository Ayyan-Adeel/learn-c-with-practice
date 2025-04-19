// CP5. Find average of three numbers
#include<stdio.h>

// Function Prototype
float average (int a, int b, int c);

int main()
{
    int a, b, c; // initialize three numbers

    printf("\nEnter any three numbers of your choice one by one\n");
    scanf("%d%d%d", &a, &b, &c);

    printf("Average of %d, %d & %d is %.2f\n", a, b, c, average (a, b, c)); // Function Call

    return 0;
}

// Function Description
float average (int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
