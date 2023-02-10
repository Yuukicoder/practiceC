#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int main()
{
    double d = 1.1;
    double *pd = &d;
    pd + 2;
    printf("%d", pd);
}