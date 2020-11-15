#include <stdio.h>
int main() {
    int lineCount;
    printf("Enter number of lines: ");
    scanf("%d", &lineCount);
    for (int i = 1; i <= lineCount; i++) {
        int x;
        int sum = 0, numberCount = 0;
        printf("Enter line %d (end with -1):\n", i);
        while (1) {
            scanf("%d", &x);
            if (x == -1) break;
            sum += x;
            numberCount++;
        }
        if (numberCount) {
            printf("Average = %.2f\n", (double)sum / numberCount);
        } else {
            printf("No numbers read.\n");
        }
    }
    return 0;
}
