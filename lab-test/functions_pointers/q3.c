#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main() {
    int power;
    float number, result = -1;
    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));
    power2(number, power, &result);
    printf("power2(): %.2f\n", result);
    return 0;
}
float power1(float num, int p) {
    float result = 1;
    if (p >= 0) {
        for (; p; p--) {
            result *= num;
        }
    } else {
        for (; p; p++) {
            result /= num;
        }
    }
    return result;
}
void power2(float num, int p, float *result) {
    float res = 1;
    if (p >= 0) {
        for (; p; p--) {
            res *= num;
        }
    } else {
        for (; p; p++) {
            res /= num;
        }
    }
    *result = res;
}
