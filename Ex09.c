#include <stdio.h>

void xuat(int a[][100], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void nhap(int a[][100], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &a[i][j]);
        }
    }
}
void angleMatrix(int a[][100], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (i == 0 && j == 0 || j == col - 1 && i == 0 || i == row - 1 && j == 0 || i == row - 1 && j == col - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}
void bien(int a[][100], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}
void duongCheo(int a[][100], int row, int col)
{
    printf("Cac phan tu tren duong cheo phu:\n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (i + j==row -1)
            {
                printf("%d ", a[i][j]);
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
    printf("\nCac phan tu nam tren duong cheo chinh:\n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (i == j)
            {
                printf("%d ", a[i][j]);
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}
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
void primeMatrix(int a[][100], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (prime(a[i][j]))
            {
                printf("%d ", a[i][j]);
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    int row, col;
    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);
    int a[100][100];
    int option;
    do
    {
        printf("\n\t\tMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang.\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran.\n");
        printf("3. In ra cac phan tu o goc theo ma tran.\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran.\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran.\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran.\n");
        printf("7. Thoat.\n");
        printf("\nNhap lua chon: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            nhap(a, row, col);
            break;
        case 2:
            xuat(a, row, col);
            break;
        case 3:
            angleMatrix(a, row, col);
            break;
        case 4:
            bien(a, row, col);
            break;
        case 5:
            duongCheo(a, row, col);
            break;
        case 6:
            primeMatrix(a, row, col);
            break;
        case 7:
            printf("Tam biet.");
            return 0;
        default:
            printf("Lua chon khong hop le. Nhap lai.\n");
            break;
        }
    } while (option != 7);
}
// 3
// 3
// 1
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9