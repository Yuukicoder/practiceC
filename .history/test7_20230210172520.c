#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int main()
{
    int n;
    printf("Ban hay nhap lua chon (1,2,0 va for EXit)");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Viec %d dc thuc hien", n);
    case 0:
        break;
    case 2:
        printf("Viec %d dc thuc hien", n);

    default:
        printf("Ban hay nhap lai");
        }
}