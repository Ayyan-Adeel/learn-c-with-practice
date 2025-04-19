// CP3. Determine whether a character entered by the user is lowercase or not
#include <stdio.h>

int main()
{
    char ch; // Stores initialized character

    printf("\nEnter a ch: ");
    scanf(" %c", &ch);

    // a-z = 97-122 [ASCII values]
    if (ch >= 97 && ch <= 122) // if (ch >= 'a' && ch <= 'z') also works
    {
        printf("%c is a lowercase letter.\n", ch);
    }

    // A-Z = 65-90 [ASCII values]
    else if (ch >= 65 && ch <= 90) // else if (ch >= 'A' && ch <= 'Z') also works
    {
        printf("%c is an uppercase letter.\n", ch);
    }
    else
    {
        printf("Please enter a valid character!\n");
    }
    return 0;
}