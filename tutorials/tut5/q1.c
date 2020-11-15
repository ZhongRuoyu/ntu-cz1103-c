#include <math.h>
#include <stdio.h>

struct circle {
    double radius;
    double x;
    double y;
};

int intersect(struct circle c1, struct circle c2);
int contain(struct circle *c1, struct circle *c2);
double calcDist(struct circle *c1, struct circle *c2);

int main(void) {
    struct circle c1 = {3, 3, 0}, c2 = {1, 2, 1};
    printf("c1 and c2 %s.\n", intersect(c1, c2) ? "intersect" : "do not intersect");
    printf("c1 %s c2.\n", contain(&c1, &c2) ? "contains" : "does not contain");
    printf("c2 %s c1.\n", contain(&c2, &c1) ? "contains" : "does not contain");
    return 0;
}

int intersect(struct circle c1, struct circle c2) {
    if (calcDist(&c1, &c2) <= (c1.radius + c2.radius)) {
        return 1;
    }
    return 0;
}

int contain(struct circle *c1, struct circle *c2) {
    if ((calcDist(c1, c2) + c2->radius) < c1->radius) {
        return 1;
    }
    return 0;
}

double calcDist(struct circle *c1, struct circle *c2) {
    return sqrt((c1->x - c2->x) * (c1->x - c2->x) + (c1->y - c2->y) * (c1->y - c2->y));
}
