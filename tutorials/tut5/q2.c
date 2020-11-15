#include <stdio.h>

typedef struct {
    float operand1, operand2;
    char op; /* operator ‘+’,‘‐’,‘*’ or ‘/’ */
} bexpression;

float compute1(bexpression expr);
float compute2(bexpression *expr);

int main(void) {
    bexpression b1 = {5, 2, '+'}, b2 = {5, 2, '-'}, b3 = {5, 2, '*'}, b4 = {5, 2, '/'};
    printf("b1 %f %f\n", compute1(b1), compute2(&b1));
    printf("b2 %f %f\n", compute1(b2), compute2(&b2));
    printf("b3 %f %f\n", compute1(b3), compute2(&b3));
    printf("b4 %f %f\n", compute1(b4), compute2(&b4));
    return 0;
}

float compute1(bexpression expr) {
    switch (expr.op) {
        case '+': {
            return expr.operand1 + expr.operand2;
        }
        case '-': {
            return expr.operand1 - expr.operand2;
        }
        case '*': {
            return expr.operand1 * expr.operand2;
        }
        case '/': {
            if (expr.operand2) {
                return expr.operand1 / expr.operand2;
            }
        }
        default: {
            ;
        }
    }
    return 0;
}

float compute2(bexpression *expr) {
    switch (expr->op) {
        case '+': {
            return expr->operand1 + expr->operand2;
        }
        case '-': {
            return expr->operand1 - expr->operand2;
        }
        case '*': {
            return expr->operand1 * expr->operand2;
        }
        case '/': {
            if (expr->operand2) {
                return expr->operand1 / expr->operand2;
            }
        }
        default: {
            ;
        }
    }
    return 0;
}
