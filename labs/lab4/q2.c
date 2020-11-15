#include <stdio.h>
#include <string.h>
#define SIZE 10
#define INIT_VALUE 999
void printNames(char nameptr[][80], int size);
void readNames(char nameptr[][80], int *size);
int findTarget(char *target, char nameptr[][80], int size);
int main() {
    char nameptr[SIZE][80], t[40], *p;
    int size, result = INIT_VALUE;
    int choice;
    printf("Select one of the following options: \n");
    printf("1: readNames()\n");
    printf("2: findTarget()\n");
    printf("3: printNames()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                readNames(nameptr, &size);
                break;
            case 2:
                printf("Enter target name: \n");
                scanf("\n");
                fgets(t, 80, stdin);
                if (p = strchr(t, '\n')) *p = '\0';
                result = findTarget(t, nameptr, size);
                printf("findTarget(): %d\n", result);
                break;
            case 3:
                printNames(nameptr, size);
                break;
        }
    } while (choice < 4);
    return 0;
}
void printNames(char nameptr[][80], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%s ", nameptr[i]);
    printf("\n");
}
void readNames(char nameptr[][80], int *size) {
    printf("Enter size:\n");
    scanf("%d", size);
    while (*size <= 0 || *size > SIZE) {
        printf("Error. Size should be a positive integer smaller than %d.\n", SIZE);
        printf("Please try again: ");
        scanf("%d", size);
    }
    printf("Enter %d names:\n", *size);
    for (int i = 0; i < *size; i++) {
        scanf("%s", nameptr[i]);
    }
    for (int i = *size; i < SIZE; i++) {
        nameptr[i][0] = '\0';
    }
}
int findTarget(char *target, char nameptr[][80], int size) {
    for (int i = 0; i < size; i++) {
        if (!strncmp(target, nameptr[i], SIZE)) {
            return i;
        }
    }
    return -1;
}
