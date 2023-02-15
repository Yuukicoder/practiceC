// write a C program that will accept the integral part
// and fraction of a real number then print out the this real number
#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int ipart, fraction;
double makeDouble(int ipart, int fraction)
{
    double d_f = fraction;
    while (d_f >= 1)
    {
        d_f = d_f / 10;
    }
    if (ipart < 0)
        return ipart - d_f;
    return ipart + d_f;
}
int main()
{
    scanf("%d", ipart);
    do
    {
        scanf("%d", fraction);
    } while (fraction < 0);
    int value = makeDouble(ipart, fraction);
    printf("%d", value);
}