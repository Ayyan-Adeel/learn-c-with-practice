// C4. Print first n positive numbers using do while loop
#include <stdio.h>

int main()
{
    // Iterator and store number via user input
    int i = 1, n;
    
    printf("\nEnter any  number: ");
    scanf("%d", &n);

    // auto-correct for negative numbers input
    if (n > 0)
    {
        n *= -1; // short hand operator, it means n * n = -1;
    }
    // exit control loop --> checks condition at last 
    // will execute at least once even when the condition is met, enter 0 to see.
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
    return 0;
}