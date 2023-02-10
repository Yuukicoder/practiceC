#include <stdio.h>
#include <stdlib.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int main()
{
    double *p1, *p2;
    p1 = (double *)malloc(sizeof(double));
    p2 = (double *)malloc(sizeof(double));
    printf("pl, address: %u, value: %u\n", &p1, p1);
    printf("p2, address: %u, value: %u\n", &p2, p2);
    printf("lnput 2 numbers:");
    scanf(p1, p2);
    printf("Sum: %lf\n", *p1 + *p2);
    printf("Difference: %lf\n", *p1 - *p2);
    printf("Product: %lf\n", *p1 * (*p2));
    printf("Quotient: 0/01f\n", *p1 / *p2);
}