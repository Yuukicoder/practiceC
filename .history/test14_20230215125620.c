#include <stdio.h>

// We can remove the macros, as they are not necessary in this code
// #define fo(i, a, b) for (int i = a; i <= b; i++)
// #define fod(i, a, b) for (int i = b; i >= a; i--)

// Function to calculate greatest common divisor using Euclid's algorithm
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

// Function to calculate least common multiple using the gcd function
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b, d, m;

    do
    {
        printf("Enter two positive integers: ");
        scanf("%d %d", &a, &b);

        if (a <= 0 || b <= 0)
        {
            printf("Both integers must be positive.\n");
        }
    } while (a <= 0 || b <= 0);

    d = gcd(a, b);
    m = lcm(a, b);

    printf("Greatest common divisor: %d\n", d);
    printf("Least common multiple: %d\n", m);

    return 0;
}
