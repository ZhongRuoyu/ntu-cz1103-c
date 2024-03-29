#include <stdio.h>
double computePay1(int noOfHours, int payRate);
void computePay2(int noOfHours, int payRate, double *grossPay);
int main() {
    int noOfHours, payRate;
    double grossPay;
    printf("Enter number of hours: \n");
    scanf("%d", &noOfHours);
    printf("Enter hourly pay rate: \n");
    scanf("%d", &payRate);
    printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));
    computePay2(noOfHours, payRate, &grossPay);
    printf("computePay2(): %.2f\n", grossPay);
    return 0;
}
double computePay1(int noOfHours, int payRate) {
    return (noOfHours <= 160) ? noOfHours * payRate : (noOfHours - 160) * (payRate * 1.5) + 160 * payRate;
}
void computePay2(int noOfHours, int payRate, double *grossPay) {
    *grossPay = (noOfHours <= 160) ? noOfHours * payRate : (noOfHours - 160) * (payRate * 1.5) + 160 * payRate;
}
