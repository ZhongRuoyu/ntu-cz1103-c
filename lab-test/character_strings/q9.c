#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main() {
    char str[80], *p;
    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n')) *p = '\0';
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str) {
    char m = str[0];
    int x = 0;
    int i = 1;
    while (str[i]) {
        if (str[i] > m) {
            m = str[i];
            x = i;
        }
        i++;
    }
    while (x) {
        str[x] = str[x - 1];
        x--;
    }
    str[0] = m;
}
