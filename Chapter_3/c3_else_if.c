// C3. Check if the entered number is 1, 2 or 3 by using if and else if clause/ladder.
#include <stdio.h>

int main()
{
    int number;
    printf("\nEnter any number: ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("Your number is 1\n");
    }
    else if (number == 2)
    {
        printf("Your number is 2\n");
    }
    else if (number == 3)
    {
        printf("Your number is 3\n");
    }
    else // Else is optional if required!
    {
        printf("It's not 1, 2 or 3\n");
    }

    return 0;
}