#include <stdio.h>

char *strncpy(char *s1, char *s2, int n);

int main(void) {
    char s1[10] = "123456789";
    char s2[8] = "abcdefg";
    strncpy(s1, s2, 5);
    printf("%s, %s", s1, s2);
    return 0;
}

char *strncpy(char *s1, char *s2, int n) {
    int null = 0;
    for (int i = 0; i < n; i++) {
        if (!s2[i]) {
            null = 1;
        }
        s1[i] = null ? 0: s2[i];
    }
    return s1;
}
