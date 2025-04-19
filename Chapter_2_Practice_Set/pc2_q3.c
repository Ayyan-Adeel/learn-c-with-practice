// CP2. Check whether a number is divisible by 97 or not
#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter any number: ");
    scanf("%d", &num);

    (num % 97 == 0) ? printf("\n%d is divisible by 97\n", num) : printf("\n%d is not divisible by 97\n", num);

    printf("\nDivisibility test returns: %d\n", num % 97); // 0 means yes
    return 0;
}