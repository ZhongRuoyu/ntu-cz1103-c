#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main() {
    int ar[50], i, size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", ar + i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i = 0; i < size; i++)
        printf("%d ", *(ar + i));
    return 0;
}
void swapMinMax1D(int ar[], int size) {
    int x = 0, y = 0, z;
    for (int i = 1; i < size; i++) {
        if (ar[i] <= ar[x]) x = i;
        if (ar[i] >= ar[y]) y = i;
    }
    z = ar[x];
    ar[x] = ar[y];
    ar[y] = z;
}
