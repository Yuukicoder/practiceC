#include <stdio.h>

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
            printf("Error: Cannot divide by 0\n");
            return 0;
        }
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        printf("Invalid operator\n");
    }
    printf(" Result: %lf", result);
    return 0;
}