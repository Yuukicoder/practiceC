// write a C program that will accept two positive integers
// then print out their greatest common divisor
// and least common multiple
#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int a, b, d, m;
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
    do
    {

        scanf("%d,%d", &a, &b);
        d = gcd(a, b);
        m = lcm(a, b);
    } while (a <= 0 || b <= 0);
    printf("%d\n%d", d, m);
}