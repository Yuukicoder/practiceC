#include <stdio.h>
#define fo(i, a, b) for (char i = a; i >= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int main()
{
    char c1, c2, t, c;
    int d;

    printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2);

    if (c1 > c2)
    {
        t = c1;
        c1 = c2;
        c2 = t;
    }
    d = c2 - c1;
    printf("Difference: %d\n", d);
    = fo(c, c2, c1)
    {
        printf("%c : %d, %o, %X\n", c, c, c, c);
    }

    return 0;
}
