#include <stdio.h>
#include <string.h>
int locateFirstChar(char *str, char ch);
int main() {
    char str[40], ch, *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n')) *p = '\0';
    printf("Enter the target character: \n");
    scanf("%c", &ch);
    printf("locateFirstChar(): %d\n", locateFirstChar(str, ch));
    return 0;
}
int locateFirstChar(char *str, char ch) {
    int i = 0;
    while (*str != ch && *str) {
        str++;
        i++;
    }
    if (*str) return i;
    return -1;
}
