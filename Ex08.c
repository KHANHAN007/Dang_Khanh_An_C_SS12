#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    gcd(b, a % b);
}
int main()
{
    printf("%d ", gcd(15, 25));
}