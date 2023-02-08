#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = a; i >= b; i--)
int n, m, s = 0;
int main()
{
    scanf("%d", &n, &m);
    fo(i, n, m)
    {
        s += i;
    }
    printf("%d", s);
}