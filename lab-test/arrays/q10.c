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
    for (int i = 0; i < rowSize; i++) {
        int a[SIZE] = {data[i][0]};
        int p = 1;
        int x = 0;
        int y = 1;
        for (int j = 1; j < colSize; j++) {
            if (data[i][j] == data[i][x]) {
                y++;
            } else {
                a[p++] = y;
                y = 1;
                a[p++] = data[i][j];
                x = j;
            }
        }
        a[p++] = y;
        for (int k = 0; k < p; k++) {
            data[i][k] = a[k];
            printf("%d ", data[i][k]);
        }
        printf("\b\n");
        for (int k = p; k < SIZE; k++) {
            data[i][k] = 0;
        }
    }
}
