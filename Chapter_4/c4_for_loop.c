// C4. Print first n natural numbers using for loop
#include <stdio.h>

int main()
{
    // Iterator and store number via user input
    int i, n;
    
    printf("\nEnter any natural number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        for(i = 1; i <= n; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("Please enter a natural number!\n");
    }
    return 0;
}