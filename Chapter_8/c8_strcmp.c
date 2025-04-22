// C8. Compare two Strings
#include<stdio.h>
#include<string.h>

int main()
{
    // Initialize: Three Strings
    char s1[10] = "Hello";
    char *s2 = "Hello";
    char *s3 = "Hi";

    // Compares ASCII values of characters in two strings. Returns 0 if equal, >0 if first string is greater, <0 if second string is greater (based on the first character mismatch).
    int val = strcmp(s1, s2);
    
    printf("\nstrcmp(s1, s2): %d\n", val);
    printf("\nstrcmp(s2, s3): %d\n", strcmp(s2, s3));
    printf("\nstrcmp(s3, s2): %d\n", strcmp(s3, s2));
    return 0;
}