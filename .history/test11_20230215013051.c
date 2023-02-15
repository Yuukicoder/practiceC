// Check day valid
// Leap year: y % 400 == 0 or ( y % 4 == 0 and y % 100 !=0 )
#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int d, m, y;
int validDate(int d, int m, int y)
{
    // Check valid year
    if (y < 0 || y > 2023)
    {
        return 0;
    }

    // Check valid month
    if (m < 1 || m > 12)
    {
        return 0;
    }

    // Check valid day
    if (d < 1)
    {
        return 0;
    }
    else if (m == 2)
    {
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
        {
            if (d > 29)
            {
                return 0;
            }
        }
        else
        {
            if (d > 28)
            {
                return 0;
            }
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d > 30)
        {
            return 0;
        }
    }
    else
    {
        if (d > 31)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    scanf("%d %d %d", &d, &m, &y);
    // if (validDate(d, m, y))
    //     printf("valid date\n");
    // else
    //     printf("invalid date\n");
    validDate(d, m, y) ? printf("valid date") : print("invalid date");
    return 0;
}