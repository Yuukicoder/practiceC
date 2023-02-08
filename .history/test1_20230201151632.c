#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int main()
{

    double num1, num2, result;
    char op;
    scanf("%lf%c%lf", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("divide by 0");
            return 0;
        }
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        printf("Op is not supported\n");
    }
    printf(" Result: %lf", result);
    return 0;
}