// write a C program that will print out the value at the n position in Fibonacci sequence
#include <stdio.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int n;
double fibo(int n)
{
    int t1 = 1, t2 = 1, f = 1;
    fo(i, 3, n)
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return f;
}
int main()
{
    do
    {
        scanf("%d", &n);
    } while (n < 1);
    printf("%u", fibo(n));
}