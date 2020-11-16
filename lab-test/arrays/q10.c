#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main() {
    int data[SIZE][SIZE];
    int i, j;
    int rowSize, colSize;
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i = 0; i < rowSize; i++)
        for (j = 0; j < colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize) {
    int c, n, a[2 * SIZE];
    for (int i = 0; i < rowSize; i++) {
        c = 1;
        n = 0;
        for (int j = 1; j < colSize; j++) {
            if (data[i][j] == data[i][j - 1]) {
                c++;
            } else {
                a[n++] = data[i][j - 1];
                a[n++] = c;
                c = 1;
            }
        }
        a[n++] = data[i][colSize - 1];
        a[n++] = c;
        for (int j = 0; j < n && j < SIZE; j++) {
            data[i][j] = a[j];
            printf("%d ", data[i][j]);
        }
        printf("\b\n");
    }
}
