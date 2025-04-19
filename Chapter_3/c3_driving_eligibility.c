// C3. Check driving eligibility!
#include<stdio.h>

int main(){
    int age, vipPass = 0;

    printf("\nEnter your age: ");
    scanf("%d", &age);
    printf("Enter 1 if you have a VIP pass otherwise enter 0: ");
    scanf("%d", &vipPass);

    if((age <= 80 && age >= 18) || !(vipPass==0)) {
        printf("\nYou can drive\n");
    } else {
        printf("\nYou cannot drive\n");
    }

    return 0;
}