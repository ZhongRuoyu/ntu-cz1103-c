#include <stdio.h>
int platform1D(int ar[], int size);
int main() {
    int i, b[50], size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &b[i]);
    printf("platform1D(): %d\n", platform1D(b, size));
    return 0;
}
int platform1D(int ar[], int size) {
    int x = ar[0], c = 1, m = 1;
    for (int i = 1; i < size; i++) {
        if (x == ar[i]) {
            c++;
        } else {
            if (m < c) m = c;
            c = 1;
        }
        x = ar[i];
    }
    return m;
}
