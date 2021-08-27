#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main(void)
{
    int a[] = {2, 3, 4, 10, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 10;
    int result = binarySearch(a, 0, n - 1, x);
    if (result == -1)
        printf("Khong tim thay %d", x);
    else
        printf("%d xuat hien tai chi so %d", x, result);
    return 0;
}