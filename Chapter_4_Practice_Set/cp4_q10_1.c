// CP4. Check if a number is prime
#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;      // stores number, iterator
    int isPrime = 1; // if number is prime or not (1 for true, 0 for false)

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        int sqrtNum = (int)sqrt(num); // Cast sqrt(num) to int
        for (i = 2; i <= sqrtNum; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is", num);
    else
        printf("%d is not", num);
    printf(" a prime number.\n");

    return 0;
}