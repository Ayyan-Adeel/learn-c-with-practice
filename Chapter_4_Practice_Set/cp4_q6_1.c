// CP4. Calculate sum of first n natural numbers using for loop
#include <stdio.h>

int main()
{
    // iterator, number, sum
    int i, n, sum = 0;
    
    printf("\nEnter any natural number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        for(i = 1; i <= n; i++)
        {
            sum += i;
        }
        printf("Sum of first %d natural numbers is %d\n", n, sum);
    }
    else
    {
        printf("Please enter a natural number!\n");
    }
    return 0;
}