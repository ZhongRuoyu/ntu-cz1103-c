#include <stdio.h>
void printPattern3(int height);
int main() {
    int height;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("printPattern3(): \n");
    printPattern3(height);
    return 0;
}
void printPattern3(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", (i + j) % 10);
        }
        printf("\n");
    }
}
