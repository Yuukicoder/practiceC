#include <stdio.h>
#fo(i, a, b) for (int i = a; i <= b; i++)
#fod(i, a, b) for (int i = a; i >= b; i--)
int n, m;
int main()
{
    scanf("%n", &n);
    fo(i, n, m)
        s += i;
    printf(s);
}