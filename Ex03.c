#include <stdio.h>

int factorial(int a)
{
    if (a == 0)
        return 1;
    return a * factorial(a - 1);
}
int main()
{
    printf("%d ", factorial(5));
}