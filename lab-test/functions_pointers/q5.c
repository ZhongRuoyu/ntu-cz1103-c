#include <stdio.h>
void printPattern2(int height);
int main() {
    int height;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("printPattern2(): \n");
    printPattern2(height);
    return 0;
}
void printPattern2(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            putchar(((i + j) % 2) ? 'B' : 'A');
        }
        putchar('\n');
    }
}
