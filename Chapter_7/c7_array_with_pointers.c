// C7. Access an array by pointers
#include <stdio.h>

int main()
{
    // Initialize: marks to store marks, ptr as pointer
    int marks[4], *ptr = &marks[0]; // int *ptr = marks; works too. Why? Read: c7_arr_notes.md

    // Input
    for (int i = 0; i < 4; i++)
    {
        printf("Enter Student %d | marks: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    // Output
    puts("");
    for (int i = 0; i < 4; i++)
    {
        printf("Student %d | marks: %d\n", i + 1, marks[i]);
    }
    return 0;
}