#include <stdio.h>
int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);
int main() {
    int num, result;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    return 0;
}
int sumSqDigits1(int num) {
    int res = 0;
    int x;
    while ((x = num % 10) || num) {
        res += x * x;
        num /= 10;
    }
    return res;
}
void sumSqDigits2(int num, int *result) {
    int res = 0;
    int x;
    while ((x = num % 10) || num) {
        res += x * x;
        num /= 10;
    }
    *result = res;
}
