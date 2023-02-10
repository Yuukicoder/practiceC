#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int main()
{
    int n = 10;
    ++n;
    printf("%d", n);
}