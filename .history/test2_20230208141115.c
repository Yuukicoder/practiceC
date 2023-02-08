#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int main()
{

    int S = 0, x;

    do
    {

        printf("Enter an integer: ");
        scanf("%d", &x);

        if (x != 0)
        {
            S = S + x;
        }
    } while (x != 0);

    printf("The sum of the integers is: %d\n", S);

    return 0;
}
