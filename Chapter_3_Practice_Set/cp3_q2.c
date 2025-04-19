// CP3. Program against Question 2
#include <stdio.h>

int main()
{
    int m1, m2, m3; // marks of three subjects
    float avg;      // average of three subjects
    printf("\nEnter marks of three subjects one by one\n");
    scanf("%d%d%d", &m1, &m2, &m3);
    avg = (m1 + m2 + m3) / 3.0;

    if ((avg >= 40) && (m1 >= 33 && m2 >= 33 && m3 >= 33))
    {
        printf("Congrats, the student has passed with %.2f%%\n", avg); // %% output-> %
    }
    else
    {
        printf("The student has failed with %.2f%%\n", avg);
    }

    return 0;
}