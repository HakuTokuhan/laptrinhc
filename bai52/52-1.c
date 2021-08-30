#include <stdio.h>
#define MAX 1000

int n;

void NhapMang(int a[]) {
    for (int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &a[i]);
    } 
}
 
void XuatMang(int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
}

void ThemPhanTu(int a[], int val, int pos) {
    if (n >= MAX)
        return;
    if (pos < 0)
        pos = 0;
    else if (pos > n)
        pos = n;
    for (int i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = val;
    ++n;
}

void XoaPhanTu(int a[], int pos) {
    if ( n <= 0)
        return;
    if (pos < 0)
        pos = 0;
    else if (pos >= n)
        pos = n - 1;
    for (int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];
    --n;
}

int main()
{
    int a[MAX];
    printf("\nNhap so luong phan tu: ");
    scanf("%d", &n);
    NhapMang(a);
    XuatMang(a);
    
    printf("\n=======THEM PHAN TU======\n");
    int val, pos;
    printf("\nNhap so can them: ");
    scanf("%d", &val);
    printf("\nNhap vi tri muon chen: ");
    scanf("%d", &pos);
    ThemPhanTu(a, val, pos);
    printf("\nMang sau khi them: ");
    XuatMang(a);
   
    printf("\n=======XOA PHAN TU======\n");
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &pos);
    XoaPhanTu(a, pos);
    printf("\nMang sau khi xoa: ");
    XuatMang(a);
    printf("\nDone!");
    
    return 0;
}