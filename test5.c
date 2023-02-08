#include <stdio.h>
#include <stdlib.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int MAXN;
void fn1()
{
    printf("I am doing W1\n");
}
void fn2()
{
    printf("I am doing W2\n");
}
int main()
{
    int choice;
    while (choice != 0)
    {
        printf("Enter Your Choice (0 for Exit):\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            fn1();
            break;
        case 2:
            fn2();
            break;
        default:
            printf("Default Case.\n");
        }
    }
    return 0;
}