// CP6. Use a function to calculate the sum and average of two numbers. Use pointers and print the values of sum and average in main()
#include<stdio.h>

// Function Prototype
void sumAverage(int a, int b, int *sum, float *average);

int main()
{
    int num1, num2, sum;
    float average;

    printf("\nEnter any two numbers of your choice one by one\n");
    scanf("%d%d", &num1, &num2);

    sumAverage(num1, num2, &sum, &average); // Function Call

    printf("\nSum of %d and %d is %d\n"
            "Average of %d and %d is %.2f\n",
            num1, num2, sum,
            num1, num2, average);

    return 0;
}

// A GOOD INTERVIEW QUESTION: Can void function return values?
// void function can indirectly return values by using pointers but can't return values by return statements;

// Function Description
void sumAverage(int a, int b, int *sum, float *average)
{
    *sum = a + b;
    *average = (float)*sum / 2;
}