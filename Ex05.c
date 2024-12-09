#include <stdio.h>

int prime(int n)
{
    if (n < 2)
        return 0;
    if (n < 4)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    int i = 5;
    while (i * i <= n)
    {
        if (!(n % i) || !(n % (i + 2)))
            return 0;
        i += 6;
    }
    return 1;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%s\n", prime(a) ? "true" : "false");
    printf("%s", prime(b) ? "true" : "false");
}
