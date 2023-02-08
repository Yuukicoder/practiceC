

#include <stdio.h>

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
