#include <stdio.h>

int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; ++i)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}
int main()
{
    int a[10] = {3, 1, 5, 7, 10, 9, 3, 6, 11, 12};
    int n = sizeof(a) / sizeof(int);
    printf("Phan tu ln nhat mang: %d", max(a, n));
}