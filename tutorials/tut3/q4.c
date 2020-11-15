#include <stdio.h>
#define SIZE 4

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
void prtArray(int (*ar)[SIZE]);

int main(void) {
    int ar[SIZE][SIZE] = {{4, 3, 8, 6}, {9, 0, 6, 5}, {5, 1, 2, 4}, {9, 8, 3, 7}};
    prtArray(ar);
    reduceMatrix2D(ar, SIZE, SIZE);
    prtArray(ar);
    return 0;
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize) {
    for (int j = 0; j < colSize; j++) {
        for (int i = j + 1; i < rowSize; i++) {
            ar[j][j] += ar[i][j];
            ar[i][j] = 0;
        }
    }
}

void prtArray(int (*ar)[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d ", ar[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
