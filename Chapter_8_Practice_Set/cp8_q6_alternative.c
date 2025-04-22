// CP8. Encrypt a string by adding 1 to the ASCII value of its characters
#include<stdio.h>
#include<string.h>

int main()
{
    // Initialize: String
    char st[100];

    // I/p
    printf("\nEnter a string: ");
    scanf("%[^\n]", st);
    printf("\nOriginal string: %s\n", st);

    int len = strlen(st); // Stores string length

    // Encrypting string by +1
    for (int i = 0; i < len; i++)
    {
        st[i] = (char)(((int)st[i]) + 1);
    }
    printf("\nEncrypted string: %s\n", st);
    return 0;
}