#include <stdio.h>


void nhap()
{
    int row, col;
    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);

    int a[100][100];
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    xuat(a, row, col);
}
int main()
{
    nhap();
}