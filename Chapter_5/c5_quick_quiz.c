// C5. Display three greetings of a day
#include<stdio.h>

void goodMorning(), goodAfternoon(), goodNight(); // Function Prototype

int main()
{
    goodMorning(), goodAfternoon(), goodNight(); // Function Call
    return 0;
}

// Function Description

void goodMorning()
{
    printf("Good Morning!\n");
}

void goodAfternoon()
{
    printf("Good Afternoon!\n");
}

void goodNight()
{
    printf("Good Night!\n");
}