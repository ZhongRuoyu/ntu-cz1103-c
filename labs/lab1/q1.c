#include <stdio.h>
int main() {
    int studentNumber = 0, mark;
    printf("Enter Student ID: \n");
    scanf("%d", &studentNumber);
    while (studentNumber != -1) {
        printf("Enter Mark: ");
        scanf("%d", &mark);
        char ch = 'A' + (84 - mark) / 10;
        switch (ch) {
            case ('A' - 1): {
                ch = 'A';
                break;
            }
            case ('E'):
            case ('G'):
            case ('H'):
            case ('I'): {
                ch = 'F';
                break;
            }
        }
        printf("Grade = %c\n", ch);
        printf("Enter Student ID: ");
        scanf("%d", &studentNumber);
    }
    return 0;
}
