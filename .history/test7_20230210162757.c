#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int main()
{
    int n, m;
    printf("Ban hay nhap lua chon (1,2 va for EXit)");
    scanf("%d", &n);
    switch (n)
    {
    case '1':
        m = 1;
        break;
    case '0':
        m = 0;
        break;
    case '2':
        m = 2;
        break;

        // default:
        //     printf("Ban hay nhap lai");
        //     break;
    }
}