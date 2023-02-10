#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int main()
{
    int n = 7, m = 8;
    int *p1 = &n, *p2 = &m;
    *p1 += 5 + 3 * (*p2) - n;
    *p2 = 5 * (*p1) - 4 * m + 2 * m;
    printf("%d,%d", m, n);
}