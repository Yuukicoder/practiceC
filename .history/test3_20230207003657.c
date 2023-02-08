#include <stdio.h>

int bnngay1thang(int a, int b)
{
    switch (a)
    {
    case (1):
    case (3):
    case (5):
    case (7):
    case (8):
    case (10):
    case (12):
        return 31;
    case (4):
    case (6):
    case (9):
    case (11):
        return 30;
    case (2):
        if ((b % 4 == 0 && b % 100 != 0) || b % 400 == 0)
        {
            return 29;
        }
        else
        {
            return 28;
        }
    default:
        return 0;
    }
}

int ngaytrongnam(int day, int month, int year)
{
    int sum = 0;
    int i;
    for (i = 1; i <= month - 1; i++)
    {
        sum += bnngay1thang(i, year);
    }
    sum += day;
    return sum;
}

int timngaytruoc(int day, int month, int year)
{
    if (day == bnngay1thang(month, year))
    {
        if (month == 12)
        {
            printf("The next day: 1 1 %d\n", (year + 1));
        }
        else
        {
            printf("The next day: 1 %d %d\n", (month + 1), year);
        }
    }
    else
    {
        printf("The next day: %d %d %d\n", (day + 1), month, year);
    }
}

int timngaysau(int day, int month, int year)
{
    if (day == 1)
    {
        if (month == 1)
        {
            printf("The last day: 31 12 %d", (year - 1));
        }
        else
        {
            int ngaytruoc = bnngay1thang(month - 1, year);
            printf("The last day: %d %d %d", ngaytruoc, (month - 1), year);
        }
    }
    else
    {
        printf("The last day: %d %d %d", (day - 1), month, year);
    }
}

int main()
{
    int day, month, year;
    printf("Enter ngay, thang, nam: ");
    scanf("%d %d %d", &day, &month, &year);

    if (day > bnngay1thang(month, year) && year > 12)
    {
        return 0;
    }
    else
    {
        int ngay = bnngay1thang(month, year);
        printf("%d: %d day\n", month, ngay);

        int ntn = ngaytrongnam(day, month, year);
        printf("%d\n", ntn);

        timngaytruoc(day, month, year);
        timngaysau(day, month, year);
    }
    return 0;
}