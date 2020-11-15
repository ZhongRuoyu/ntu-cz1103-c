#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main() {
    int number, result = INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    return 0;
}
int extEvenDigits1(int num) {
    int x = 0;
    int y = 0;
    while (num) {
        if (!(num % 10 % 2)) {
            x = x * 10 + num % 10;
        }
        num /= 10;
    }
    while (x) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    return y ? y : -1;
}
void extEvenDigits2(int num, int *result) {
    int x = 0;
    int y = 0;
    while (num) {
        if (!(num % 10 % 2)) {
            x = x * 10 + num % 10;
        }
        num /= 10;
    }
    while (x) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    *result = y ? y : -1;
}
