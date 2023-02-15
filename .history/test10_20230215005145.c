// write a c program that will accept a positive integer n, n>=2 then print out primes between 2 to n
// idea: function return prime + while 2 to n
#include <stdio.h>
#include <math.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fod(i, a, b) for (int i = b; i >= a; i--)
int n;
int prime(int n)
{
    int m = sqrt(n);
    int i;
    if (n < 2)
        return 0;
    fo(i, 2, m) if (n % i == 0) return 0;
    return 1;
}
int main()
{
    do
    {
        scanf("%d", &n);
    } while (n < 2);
    fo(i, 2, n)
    {

        if (prime(i))
            printf("%d ", i);
    }
}