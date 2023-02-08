
#include <stdio.h>;
int main()
{

    int i00 = 12;
    int *int_p;
    int_p = &i00;
    *int_p++;
    printf("%d", i00);
}