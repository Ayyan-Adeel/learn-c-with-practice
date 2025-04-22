// C8. Initialize a string
#include<stdio.h>

int main()
{
    // Initialize: String manually
    char str[] = {'Y', 'o', 'u', 'r', '\0'}; // '\0' is null
    
    // Initialize: String conveniently
    char str2[] = "Name"; // NOTE: DOUBLE QUOTES ARE MUST!!!

    printf("\nFirst name: %s\n", str);
    printf("Last name: %s\n", str2);
    return 0;
}
