
#include <stdio.h>
int main()
{

    int i00 = 12;
    int *p, *p2;
    p = &i00;
    p2 = (int *)malloc(sizeof(int));
    ++*p;
    printf("%d", i00);
}