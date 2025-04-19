// CP4. Print multiplication table of a given number n in reverse order
#include<stdio.h>

int main(){
    // i for iteration; n for the number;
    int i, n;

    printf("\nEnter any number of your choice: ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d in reverse order is:\n", n);
    for (i = 10; i ; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}