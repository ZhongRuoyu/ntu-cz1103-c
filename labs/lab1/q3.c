#include <stdio.h>
int main() {
    int height, ch;
    printf("Enter the height:\n");
    scanf("%d", &height);
    printf("Pattern:\n");
    for (int i = 1; i <= height; i++) {
        char ch = '0' + 1 + (i + 2) % 3;
        for (int j = 0; j < i; j++) {
            putchar(ch);
        }
        putchar('\n');
    }
    return 0;
}
