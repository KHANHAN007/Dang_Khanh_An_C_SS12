#include <stdio.h>

void xuat(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[10] = {3, 1, 5, 7, 10, 9, 3, 6, 11, 12};
    int n = sizeof(a) / sizeof(int);
    xuat(a, n);
}