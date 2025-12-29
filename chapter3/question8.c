#include <stdio.h>
int main()
{
    int lyear, rest, totaldays, day;
     int Y = 2020, B = 1900;

    Y= (Y - 1) - B;

   
    lyear = Y / 4;
    rest = Y - lyear;
    totaldays = (rest * 365) + (lyear * 366) + 1;

    day = (totaldays % 7);

    if (day == 0)
        printf("Monday");

    else if (day == 1)
        printf("Tuesday");

    else if (day == 2)
        printf("Wednesday");

    else if (day == 3)
        printf("Thursday");

    else if (day == 4)
        printf("Friday");

    else if (day == 5)
        printf("Saturday");

    else if (day == 6)
        printf("Sunday");

    else
        printf("INPUT YEAR IS WRONG!");
    return 0;
}