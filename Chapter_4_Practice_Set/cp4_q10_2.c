// CP4. Check if a number is prime
#include <stdio.h>
#include <math.h>

int main() {
    int num, isPrime = 1; // stores number, if number is prime or not (1 for true, 0 for false)

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num == 1) {
        printf("1 is not a prime number.\n");
        return 0; // int main() will stop executing after return statement
    }

    else if (num == 2) {
        printf("2 is a prime number.\n");
        return 0;
    }

    // Check for even number
    else if (num % 2 == 0) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    int limit = (int)sqrt(num); // Cast sqrt(num) to int

    // Prime no. check with odd nos.
    for (int i = 3; i <= limit; i += 2) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    (isPrime) ? printf("%d is", num) : printf("%d is not", num);
    printf(" a prime number.\n");
    
    return 0;
}