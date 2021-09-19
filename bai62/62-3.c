#include <stdio.h>
#include <string.h>

void Kiemtra(char chuoi[100], char n) {
    int i, dem = 0;
    for (i = 0; i <strlen(chuoi); i++)
        if (chuoi[i] == n)
            dem++;
    if (dem > 0)
        printf("\nKi tu %c trong chuoi xuat hien %d lan", n, dem);
    if (dem == 0)
        printf("\nKi tu %c khong co trong chuoi");
}

int main()
{
    char chuoi[100], n;
    printf("Nhap chuoi: ");
    gets(chuoi);
    printf("Chuoi vua nhap la: %s", chuoi);
    printf("\nXin moi ban nhap ky tu can dem: ");
    scanf("%c", &n);
    Kiemtra(chuoi, n);
}