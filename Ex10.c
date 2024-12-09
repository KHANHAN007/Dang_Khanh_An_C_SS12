#include <stdio.h>

void nhap(int a[], int *n)
{
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; ++i)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void add(int a[], int *n, int pos, int value)
{
    if (pos < 0 || pos > *n)
    {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = *n; i > pos; --i)
    {
        a[i] = a[i - 1];
    }
    a[pos] = value;
    (*n)++;
}

void replace(int a[], int n, int pos, int value)
{
    if (pos < 0 || pos >= n)
    {
        printf("Vi tri khong hop le!\n");
        return;
    }
    a[pos] = value;
}

void delete(int a[], int *n, int pos)
{
    if (pos < 0 || pos >= *n)
    {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < *n - 1; ++i)
    {
        a[i] = a[i + 1];
    }
    (*n)--;
}

void sxGiam(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sxtang(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int linearSearch(int a[], int n, int x)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == x)
            return i;
    }
    return -1;
}

int binarySearch(int a[], int n, int x)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int a[100], n = 0;
    int option;

    do
    {
        printf("\n\t\tMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            nhap(a, &n);
            break;
        case 2:
            xuat(a, n);
            break;
        case 3:
        {
            int pos, value;
            printf("Nhap vi tri can them: ");
            scanf("%d", &pos);
            printf("Nhap gia tri can them: ");
            scanf("%d", &value);
            add(a, &n, pos, value);
            break;
        }
        case 4:
        {
            int pos, value;
            printf("Nhap vi tri can sua: ");
            scanf("%d", &pos);
            printf("Nhap gia tri moi: ");
            scanf("%d", &value);
            replace(a, n, pos, value);
            break;
        }
        case 5:
        {
            int pos;
            printf("Nhap vi tri can xoa: ");
            scanf("%d", &pos);
            delete(a, &n, pos);
            break;
        }
        case 6:
        {
            int subChoice;
            printf("\ta. Giam dan\n");
            printf("\tb. Tang dan\n");
            printf("Nhap lua chon: ");
            getchar();
            subChoice = getchar();
            if (subChoice == 'a')
                sxGiam(a, n);
            else if (subChoice == 'b')
                sxtang(a, n);
            else
                printf("Lua chon khong hop le!\n");
            break;
        }
        case 7:
        {
            int x, subChoice;
            printf("Nhap gia tri can tim: ");
            scanf("%d", &x);
            printf("\ta. Tim kiem tuyen tinh\n");
            printf("\tb. Tim kiem nhi phan\n");
            printf("Nhap lua chon: ");
            getchar();
            subChoice = getchar();
            if (subChoice == 'a')
            {
                int result = linearSearch(a, n, x);
                if (result != -1)
                    printf("Tim thay tai vi tri %d\n", result);
                else
                    printf("Khong tim thay\n");
            }
            else if (subChoice == 'b')
            {
                sxtang(a, n);
                int result = binarySearch(a, n, x);
                if (result != -1)
                    printf("Tim thay tai vi tri %d\n", result);
                else
                    printf("Khong tim thay\n");
            }
            else
                printf("Lua chon khong hop le!\n");
            break;
        }
        case 8:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (option != 8);
    return 0;
}