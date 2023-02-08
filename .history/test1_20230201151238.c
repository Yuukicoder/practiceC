#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int n;
int main()
{
    int S = 0;
    do
    {
        scanf("%d", n);
        if (n != 0)
        {
            S += n;
        }
    } while (n != 0);
    printf("%d", S);
}