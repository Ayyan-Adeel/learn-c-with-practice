// C8. Print a string conveniently!
#include<stdio.h>

int main()
{
    char ptr[] = "Aloo Bhujia!";
    char *ptr1 = "Bhel Puri!";
    
    //  %s works for pointers too
    printf("%s\n%s\n", ptr, ptr1);
    return 0;
}