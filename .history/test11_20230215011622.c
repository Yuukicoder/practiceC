#include <stdio.h>

int is_valid_date(int day, int month, int year)
{
    // Check if the year is valid
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
    int day, month, year;
    printf("Enter a date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    if (is_valid_date(day, month, year))
    {
        printf("The date is valid.\n");
    }
    else
    {
        printf("The date is invalid.\n");
    }
    return 0;
}