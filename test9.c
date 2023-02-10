// =========================== câu 1 ==================================
#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int n, s = 1;
float s1 = 0;
int main()
{
    scanf("%d", &n);
    printf("%d\n", n * (n + 1) / 2);
    fo(i, 1, n)
    {
        s *= i;
        s1 += (float)1 / i;
    }
    printf("%d\n%fl\n", s, s1);
}
