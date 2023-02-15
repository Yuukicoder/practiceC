// write a C program that will accept a non-negative integer
//  then print out its minimum and maximum digits
#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int n;
void printMinMaxDigits(int n)
{
    int digit;
    int min, max;
    digit = n % 10;
    n /= 10;
    int reminder = n;
    min = max = reminder;
    while (n > 0)
    {
        digit = n % 10;
        n /= 10;
        if (min > reminder)
            min = reminder;
        if (max < reminder)
            max = reminder;
    }
    printf("%d,%d", min, max);
}
int main()
{
    do
    {
        scanf("%d", &n);
        printMinMaxDigits(n);
    } while (n < 0);
}