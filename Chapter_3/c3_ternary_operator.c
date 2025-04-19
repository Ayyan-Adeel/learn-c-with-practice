// C3.
#include<stdio.h>

int main(){
    int num;
    
    printf("\nEnter any number: ");
    scanf("%d", &num);
    
    // Ternary operator example
    (num < 5) ? printf("\n%d is less than 5\n", num) : printf("\n%d isn't less than 5\n", num);

    return 0;
}