#include <stdio.h>
void computeTotal(int numOfLines);
int main() {
    int numOfLines;
    printf("Enter number of lines: \n");
    scanf("%d", &numOfLines);
    computeTotal(numOfLines);
    return 0;
}
void computeTotal(int numOfLines) {
    for (int i = 1; i <= numOfLines; i++) {
        int total = 0;
        int count;
        int x;
        printf("Enter line %d:\n", i);
        scanf("%d", &count);
        for (int j = 0; j < count; j++) {
            scanf("%d", &x);
            total += x;
        }
        printf("Total: %d\n", total);
    }
}
