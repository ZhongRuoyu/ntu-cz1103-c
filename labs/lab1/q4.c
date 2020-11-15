#include <stdio.h>
int main() {
    double x;
    double result = 1.0;
    printf("Enter x:\n");
    scanf("%lf", &x);
    for (int i = 1; i <= 10; i++) {
        double term = 1.0;
        for (int j = 1; j <= i; j++) {
            term *= x;
            term /= j;
        }
        result += term;
    }
    printf("Result = %.2f", result);
    return 0;
}
