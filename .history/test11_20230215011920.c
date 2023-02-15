// Check day valid
// Leap year: y % 400 == 0 or ( y % 4 == 0 and y % 100 !=0 )
#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int d, m, y;
int validDate(int d, int m, int y)
{
    int maxd = 31;
    if (d < 1 || d > 31 || m < 1 || m > 12)
        return 0;
    if (m == 4 || m == 6 || m == 9 || m == 11)
        maxd = 30;
    else if (m == 2)
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            maxd = 29;
        else
            maxd = 28;
    }
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