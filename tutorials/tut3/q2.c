#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void obtFreqDist(int *, int);
void prtDist(int *);

int main(void) {
    int n;
    int dist[SIZE] = {0};

    srand(time(NULL));
    printf("Input n: ");
    scanf("%d", &n);

    obtFreqDist(dist, n);
    prtDist(dist);

    return 0;
}

void obtFreqDist(int *dist, int n) {
    for (int i = 0; i < n; i++) {
        dist[(rand() % 100) % 10]++;
    }
}

void prtDist(int *dist) {
    for (int i = 0; i < SIZE; i++) {
        printf("%2d - %2d | ", i * 10, i * 10 + 9);
        for (int j = 0; j < dist[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}
