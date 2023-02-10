#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int n;
int main()
{
    scanf("%d", &n);
    printf("%d", n(n + 1) / 2);
}