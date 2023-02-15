#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b, d, m;

    do
    {
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0);

    d = gcd(a, b);
    m = lcm(a, b);

    printf("%d\n", d);
    printf("%d\n", m);

    return 0;
}
