#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main() {
    int a[20], i, size = 0, num;
    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    return 0;
}
void specialNumbers1D(int ar[], int num, int *size) {
    *size = 0;
    int x, y, z;
    for (int i = 100; i <= num; i++) {
        x = i;
        y = 0;
        while (x) {
            z = x % 10;
            y += z * z * z;
            x /= 10;
        }
        if (y == i) ar[(*size)++] = i;
    }
}
