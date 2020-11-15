#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main() {
    char str[80], *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n')) *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s) {
    int x = 0, l = 0;
    while (*s) {
        if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z')) {
            x++;
        } else {
            if (l < x) l = x;
            x = 0;
        }
        s++;
    }
    return l;
}
