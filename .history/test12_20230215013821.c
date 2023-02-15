#include <stdio.h>

// Remove unnecessary macros
// #define fo(i, a, b) for (int i = a; i <= b; i++)
// #define fod(i, a, b) for (int i = b; i >= a; i--)

int n;

// Change return type to unsigned long long to prevent overflow
unsigned long long fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }

    unsigned long long t1 = 1, t2 = 1, f = 0;

    // Use a for loop instead of a macro
    for (int i = 3; i <= n; i++)
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return f;
}

int main()
{
    do
    {
        scanf("%d", &n);
    } while (n < 1);

    // Change format specifier to %llu to match return type
    printf("%llu\n", fibo(n));
    return 0;
}