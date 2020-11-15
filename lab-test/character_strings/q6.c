#include <ctype.h>
#include <stdio.h>
#include <string.h>
void cipher(char *s);
void decipher(char *s);
int main() {
    char str[80], dummychar, *p;
    int choice;
    printf("Select one of the following options: \n");
    printf("1: cipher() \n");
    printf("2: decipher() \n");
    printf("3: exit() \n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanf("%c", &dummychar);
                printf("Enter the string: \n");
                fgets(str, 80, stdin);
                if (p = strchr(str, '\n')) *p = '\0';
                printf("To cipher: %s -> ", str);
                cipher(str);
                printf("%s\n", str);
                break;
            case 2:
                scanf("%c", &dummychar);
                printf("Enter the string: \n");
                fgets(str, 80, stdin);
                if (p = strchr(str, '\n')) *p = '\0';
                printf("To decipher: %s -> ", str);
                decipher(str);
                printf("%s\n", str);
                break;
            default:
                break;
        }
    } while (choice < 3);
    return 0;
}
void cipher(char *s) {
    while (*s) {
        if (*s >= 'A' && *s <= 'Z') {
            *s = (*s == 'Z') ? 'A' : *s + 1;
        } else if (*s >= 'a' && *s <= 'z') {
            *s = (*s == 'z') ? 'a' : *s + 1;
        }
        s++;
    }
}
void decipher(char *s) {
    while (*s) {
        if (*s >= 'A' && *s <= 'Z') {
            *s = (*s == 'A') ? 'Z' : *s - 1;
        } else if (*s >= 'a' && *s <= 'z') {
            *s = (*s == 'a') ? 'z' : *s - 1;
        }
        s++;
    }
}
