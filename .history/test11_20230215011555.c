// Leap year: y % 400 == 0 or ( y % 4 == 0 and y % 100 !=0 )
#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int d, m, y;
int validDate(int day, int month, int year)
{
    if (year < 0 || year > 2023)
    {
        return 0;
    }

    // Check if the month is valid
    if (month < 1 || month > 12)
    {
        return 0;
    }

    // Check if the day is valid
    if (day < 1)
    {
        return 0;
    }
    else if (month == 2)
    {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            if (day > 29)
            {
                return 0;
            }
        }
        else
        {
            if (day > 28)
            {
                return 0;
            }
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
        {
            return 0;
        }
    }
    else
    {
        if (day > 31)
        {
            return 0;
        }
    }

    // If we made it this far, the date is valid
    return 1;
}

int main()
{
    scanf("%d,%d,%d", &d, &m, &y);
    if (validDate(d, m, y))
        printf("valid date");
    else
        printf("invalid Date");
}