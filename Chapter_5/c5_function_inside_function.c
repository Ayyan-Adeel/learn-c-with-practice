// C5. Three functions to display three greetings of a day
#include<stdio.h>

void goodMorning(), goodAfternoon(), goodNight(); // Function Prototype

int main()
{
    goodMorning(); // Function Call
    return 0;
}

// Function Description

void goodMorning()
{
    printf("Good Morning!\n");
    goodAfternoon(); // Function Call
    goodNight(); // Function Call
}

void goodAfternoon()
{
    printf("Good Afternoon!\n");
}

void goodNight()
{
    printf("Good Night!\n");
}