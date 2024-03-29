#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main() {
    int number, result = 0;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("Calling perfectProd1() \n");
    printf("perfectProd1(): %d\n", perfectProd1(number));
    printf("Calling perfectProd2() \n");
    perfectProd2(number, &result);
    printf("perfectProd2(): %d\n", result);
    return 0;
}
int perfectProd1(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        int x = 0;
        for (int j = 1; j < i; j++) {
            if (!(i % j)) {
                x += j;
            }
        }
        if (x == i) {
            printf("Perfect number: %d\n", i);
            result *= i;
        }
    }
    return result;
}
void perfectProd2(int num, int *prod) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        int x = 0;
        for (int j = 1; j < i; j++) {
            if (!(i % j)) {
                x += j;
            }
        }
        if (x == i) {
            printf("Perfect number: %d\n", i);
            result *= i;
        }
    }
    *prod = result;
}
