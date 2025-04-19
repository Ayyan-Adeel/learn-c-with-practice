// C4. Print n natural numbers in reverse order
#include <stdio.h>

int main()
{
    // Iterator and store number via user input
    int i, n;
    
    printf("\nEnter any natural number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        for(i = n; i ; i--) // true until i = 0
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