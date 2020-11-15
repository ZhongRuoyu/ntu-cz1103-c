#include <stdio.h>
#define SIZE 4

void transpose2D(int ar[][SIZE], int rowSize, int colSize);
void prtArray(int (*ar)[SIZE]);

int main(void) {
    int ar[SIZE][SIZE] = {{1, 2, 3, 4}, {1, 1, 2, 2}, {3, 3, 4, 4}, {4, 5, 6, 7}};
    prtArray(ar);
    transpose2D(ar, SIZE, SIZE);
    prtArray(ar);
    return 0;
}

void transpose2D(int ar[][SIZE], int rowSize, int colSize) {
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < i; j++) {
            int x = ar[i][j];
            ar[i][j] = ar[j][i];
            ar[j][i] = x;
        }
    }
}

void prtArray(int (*ar)[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
