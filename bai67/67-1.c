#include <stdio.h>
#include <stdlib.h>

void NhapMaTran(int **a, int dong, int cot) {
    int i, j;
    for (i = 0; i < dong; i++)
        for (j = 0; j < cot; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void XuatMaTran(int **a, int dong, int cot) {
    int i, j;
    for (i = 0; i < dong; i++) {
        for (j = 0; j < cot; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}

int main()
{
    int **a = NULL, dong, cot;
    int i;
    printf("Nhap vao so dong = ");
    scanf("%d", &dong);
    printf("Nhap vao so cot = ");
    scanf("%d", &cot);

    a = (int **)malloc(dong * sizeof(int *));
    for (i = 0; i < dong; i++)
        a[i] = (int *)malloc(cot * sizeof(int));
    NhapMaTran(a, dong, cot);
    XuatMaTran(a, dong, cot);

    for (i = 0; i < dong; i++)
        free(a[i]);
    free(a);
    return 0;
}