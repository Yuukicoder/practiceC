#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
void printMinMaxDigits(int n)
{
    int digit, reminder;
    int min = 9, max = 0;
    while (n > 0)
    {
        digit = n % 10;
        if (digit < min)
        {
            min = digit;
        }
        if (digit > max)
        {
            max = digit;
        }
        n /= 10;
    }
    printf("Minimum digit: %d\nMaximum digit: %d\n", min, max); // Print the results
}

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    } while (n < 0);
    printMinMaxDigits(n);
    return 0;
}