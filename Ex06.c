#include <stdio.h>

int perfectNumber(int a)
{
    if (a < 2)
        return 0;
    int sum = 1;
    for (int i = 2; i * i <= a; ++i)
    {
        if (a % i == 0)
        {
            sum += i;
            if (a / i != i)
                sum += a / i;
        }
    }
    return sum == a;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%s\n", perfectNumber(a) ? "true" : "false");
    printf("%s", perfectNumber(b) ? "true" : "false");
}
