#include <stdio.h>
#include <math.h>

int main()
{
    // Nhap mang
    int a[1000], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Tim TBC
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i + 2)
        if (a[i] % 2 != 0) {
            tong += a[i];
            dem++;
        }
    printf("\nTrung binh cong cac so le o vi tri chan la: %d", tong / dem);

    // Tim so lon nhat
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    printf("\nSo lon nhat trong mang la: %d", max);

    // Tim vi tri cac so nho nhat
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    printf("\nVi tri cua cac so nho nhat trong mang %d la: ", min);
    for (int i = 0; i < n; i++)
        if (a[i] == max)
            printf("%d  ", i);
    
    // cac so chinh phuong
    int demx = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
        while (j * j <= a[i])
            if (j * j == a[i])
                demx++;
    printf("\nSo so chinh phuong co trong mang la: %d", demx);

    // In cac so nguyen to
    printf("\nCac so nguyen to co trong mang la: ");
    for (int i = 0; i < n; i++)
        for (int j = 2; i <= sqrt(a[i]); j++)
            if (n % i == 0)
                printf("%d  ", a[i]);
    
    // Thay the cac phan tu am bang gia tri 0
    for (int i = 0; i < n; i++)
        if (a[i] < 0)
            a[i] = 0;
    printf("\nMang sau khi chinh sua: ");
    for (int i = 0; i < n; i++)
        printf("\na[%d] = %d", i, a[i]);

    /* Xoa cac phan tu am
    for (int i = 0; i < n; ++i){
        if(a[i] < 0){
            for(int j = i; j < n-1;j++){
                arr[j] = arr[j+1];
            }
            --n;
        }
    }
    printf("\nMang sau khi xoa phan tu am la: ");
    for(int i = 0;i < n;++i){
        printf("%d ", arr[i]);
    }
    */

    // Sap xep mang
    for (int i = 0;i < n-1;++i)
        for(int j = i+1; j < n;++j)
            if(a[i] > a[j]){
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
    printf("\nMang sau khi sap xep tang dan la: ");
    for (int i = 0;i < n;++i)
        printf("%d ", a[i]);
}