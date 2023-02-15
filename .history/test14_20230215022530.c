// write a C program that will accept two positive integers
// then print out their greatest common divisor
// and least common multiple
#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int a, b;
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
        return a;
    }
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    // do
    // {
    // } while (a <= 0 || b <= 0);
    scanf("%d,%d", &a, &b);
    // int d = gcd(a, b);
    // int m = lcm(a, b);
    printf("%d\n%d", gcd(a, b), lcm(a, b));
}