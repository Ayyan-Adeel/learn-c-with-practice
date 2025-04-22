// CP8. Create a slice function from string.h to mimic its function.
#include <stdio.h>
#include <string.h>

// Function Prototype
void slice(char *st, size_t start, size_t end);

int main()
{
    // Initialize: String and slice start and end positions
    char st[100];
    size_t start, end;

    // I/ps:
    printf("\nEnter a string: ");
    scanf("%[^\n]", st);

    printf("\nEnter slice start: ");
    scanf("%zu", &start);
    printf("\nEnter slice end: ");
    scanf("%zu", &end);

    if (start > end || end > strlen(st))
    {
        puts("Invalid range.");
        return;
    }
    slice(st, start, end); // Function Call

    // O/p
    printf("\nSliced string: %s\n", st);
    return 0;
}

// Function Definition
void slice(char *st, size_t start, size_t end)
{
    size_t i = 0, count = end - start;
    for (; i < count; i++)
    {
        st[i] = st[i + start];
    }
    st[i] = '\0';
}