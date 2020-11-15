#include <math.h>
#include <stdio.h>

double calDistanceA(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
void calDistanceB(double x1, double y1, double x2, double y2, double *distance) {
    *distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void) {
    double x1, y1, x2, y2, distA, distB;
    printf("Enter x1, y1, x2, y2, respectively (seperated by spaces): ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    distA = calDistanceA(x1, y1, x2, y2);
    calDistanceB(x1, y1, x2, y2, &distB);
    printf("The distance between (x1, y1) and (x2, y2) is:\n");
    printf("(a) %lf\n(b) %lf\n", distA, distB);
    return 0;
}
