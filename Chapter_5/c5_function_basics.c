// C5. Basic structure of a function
#include <stdio.h>

void display(); // Function Prototype

int main()
{
    printf("Initializing display function\n");

    display(); // Function Call

    printf("Display function finished its work\n");

    return 0;
}

// Function Description
void display()
{
    printf("This is display!\n");
}
