// C3. Even or odd number checker
#include<stdio.h>

int main(){
    int a, b;
    printf("\nEnter any number: ");
    scanf("%d", &a);
    
    if (a % 2 == 0) {
        printf("%d is even\n", a);
    } else {
        printf("%d is odd\n", a);
    }

    return 0; // returns 0 if main executed successfully
}
