// C7. Input and display marks of 5 students
#include<stdio.h>

int main()
{
    int i, marks[5];

    // Input:
    puts("");
    for (i = 0; i < 5; i++)
    {
        printf("Enter Student %d | marks: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    // Display:
    puts("");
    for (i = 0; i < 5; i++)
        printf("Student %d | marks: %d\n", i + 1, marks[i]);
    
    return 0;
}